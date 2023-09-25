using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class SlotScript : MonoBehaviourPunCallbacks, IPunInstantiateMagicCallback
{
    private Text textName;
    private Button readyButton;
    private Image img;
    //public Texture2D spriteTexture;
    //public string namePLayer;
    public PhotonView view;

    public ExitGames.Client.Photon.Hashtable propertiesPlayer = new ExitGames.Client.Photon.Hashtable();
    Player player;
    Bomberman selectedHero;
    //private bool isReady = false;
    // Start is called before the first frame update
    void Start()
    {
        //view = GetComponent<PhotonView>();
        img = transform.GetChild(0).GetComponent<Image>();
        textName = transform.GetChild(1).GetComponent<Text>();
        readyButton = transform.GetChild(2).GetComponent<Button>();
        

        player = PhotonNetwork.LocalPlayer;
        if(PlayerPrefs.HasKey("HeroToBattle"))
        {
            //selectedHero = ScriptableObject.CreateInstance("InventoryItem") as InventoryItem;
            selectedHero = JsonUtility.FromJson<Bomberman>(PlayerPrefs.GetString("HeroToBattle"));
            //JsonUtility.FromJsonOverwrite(PlayerPrefs.GetString("HeroToBattle"), selectedHero);
        }
        
        if(view.IsMine)
        {
            InitInfoSkin();
        }
        else
        {
            Invoke("InitInfoSkin", 0.5f);
        }

        view.RPC("SetUpParent", RpcTarget.All);

    }
    //public void SetUpSlot(Texture2D txtr, string _name)
    //{
    //    spriteTexture = txtr;
    //    namePLayer = _name;
    //    textName.text = namePLayer;
    //    Rect rec = new Rect(0, 0, spriteTexture.width, spriteTexture.height);

    //    img.sprite = Sprite.Create(spriteTexture, rec, Vector2.zero);
       
    //}    
    public void InitInfoSkin()
    {
        
        if (view.IsMine)
        {
            propertiesPlayer.Add("nameSprite", selectedHero.iconSource);
            propertiesPlayer.Add("nameUser", player.NickName);
            PhotonNetwork.LocalPlayer.SetCustomProperties(propertiesPlayer);
            img.sprite = Resources.Load<Sprite>($"HeroImages/{selectedHero.iconSource}");
            textName.text = player.NickName;
            
        }    
        else
        {
            player = view.Owner;
            img.sprite = Resources.Load<Sprite>($"HeroImages/{(string) player.CustomProperties["nameSprite"]}");
            textName.text =(string) player.CustomProperties["nameUser"];
        }
        
    }

    public void OnPhotonInstantiate(PhotonMessageInfo info)
    {
        view.RPC("SetUpParent", RpcTarget.All);
    }
    [PunRPC]
    public void SetUpParent()
    {
           
        transform.SetParent(WaitingRoomManager.instance.Bg, false);
        //transform.GetComponent<RectTransform>().anchorMax = Vector2.up;
        //transform.GetComponent<RectTransform>().anchorMin = Vector2.up;
        //transform.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0.5f);
        //if (view.IsMine)
        //{
           // Debug.LogError("haha");
            if(PhotonNetwork.IsMasterClient)//nếu ismine mà ko phải master thì sao :))
            {
                transform.GetComponent<RectTransform>().anchoredPosition = WaitingRoomManager.instance.posList[0];
            }    
            
        //}
        else
        {
            //Debug.LogError("kk");
            transform.GetComponent<RectTransform>().anchoredPosition = WaitingRoomManager.instance.posList[1];
        }    
        
        //transform.localScale = Vector3.one;

    }
    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        base.OnMasterClientSwitched(newMasterClient);
        view.RPC("SetUpParent", RpcTarget.All);
        //if(newMasterClient == PhotonNetwork.LocalPlayer)
        //{
        //    transform.GetComponent<RectTransform>().anchoredPosition = WaitingRoomManager.instance.posList[/*PhotonNetwork.LocalPlayer.ActorNumber*/0];
        //}    
        //else
        //{
        //    transform.GetComponent<RectTransform>().anchoredPosition = WaitingRoomManager.instance.posList[1/* - PhotonNetwork.LocalPlayer.ActorNumber*/];
        //}    
    }
    //[PunRPC]
    //public void ChangeStateReady()
    //{

    //}
}
