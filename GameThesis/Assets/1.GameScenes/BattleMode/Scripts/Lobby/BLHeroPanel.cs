using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class BLHeroPanel : MonoBehaviour
{
    public static BLHeroPanel instance;

    public Transform heroesSelection;
    public BLHeroSlot heroSlotPrefab;
    public Transform heroSelectedBox;
    public Button createRoomButton;
    public Button findRoomButton;
    private Button heroButton;
    private Image heroImg;

    //public Object[] allHeroes;
    //private InventoryHeroList currentHeroList = new InventoryHeroList();
    public Bomberman currentHero;
    public BLFeatureBox featureBox;
    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }
    // Start is called before the first frame update
    void Start()
    {
        //currentHero = ScriptableObject.CreateInstance("InventoryItem") as InventoryItem;
        heroButton = heroSelectedBox.GetChild(0).GetComponent<Button>();
        heroImg = heroSelectedBox.GetChild(0).GetChild(0).GetComponent<Image>();
        heroButton.onClick.AddListener(OpenHeroSelection);
        heroesSelection.gameObject.SetActive(false);

        InitDataForHeroSelection();
        if(PlayerPrefs.HasKey("HeroToBattle"))
        {
            if(PlayerPrefs.GetString("HeroToBattle") != "")
            {
                Debug.LogError(PlayerPrefs.GetString("HeroToBattle"));
                JsonUtility.FromJsonOverwrite(PlayerPrefs.GetString("HeroToBattle"), currentHero);
                findRoomButton.interactable = true;
                createRoomButton.interactable = true;
                heroImg.sprite = Resources.Load<Sprite>($"HeroImages/{currentHero.iconSource}");
                featureBox.SetUpFeatureOfCurrentHero(currentHero);
            }    
            else
            {
                findRoomButton.interactable = false;
                createRoomButton.interactable = false;
            }    
        }    
        else
        {
            CheckState();
        }    
        
    }
    private void OpenHeroSelection()
    {
        heroesSelection.gameObject.SetActive(true);
    }
    private void InitDataForHeroSelection()
    {
        
        //if (PlayerPrefs.HasKey("CurrentNFTHero"))
        //{

        //    if (PlayerPrefs.GetString("CurrentNFTHero") != "")
        //    {
        //        string currentHeroString = PlayerPrefs.GetString("CurrentNFTHero");

        //        currentHeroList = JsonUtility.FromJson<InventoryHeroList>(currentHeroString);
        //    }

        //}
        ////if (PlayerPrefs.HasKey("PurchasedHero"))
        ////{
        ////    string str = PlayerPrefs.GetString("PurchasedHero");
        ////    if (str != "")
        ////    {
        ////        InventoryHeroList listShopHeroes = JsonUtility.FromJson<InventoryHeroList>(str);
        ////        currentHeroList.AddOtherList(listShopHeroes);
        ////    }
        ////}
        //InventoryHeroList listShopHeroes = new InventoryHeroList();
        //if (PlayerPrefs.HasKey("PurchasedHeroes"))
        //{
        //    string str = PlayerPrefs.GetString("PurchasedHeroes");
        //    //DataBaseManager.ListHeroDatabase heroDb = JsonUtility.FromJson<DataBaseManager.ListHeroDatabase>(str);
        //    //if (heroDb.listHero.Count != 0)
        //    //{
        //    //    //InventoryHeroList listShopHeroes = JsonUtility.FromJson<InventoryHeroList>(str);
        //    //    //totalHero.AddOtherList(listShopHeroes);
        //    //    for (int i = 0; i < heroDb.listHero.Count; i++)
        //    //    {
        //    //        listShopHeroes.AddHero(JsonUtility.FromJson<Bomberman>(heroDb.listHero[i].properties));
        //    //    }
        //    //}
        //}
        //currentHeroList.AddOtherList(listShopHeroes);
        //allHeroes = Resources.LoadAll("", typeof(InventoryItem));
        for (int i = 0; i < GameData.heroFirebase.Count; i++)
        {
            BLHeroSlot slot = Instantiate(heroSlotPrefab, heroesSelection);
            slot.InitHeroSlot(JsonUtility.FromJson<Bomberman>( GameData.heroFirebase[i].properties));
        }
        
    }
    public void SelectOneWarrior(Bomberman hero)
    {
        currentHero = hero;
        heroesSelection.gameObject.SetActive(false);
        CheckState();
    }
    private void CheckState()
    {

        if(currentHero == null)
        {
            findRoomButton.interactable = false;
            createRoomButton.interactable = false;
            return;
        } 
        else
        {
            string dataHeroCombat = JsonUtility.ToJson(currentHero);
            PlayerPrefs.SetString("HeroToBattle", dataHeroCombat);
            PlayerPrefs.Save();
            Debug.LogError(dataHeroCombat);
            heroImg.sprite = Resources.Load<Sprite>($"HeroImages/{currentHero.iconSource}");
            findRoomButton.interactable = true;
            createRoomButton.interactable = true;
            featureBox.SetUpFeatureOfCurrentHero(currentHero);
        }    
    }
}
