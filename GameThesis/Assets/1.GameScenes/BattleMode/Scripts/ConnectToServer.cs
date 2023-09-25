using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Photon.Realtime;
public class ConnectToServer : MonoBehaviourPunCallbacks
{
    public Image panelLoad;
    //public Button findMatch;
    // Start is called before the first frame update
    void Start()
    {
        //findMatch.gameObject.SetActive(false);
        panelLoad.gameObject.SetActive(false);
    }
    public void CreateConnection()
    {
        PhotonNetwork.ConnectUsingSettings();
        panelLoad.gameObject.SetActive(true);
    }
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        PhotonNetwork.JoinLobby();
        
    }
   
    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        panelLoad.gameObject.SetActive(true);
        //findMatch.gameObject.SetActive(true);
        SceneManager.LoadScene("RankingMatch");
    }
}
