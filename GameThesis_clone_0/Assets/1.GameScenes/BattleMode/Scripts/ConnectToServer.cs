using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class ConnectToServer : MonoBehaviourPunCallbacks
{
    //public Button findMatch;
    // Start is called before the first frame update
    void Start()
    {
        //findMatch.gameObject.SetActive(false);
       
    }
    public void CreateConnection()
    {
        PhotonNetwork.ConnectUsingSettings();

    }
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        PhotonNetwork.JoinLobby();
        
    }
   
    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        //findMatch.gameObject.SetActive(true);
        SceneManager.LoadScene("RankingMatch");
    }
}
