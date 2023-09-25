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
        ShowCoin();
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
        PhotonNetwork.AutomaticallySyncScene = true;

        //PhotonNetwork.LoadLevel("WaitingRoom");
        //}
        //else
        //{

           SceneManager.LoadScene("WaitingRoom");
        //}
    }
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        base.OnJoinRandomFailed(returnCode, message);
        Debug.LogError("que" + PhotonNetwork.CountOfRooms);
        img.color = Color.black;
    }

    public Text currentCollectedCoin;
    public float currentCoinCollect;
    public void ShowCoin()
    {
        //if (PlayerPrefs.HasKey("TemporaryCoin"))
        //{
        //    currentCoinCollect = PlayerPrefs.GetFloat("TemporaryCoin");
        //    currentCollectedCoin.text = string.Format("{0:0.0000}", currentCoinCollect);
        //}
        currentCoinCollect = float.Parse(GameData.currentCoin);
        currentCollectedCoin.text = GameData.currentCoin;
    }
    public void Disconnect()
    {
        StartCoroutine(OnDisconnect());
        
    }

    IEnumerator OnDisconnect()
    {
        PhotonNetwork.Disconnect();
        while (PhotonNetwork.IsConnected)
        {
            yield return null;
            Debug.Log("Disconnecting. . .");
        }
        Debug.Log("DISCONNECTED!");
        SceneManager.LoadScene("WorldScene");
    }

}
