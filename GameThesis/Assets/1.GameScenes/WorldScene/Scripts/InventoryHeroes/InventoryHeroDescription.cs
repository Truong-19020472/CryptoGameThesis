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

    // Start is called before the first frame update
    void Start()
    {
        activeButton.onClick.AddListener(UseItem);
    }
    private void UseItem()
    {
        InventoryHeroesManager.instance.ChangeStateItem();
        if(activeButton.GetComponent<Image>().color == Color.green)
        {
            activeButton.GetComponent<Image>().color = Color.gray;
            activeButton.transform.GetChild(0).GetComponent<Text>().text = "Resting";
        }    
        else
        {
            activeButton.GetComponent<Image>().color = Color.green;
            activeButton.transform.GetChild(0).GetComponent<Text>().text = "Active";
        }    
    }
    public void ShowDescription(InventoryItem inventoryItem)
    {
        imgHero.sprite = inventoryItem.icon;
        nameHero.text = inventoryItem.name;
        rarity.text = inventoryItem.rarity;
        speed.text = inventoryItem.speed.ToString();
        power.text = inventoryItem.power.ToString();
        health.text = inventoryItem.health.ToString();
        if(inventoryItem.isUsed == true)
        {
            activeButton.GetComponent<Image>().color = Color.green;
            activeButton.transform.GetChild(0).GetComponent<Text>().text = "Active";
        }    
        else
        {
            activeButton.GetComponent<Image>().color = Color.gray;
            activeButton.transform.GetChild(0).GetComponent<Text>().text = "Resting";
        }    
    }    
    
}
