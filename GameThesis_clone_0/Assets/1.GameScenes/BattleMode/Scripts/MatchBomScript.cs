using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class MatchBomScript : MonoBehaviourPunCallbacks
{
    //[SerializeField] private GameObject prefabExplosion;
    public int power;
    private List<Vector3> listPositionBomb;
    public PhotonView view;
    // Start is called before the first frame update
    void Start()
    {
        Invoke("ExplodeBomb", 3f);

    }

    //private void OnDestroy()//goi khi load scene
    //{
    //    //for (int i = 0; i < listPositionBomb.Count; i++)
    //    //{
    //    //    Destroy(Instantiate(prefabExplosion, listPositionBomb[i], Quaternion.identity), 2f);
    //    //}
    //    if(BomberMapController.instance == null) return;

    //}
    private void ExplodeBomb()
    {
       
        BattleMatchManager.instance.ExplodeBomb(this);
        if (view.IsMine)
            PhotonNetwork.Destroy(transform.GetComponent<PhotonView>());
    }
    public void CreateExplosion(List<Vector3> listBombPos)
    {
        listPositionBomb = listBombPos;
    }

}
