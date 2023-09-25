using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class InventoryHeroDescription : MonoBehaviour
{
    public Image imgHero;
    public Text nameHero;
    public Text rarity;
    public Text speed;
    public Text power;
    public Text health;
    public Button activeButton;
    public int currentIdHero;
    //public FireBaseData.HeroFireBase currentHeroFb;
    private int currentSt;
    public InventorySlot currentSlot;
    // Start is called before the first frame update
    void Start()
    {
        activeButton.onClick.AddListener(OnClickUseButton);
    }
    private void OnClickUseButton()
    {
        currentSt = 1 - currentSt;
        //HeroesManager.instance.ChangeStateItem(currentIdHero, currentSt);
        if (/*activeButton.GetComponent<Image>().color == Color.green*/currentSt == 0)
        {
            ////int id = GameData.heroFirebase.IndexOf(slot.bomberInFirebase);
            //if(id >= 0)
            //{

            //    FireBaseData.instanceData.UpdateStateHero(currentHeroFb);
            //}    
            currentSlot.ChangeData(0);
            activeButton.GetComponent<Image>().color = Color.gray;
            activeButton.transform.GetChild(0).GetComponent<Text>().text = "Resting";
        }    
        else
        {
            currentSlot.ChangeData(1);
            activeButton.GetComponent<Image>().color = Color.green;
            activeButton.transform.GetChild(0).GetComponent<Text>().text = "Active";
        }    
    }
    private void UpdateState(int id)
    {
        
    }
    public void ShowDescription(InventorySlot slot)
    {
        currentSlot = slot;
        //currentHeroFb = slot.bomberInFirebase;
        currentIdHero = slot.index;
        imgHero.sprite = Resources.Load<Sprite>($"HeroImages/{slot.bomber.iconSource}");
        nameHero.text = slot.bomber.iconSource;
        rarity.text = slot.bomber.star.ToString();
        speed.text = slot.bomber.speed.ToString();
        power.text = slot.bomber.power.ToString();
        health.text = slot.bomber.health.ToString();

        if(slot.isUsed == 1)
        {
            currentSt = 1;
            activeButton.GetComponent<Image>().color = Color.green;
            activeButton.transform.GetChild(0).GetComponent<Text>().text = "Active";
        }    
        else
        {
            currentSt = 0;
            activeButton.GetComponent<Image>().color = Color.gray;
            activeButton.transform.GetChild(0).GetComponent<Text>().text = "Resting";
        }    
    }    
    
}
