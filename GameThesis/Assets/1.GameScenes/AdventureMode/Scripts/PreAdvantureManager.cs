using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class PreAdvantureManager : MonoBehaviour
{
    public static PreAdvantureManager instance;
    public InventoryHeroList totalHero;
    public GameObject heroPanel;
    public AdvantureHeroSlot prefabHeroSlot;
    public Button choosenHeroBtn;
    public AdvantureHeroChoice heroBoardChoice;

    private Bomberman currentHero = new Bomberman();
    private List<AdvantureHeroSlot> currentSlotList = new List<AdvantureHeroSlot>();

    public GameObject notification;
    private bool isSelected = false;
    // Start is called before the first frame update
    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }
    void Start()
    {
        Debug.LogError(JsonUtility.ToJson(currentHero));
        heroPanel.SetActive(false);
        choosenHeroBtn.onClick.AddListener(OpenHeroSelectionPanel);
        //InitDataListHero();
        ShowListHeroSlot();
    }

    public void GoToExploreWorld(GameObject ob)
    {

        if (isSelected == false)
        {     
            notification.SetActive(true);
            Invoke("HideNotify", 3f);
            return;
        }
        else
        {
            PlayerPrefs.SetInt("AdvantureMap", int.Parse(ob.name));
            PlayerPrefs.Save();
            SceneManager.LoadScene("Advanture");

        }    
    }
    private void HideNotify()
    {
        notification.gameObject.SetActive(false);
    }    
    public void BackToWorldScene()
    {
        SceneManager.LoadScene("WorldScene");
    }
    private void OpenHeroSelectionPanel()
    {
        heroPanel.gameObject.SetActive(true);
    }
    private void InitDataListHero()
    {
        //if (PlayerPrefs.HasKey("CurrentNFTHero"))
        //{
        //    string str = PlayerPrefs.GetString("CurrentNFTHero");
        //    if (str != "")
        //    {
        //        totalHero = JsonUtility.FromJson<InventoryHeroList>(str);
        //    }

        //}
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
        //totalHero.AddOtherList(listShopHeroes);
    }
    private void ShowListHeroSlot()
    {
        //if (totalHero.heroList.Count == 0)
        //    return;
        for(int i = 0; i < GameData.heroFirebase.Count; i++)
        {
            AdvantureHeroSlot slot = Instantiate(prefabHeroSlot, heroPanel.transform);
            slot.InitDataHero(JsonUtility.FromJson<Bomberman>(GameData.heroFirebase[i].properties));
            currentSlotList.Add(slot);

        }    
    }
    public void SetCurrentHero(Bomberman man, Sprite heroImg)
    {
        isSelected = true;
        currentHero = man;
        
        heroBoardChoice.VizualizeHeroChoice(heroImg, man.speed, man.power, man.health);
        heroPanel.SetActive(false);

        PlayerPrefs.SetString("HeroAdvanture", JsonUtility.ToJson(man));

    }
}
