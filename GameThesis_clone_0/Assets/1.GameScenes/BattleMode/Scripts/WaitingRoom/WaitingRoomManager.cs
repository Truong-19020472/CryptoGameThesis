using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;
using ExitGames.Client.Photon;
using System.Linq;
public class WaitingRoomManager : MonoBehaviourPunCallbacks, IPunObservable
{
    public static WaitingRoomManager instance;
    //public GameObject slot1, slot2;
    public Button leaveRoom;
    public Text roomId;
    public Transform Bg;
    public GameObject prefabSlot;
    public Button readyButton;
    public PhotonView ptnView;
    public List<Vector3> posList;
    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
        Debug.LogError("meme");

        
    }
    void Start()
    {
        roomId.text = PhotonNetwork.CurrentRoom.Name;
        leaveRoom.onClick.AddListener(LeaveThisRoom);
        readyButton.onClick.AddListener(OnClickReadyButton);
        //if (PhotonNetwork.IsMasterClient == false)
        //{
        //    readyButton.interactable = false;
        //}
        //else
        //{
        //    readyButton.interactable = true;
        //}    
        posList = new List<Vector3>()
        {
            new Vector3(480f, -540f, 0),
            new Vector3(1440f, -540f, 0)
        };
        ShowSlotInRoom();
    }
    private void ShowSlotInRoom()
    {
        
        //Player[] players = PhotonNetwork.PlayerList;
        PhotonNetwork.Instantiate(prefabSlot.name, Vector3.zero, Quaternion.identity, 0);

        //slot.transform.SetParent(Bg);

        //slot.transform.GetChild(1).gameObject.GetComponent<Text>().text = players[0].NickName;
        //slot.transform.localScale = Bg.localScale;
        //if(players.Length == 1)
        //{
        //    for(int i = 0; i < 3; i ++)
        //    {
        //        slot1.transform.GetChild(i).gameObject.SetActive(true);
        //        if(i == 1)
        //        {
        //            slot1.transform.GetChild(i).gameObject.GetComponent<Text>().text = players[0].NickName;
        //        }    
        //    }    
        //}    
        //if(players.Length == 2)
        //{
        //    for (int i = 0; i < 3; i++)
        //    {
        //        //slot1.transform.GetChild(i).gameObject.SetActive(true);
        //        slot2.transform.GetChild(i).gameObject.SetActive(true);
        //        if (i == 1)
        //        {
        //            //slot1.transform.GetChild(i).gameObject.GetComponent<Text>().text = players[0].NickName;
        //            slot2.transform.GetChild(i).gameObject.GetComponent<Text>().text = players[0].NickName;
        //        }
        //    }
        //}    
    }
    
    private void LeaveThisRoom()
    {
        PhotonNetwork.LeaveRoom();
        
    }
    public override void OnLeftRoom()
    {
        Debug.LogError("hic");

        SceneManager.LoadScene("RankingMatch");
        base.OnLeftRoom();
    }
    void IPunObservable.OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if(stream.IsWriting)
        {
            
        }
        else if(stream.IsReading)
        {

        }
    }
    public void OnClickReadyButton()
    {
        var hash = PhotonNetwork.LocalPlayer.CustomProperties;
        hash["Ready"] = true;
        PhotonNetwork.LocalPlayer.SetCustomProperties(hash);
        //if (PhotonNetwork.IsMasterClient == false)
        //{
            readyButton.interactable = false;
        //}    
        //else
        //{
            CheckAllPlayersReady();
        //}
        
    }
    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        base.OnMasterClientSwitched(newMasterClient);
        if (newMasterClient == PhotonNetwork.LocalPlayer)
        {
            var hash = PhotonNetwork.LocalPlayer.CustomProperties;
            hash["Ready"] = false;
            PhotonNetwork.LocalPlayer.SetCustomProperties(hash);
            //if (PhotonNetwork.IsMasterClient == false)
            //{
            readyButton.interactable = true;
            //CheckAllPlayersReady();
        }
    }
    public void CheckAllPlayersReady()
    {
        if(PhotonNetwork.PlayerList.All(p => p.CustomProperties.ContainsKey("Ready") && (bool) p.CustomProperties["Ready"] == true) && PhotonNetwork.PlayerList.Length == 2)//neu dung countofPlayer thi ko dung vi se tinh so player online
        {
            ptnView.RPC("GoToMatch", RpcTarget.All); 
        }
    }
    [PunRPC]
    public void GoToMatch()
    { 
        
        PhotonNetwork.LoadLevel("FightPlace");
    }
    //public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    //{
    //    base.OnPlayerPropertiesUpdate(targetPlayer, changedProps);
    //    if (PhotonNetwork.IsMasterClient == false)//vì đã check rồi
    //    {
    //        return;
    //    }
    //    if (changedProps.ContainsKey("Ready") == false) return;
    //    CheckAllPlayersReady();

    //}
    //private void OnEnable()
    //{

    //}
    //private void OnDisable()
    //{

    //}
    //public void OnEvent(EventData photonEvent)
    //{
    //    throw new System.NotImplementedException();
    //}
}
