using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using UnityEditor;
using System.Linq;
public class HeroesManager : MonoBehaviour
{
    //[Serializable]
    //public class HeroStates
    //{
    //    //vấn đề là bomber ko có id, mỗi thanh đổi state, lưu vào db, key là thứ tự trong list - thay đổi thì sẽ cập nhật lại list
    //    // cần ba tham số xác định và thứ tự trong list, id lưu và id state
    //    //public Dictionary<int, int> listHeroState = new Dictionary<int, int>();

    //    // int 1 là id trong db, int 2 là state active or not
    //    public List<KeyValuePair<int, int>> stateControlList = new List<KeyValuePair<int, int>>();
    //    public void AddBomberState(KeyValuePair<int, int> st)
    //    {
    //        stateControlList.Add(st);
    //    }
    //    public void UpdateBomberState(int slot, KeyValuePair<int, int> newSt)
    //    {
    //        if(slot < stateControlList.Count)
    //        {
    //            stateControlList[slot] = newSt;
    //        }    
    //    }
    //}

    /*
     * kiem soat cac heronao hoat động
     */
    [Serializable]
    public class HeroActive
    {
        //public int id;
        public List<int> heroActive = new List<int>();//lưu thứ tự của các hero trong danh sách tổng
        public void AddHeroActive(int id)
        {
            //if (heroActive.Contains(id) == false)
                heroActive.Add(id);

        }
        public void RemoveHeroInactive(int id)
        {
            //if (heroActive.Contains(id) == true)
                heroActive.Remove(id);
        }
        public bool CheckHero(int id)
        {
            if (heroActive.Contains(id))
            {
                return true;
            }
            else
            {
                return false;
            }    
        }
    }
    public static HeroesManager instance;

    public InventorySlot prefabSlot;
    public InventoryHeroList totalHero;

    public Transform container;
    public InventoryHeroDescription currentDescription;
    public InventorySlot currentSlot;
    public Button rebackButton;
    //public HeroActive heroActiveManager = new HeroActive();
    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }
    //UnityEngine.Event acc
    void Start()
    {
        //GetUseStateOfHero();
        //GetDataOfHeroes();
        InitSlotForInventory();
        currentDescription.gameObject.SetActive(false);
        rebackButton.onClick.AddListener(RebackMainScene);
    }
    
    /*
     * Get list heroes are using
     */
    //public void GetUseStateOfHero()
    //{
    //    if (PlayerPrefs.HasKey("HeroActive") == false)
    //    {
    //        PlayerPrefs.SetString("HeroActive", JsonUtility.ToJson(heroActiveManager));
    //        PlayerPrefs.Save();
    //        Debug.Log(PlayerPrefs.GetString("HeroActive")+ "huhu");
    //    }
    //    else
    //    {
    //        if(PlayerPrefs.GetString("HeroActive") != "")
    //        {
    //            heroActiveManager = JsonUtility.FromJson<HeroActive>(PlayerPrefs.GetString("HeroActive"));
    //            Debug.Log(PlayerPrefs.GetString("HeroActive") + "hihi");
    //        }    
    //        else
    //        {

    //        }    
            
    //    }    
    //}
    /*
     * get data nft hero
     */
    public void GetDataOfHeroes()
    {
        //totalHero = JsonUtility.FromJson<InventoryHeroList>(PlayerPrefs.GetString("CurrentNFTHero"));
        if (PlayerPrefs.HasKey("CurrentNFTHero"))
        {
            string str = PlayerPrefs.GetString("CurrentNFTHero");
            if (str != "")
            {
                totalHero = JsonUtility.FromJson<InventoryHeroList>(str);
            }
        }

        InventoryHeroList listShopHeroes = new InventoryHeroList();
        if (PlayerPrefs.HasKey("PurchasedHeroes"))
        {
            string str = PlayerPrefs.GetString("PurchasedHeroes");
            //DataBaseManager.ListHeroDatabase heroDb = JsonUtility.FromJson<DataBaseManager.ListHeroDatabase>(str);
            //if (heroDb.listHero.Count != 0)
            //{
            //    //InventoryHeroList listShopHeroes = JsonUtility.FromJson<InventoryHeroList>(str);
            //    //totalHero.AddOtherList(listShopHeroes);
            //    for(int i = 0; i < heroDb.listHero.Count; i++)
            //    {
            //        listShopHeroes.AddHero(JsonUtility.FromJson<Bomberman>(heroDb.listHero[i].properties));
            //    }    
            //}
        }
        totalHero.AddOtherList(listShopHeroes);
        //Debug.LogError(PlayerPrefs.GetString("CurrentNFTHero"));
    }
    /*init data for slot
    /save state using hero in a list
    /player check follow order hero in list
    */
    public void InitSlotForInventory()
    {
        //for(int i = 0; i < totalHero.heroList.Count; i++)
        //{
        //    InventorySlot slot = Instantiate(prefabSlot, container);
        //    //lấy data state từ HeroStates
        //    if(HeroStates.CheckState(i))
        //    {
        //        slot.InitSlot(totalHero.heroList[i], i, true);
        //    }    
        //    else
        //    {
        //        slot.InitSlot(totalHero.heroList[i], i, false);
        //    }    
        //}   
        
        for(int i = 0; i < GameData.heroFirebase.Count; i++)
        {
            InventorySlot slot = Instantiate(prefabSlot, container);
            //lấy data state từ HeroStates
            //if (HeroStates.CheckState(i))
            //{
            //    slot.InitSlot(totalHero.heroList[i], i, true);
            //}
            //else
            //{
            //    slot.InitSlot(totalHero.heroList[i], i, false);
            //}
            slot.InitSlot(i);
        }
        Debug.LogError("hero manager : " + GameData.heroFirebase.Count);
    } 
    /*
     * call whenever player click a slot
     * show information on description board
     */
    public void ChooseItem(InventorySlot slot)
    {
        currentDescription.gameObject.SetActive(true);
        currentSlot = slot;
        currentDescription.ShowDescription(slot);
    }    
    /*
     * call when player click use-button on description board
     */
    //public void ChangeStateItem(int currentStateChangeId, int newSt)
    //{
    //    HeroStates.UpdateBomberState(currentStateChangeId, newSt);
    //    //if (heroActiveManager.CheckHero(currentStateChangeId))
    //    //{
    //    //    heroActiveManager.RemoveHeroInactive(currentStateChangeId);
    //    //    currentSlot.isUsed = false;
    //    //    //SavingDataHeroActive();
    //    //}
    //    //else
    //    //{
    //    //    heroActiveManager.AddHeroActive(currentStateChangeId);
    //    //    currentSlot.isUsed = true;
    //    //    //SavingDataHeroActive();
    //    //}
    //}

    /*
     * saving data hero
     */
    ///....không cần nữa vì đã lưu bằng static class
    public void SavingDataHeroActive()
    {
        //PlayerPrefs.SetString("HeroActive", JsonUtility.ToJson(heroActiveManager));
        //PlayerPrefs.Save();
    }
    //exit mode
    public void RebackMainScene()
    {
        //SavingDataHeroActive();
        SceneManager.LoadScene("WorldScene");
    }
    private void OnApplicationQuit()
    {
        SavingDataHeroActive();
    }
}
