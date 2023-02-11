using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using Photon.Pun;
using UnityEngine.SceneManagement;
public class BattleMatchManager : MonoBehaviourPunCallbacks
{
    public static BattleMatchManager instance;
    public List<Transform> positionSp;
    public GameObject prefabHero;
    public Tilemap map;
    public Tile boxTile;
    public PhotonView view;

    private void Awake()
    {
        if (instance == false)
            instance = this;
        else
            Destroy(gameObject);
        
    }
    private void Start()
    {
        int id = -1;
        for(int i = 0; i < PhotonNetwork.CurrentRoom.PlayerCount; i ++)
        {
            if (PhotonNetwork.PlayerList[i] == PhotonNetwork.LocalPlayer)
            {
                id = i;
                break;
            }    
        }
        if (id == -1) return;
        PhotonNetwork.Instantiate(prefabHero.name, positionSp[id].position, Quaternion.identity);
    }
    
    public void ExplodeBomb(MatchBomScript bom)
    {
        if (map == null) return;
        Vector3Int bomCell = map.WorldToCell(bom.transform.position);

        //CheckTile(bomCell, 0);
        List<int> cellLimitation = new List<int>() { 0, 0, 0, 0 };
        for (int i = 0; i < bom.power; i++)
        {
            if (CheckTile(new Vector3Int(bomCell.x + i, bomCell.y, bomCell.z), cellLimitation[0]) == false)
            {
                cellLimitation[0] = 1;
            }
            if (CheckTile(new Vector3Int(bomCell.x - i, bomCell.y, bomCell.z), cellLimitation[1]) == false)
            {
                cellLimitation[1] = 1;
            }
            if (CheckTile(new Vector3Int(bomCell.x, bomCell.y + i, bomCell.z), cellLimitation[2]) == false)
            {
                cellLimitation[2] = 1;

            }
            if (CheckTile(new Vector3Int(bomCell.x, bomCell.y - i, bomCell.z), cellLimitation[3]) == false)
            {
                cellLimitation[3] = 1;
            }
        }
    }
    public GameObject prefabFire;
    public Tile floorTile;
    public bool CheckTile(Vector3Int cell, int isBlocked)
    {
        Tile tl = map.GetTile<Tile>(cell);
        if ( isBlocked == 1)
        {
           return false;
        }
        if(Physics2D.OverlapPoint(map.GetCellCenterWorld(cell), LayerMask.GetMask("Player")) != null)
        {
            Debug.LogError("yes");
            if (Physics2D.OverlapPoint(map.GetCellCenterWorld(cell), LayerMask.GetMask("Player")).gameObject.GetComponent<PhotonView>().IsMine)
            {
                PhotonNetwork.Destroy(Physics2D.OverlapPoint(map.GetCellCenterWorld(cell), LayerMask.GetMask("Player")).gameObject.GetComponent<PhotonView>());
                view.RPC("LeftRoom", RpcTarget.All);
            }
            else
            {

            }
            
        }
        if (tl == boxTile)
        {
            //Debug.LogError(cell.ToString());
            
            view.RPC("UpdateMap", RpcTarget.All,  new Vector3(cell.x, cell.y, cell.z));
            //tilemapFloor.SetTile(cell, floorTile);
            
            Vector3 pos = map.GetCellCenterWorld(cell);
            Destroy(Instantiate(prefabFire, pos, Quaternion.identity), 1f);
            return false;
        }
        else
        {
              
            //Debug.LogError("hihi");
            Vector3 pos = map.GetCellCenterWorld(cell);

            Destroy(Instantiate(prefabFire, pos, Quaternion.identity), 1f);
            if (tl == floorTile)
                return true;
            else
                return false;
        }
        
    }    
    
    [PunRPC]
    public void UpdateMap(Vector3 cl)
    { 
    //    Vector3Int cellPos = new Vector3Int((int) cl.x,(int) cl.y,(int) cl.z);
        //if(view.IsMine)
        //{
            Debug.LogError(cl.ToString());
            
            map.SetTile(Vector3Int.FloorToInt(cl), null);
        //}    
    }  
    //[PunRPC]
    //public void CallResult()
    //{
        
    //}
    [PunRPC]
    public void LeftRoom()
    {
        PhotonNetwork.LeaveRoom();
    }

    public override void OnLeftRoom()
    {
        SceneManager.LoadScene("RankingMatch");
        base.OnLeftRoom();
    }
}

