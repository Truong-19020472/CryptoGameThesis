using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;
public class LobbyController : MonoBehaviourPunCallbacks
{
    public Button create, find;
    public Image img;
    private void Start()
    {
        create.onClick.AddListener(CreateRoom);
        find.onClick.AddListener(JoinRoom);
        
    }
    private void CreateRoom()
    {
        PhotonNetwork.AutomaticallySyncScene = true;
        RoomOptions roomOptions = new RoomOptions() { IsVisible = true, IsOpen = true, MaxPlayers = 2 };
        PhotonNetwork.CreateRoom($"room{Random.Range(0, 10000)}", roomOptions);
        PhotonNetwork.NickName = $"Milk{Random.Range(0, 100)}";
    }
    //public override void OnConnectedToMaster()
    //{
    //    base.OnConnectedToMaster();

    //}
    public override void OnCreatedRoom()
    {
        base.OnCreatedRoom();
        //PhotonNetwork.LoadLevel("WaitingRoom");
        //SceneManager.LoadScene("WaitingRoom");

    }
    private void JoinRoom()
    {
        PhotonNetwork.JoinRandomRoom();
        PhotonNetwork.NickName = $"Milk{Random.Range(0, 100)}";
    }
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        //PhotonNetwork.LoadLevel("WaitingRoom");
        //if (!PhotonNetwork.IsMasterClient)
        //{
            PhotonNetwork.LoadLevel("WaitingRoom");
        //}
        //else
        //{

        //    SceneManager.LoadScene("WaitingRoom");
        //}
    }
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        base.OnJoinRandomFailed(returnCode, message);
        Debug.LogError("que" + PhotonNetwork.CountOfRooms);
        img.color = Color.black;
    }
}
