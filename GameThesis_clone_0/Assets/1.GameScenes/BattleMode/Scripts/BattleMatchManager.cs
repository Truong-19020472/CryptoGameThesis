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

    //public GameObject chest;
    private void Awake()
    {
        if (instance == false)
            instance = this;
        else
            Destroy(gameObject);
        
    }
    private GameObject currentSpawnedObject;
    private void Start()
    {
        //PhotonNetwork.AutomaticallySyncScene = true;
        //chest.gameObject.SetActive(false);
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
        currentSpawnedObject = PhotonNetwork.Instantiate(prefabHero.name, positionSp[id].position, Quaternion.identity);
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
    public bool isEndGame = false;
    public bool CheckTile(Vector3Int cell, int isBlocked)
    {
        Tile tl = map.GetTile<Tile>(cell);
        if ( isBlocked == 1)
        {
           return false;
        }
        //if (Physics2D.OverlapPoint(map.GetCellCenterWorld(cell), LayerMask.GetMask("Player")) != null && isEndGame == false)
        //{
        //    //Debug.LogError("yes");
        //    //ví dụ A dính đạn thì A nếu đang ở máy A thì sẽ gọi event còn bên B win thì sẽ tính thưởng
        //    //if (Physics2D.OverlapPoint(map.GetCellCenterWorld(cell), LayerMask.GetMask("Player")).gameObject.GetComponent<PhotonView>().IsMine)
        //    //{
        //    //    //PhotonNetwork.Destroy(Physics2D.OverlapPoint(map.GetCellCenterWorld(cell), LayerMask.GetMask("Player")).gameObject.GetComponent<PhotonView>());
        //    //    view.RPC("LeftRoom", RpcTarget.All);
        //    //    //LeftRoom();
        //    //}
        //    //else
        //    //{
        //    //    Debug.LogError("meme");
        //    //    //if (PlayerPrefs.HasKey("TemporaryCoin"))
        //    //    //{
        //    //    float coin = float.Parse(GameData.currentCoin);

        //    //    coin += 0.01f;
        //    //    FireBaseData.instanceData.UpdateCoinData(coin.ToString());
        //    //    //PlayerPrefs.SetFloat("TemporaryCoin", coin);
        //    //    //PlayerPrefs.Save();
        //    //    //if (DataBaseManager.GetToken(DataBaseManager.GetIDAccount(PlayerPrefs.GetString("Account"))).Equals("") == false)
        //    //    //{
        //    //    //    DataBaseManager.UpdateCoin(DataBaseManager.GetIDAccount(PlayerPrefs.GetString("Account")), coin.ToString());
        //    //    //}
        //    //    //}
        //    //    //chest.SetActive(true);

        //    //    //Invoke("LeftRoom", 2f);
        //    //    //LeftRoom();

        //    //}

        //}
        if (tl == boxTile)
        {
            //Debug.LogError(cell.ToString());
            
            view.RPC("UpdateMap", RpcTarget.All,  new Vector3(cell.x, cell.y, cell.z));
            //tilemapFloor.SetTile(cell, floorTile);
            
            Vector3 pos = map.GetCellCenterWorld(cell);
            Destroy(Instantiate(prefabFire, pos, Quaternion.identity), 0.7f);
            return false;
        }
        else
        {
              
            //Debug.LogError("hihi");
            Vector3 pos = map.GetCellCenterWorld(cell);

            Destroy(Instantiate(prefabFire, pos, Quaternion.identity), 0.7f);
            if (tl == floorTile)
                return true;
            else
                return false;
        }
        
    }
    public GameObject lose, win;
    public void GameLost()
    {
        if(isEndGame == true)
        {
            return;
        }
        isEndGame = true;
        //PhotonNetwork.Destroy(currentSpawnedObject);
        lose.SetActive(true);
        //if (PhotonNetwork.IsMasterClient)
        //{
        //    Invoke("BackRoomScene", 2f);
        //    //view.RPC("BackRoomScene", RpcTarget.AllBuffered);
        //}
        //view.RPC("LeftRoom", RpcTarget.All);
        StartCoroutine(DelayToLeave());
    }

    public void GameWin()
    {
        if (isEndGame == true)
        {
            return;
        }
        isEndGame = true;
        //if (PhotonNetwork.IsMasterClient)
        //{
        //    PhotonNetwork.Destroy;
        //}    
        //float coin = float.Parse(GameData.currentCoin);
        //coin += 0.01f;
        //FireBaseData.instanceData.UpdateCoinData(coin.ToString());
        Debug.Log("Coin + 0.1BC");
        win.SetActive(true);
        //if (PhotonNetwork.IsMasterClient)
        //{
        //    Invoke("BackRoomScene", 2f);
        //    view.RPC("BackRoomScene", RpcTarget.AllBuffered);
        //}
        StartCoroutine(DelayToLeave());
        //view.RPC("LeftRoom", RpcTarget.All);
    }

    IEnumerator DelayToLeave()
    {
        yield return new WaitForSeconds(2f);
        view.RPC("BackRoomScene", RpcTarget.MasterClient);
        
    }
    [PunRPC]
    public void BackRoomScene()
    {

        //if (PhotonNetwork.IsMasterClient)
        //{
            PhotonNetwork.DestroyPlayerObjects(PhotonNetwork.MasterClient);
            PhotonNetwork.LoadLevel("WaitingRoom");
        //}
        //else
        //{
            
        //}
            
    //}
        //SceneManager.LoadScene("WaitingRoom");
    }
  
    
    [PunRPC]
    public void UpdateMap(Vector3 cl)
    { 
    //    Vector3Int cellPos = new Vector3Int((int) cl.x,(int) cl.y,(int) cl.z);
        //if(view.IsMine)
        //{
            
            map.SetTile(Vector3Int.FloorToInt(cl), null);
        //}    
    }  
    //[PunRPC]
    //public void CallResult()
    //{
        
    //}
    [PunRPC]
    public void EndGame()
    {
        isEndGame = true;
    }
    //[PunRPC]
    //public void LeftRoom()
    //{
    //    //PhotonNetwork.LeaveRoom();
    //    //PhotonNetwork.DestroyAll();
    //    PhotonNetwork.LoadLevel("WaitingRoom");
    //}

    //public override void OnLeftRoom()
    //{
    //    SceneManager.LoadScene("WaitingRoom");
    //    base.OnLeftRoom();
    //}
}

