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
    }
    void Start()
    {


        roomId.text = PhotonNetwork.CurrentRoom.Name;
        ResetStateAfterMatch();

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
   
    private void ResetStateAfterMatch()
    {
        var hash = PhotonNetwork.LocalPlayer.CustomProperties;
        hash["Ready"] = false;
        PhotonNetwork.LocalPlayer.SetCustomProperties(hash);
        //ExitGames.Client.Photon.Hashtable ht = PhotonNetwork.LocalPlayer.CustomProperties;

    }
    private GameObject instObject;
    
    private void ShowSlotInRoom()
    {
        
        //Player[] players = PhotonNetwork.PlayerList;
        instObject = PhotonNetwork.Instantiate(prefabSlot.name, Vector3.zero, Quaternion.identity, 0);

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
    
    [PunRPC]
    public void DestroySlot()
    {
        PhotonNetwork.Destroy(instObject);
    }
    private void LeaveThisRoom()
    {
        PhotonNetwork.LeaveRoom();
        
    }
    public override void OnLeftRoom()
    {
        base.OnLeftRoom();
        Debug.LogError("hic");
        ptnView.RPC("DestroySlot", RpcTarget.All);
        SceneManager.LoadScene("RankingMatch");
        
    }
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);
        Debug.LogError(PhotonNetwork.CurrentRoom.PlayerCount + " ///hihi");
        ptnView.RPC("CreateMasterClientSlot", RpcTarget.Others);
    }
    [PunRPC]
    public void CreateMasterClientSlot()
    {
        //PhotonNetwork.Instantiate(prefabSlot.name, Vector3.zero, Quaternion.identity, 0);
        //Instantiate(prefabSlot, Vector3.zero, Quaternion.identity);
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
            //PhotonNetwork.LoadLevel("FightPlace");
            ptnView.RPC("GoToMatch", RpcTarget.All); 
        }
    }
    [PunRPC]
    public void GoToMatch()
    {
        //SceneManager.LoadScene("FightPlace");
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
