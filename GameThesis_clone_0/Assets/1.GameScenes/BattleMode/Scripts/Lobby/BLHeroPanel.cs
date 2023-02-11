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

    public Object[] allHeroes;
    public InventoryItem currentHero;
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
        currentHero = ScriptableObject.CreateInstance("InventoryItem") as InventoryItem;
        heroButton = heroSelectedBox.GetChild(0).GetComponent<Button>();
        heroImg = heroSelectedBox.GetChild(0).GetChild(0).GetComponent<Image>();
        heroButton.onClick.AddListener(OpenHeroSelection);
        heroesSelection.gameObject.SetActive(false);
        InitDataForHeroSelection();
        if(PlayerPrefs.HasKey("HeroToBattle"))
        {
            Debug.LogError(PlayerPrefs.GetString("HeroToBattle"));
            JsonUtility.FromJsonOverwrite(PlayerPrefs.GetString("HeroToBattle"), currentHero);
            findRoomButton.interactable = true;
            createRoomButton.interactable = true;
            heroImg.sprite = Resources.Load<Sprite>($"HeroImages/{currentHero.iconName}");
            featureBox.SetUpFeatureOfCurrentHero(currentHero);
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
        allHeroes = Resources.LoadAll("", typeof(InventoryItem));
        for (int i = 0; i < allHeroes.Length; i++)
        {
            BLHeroSlot slot = Instantiate(heroSlotPrefab, heroesSelection);
            slot.InitHeroSlot((InventoryItem)allHeroes[i]);
        }
        
    }
    public void SelectOneWarrior(InventoryItem hero)
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
            heroImg.sprite = Resources.Load<Sprite>($"HeroImages/{currentHero.iconName}");
            findRoomButton.interactable = true;
            createRoomButton.interactable = true;
            featureBox.SetUpFeatureOfCurrentHero(currentHero);
        }    
    }
}
