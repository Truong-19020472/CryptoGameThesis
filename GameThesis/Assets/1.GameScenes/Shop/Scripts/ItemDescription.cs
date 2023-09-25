using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ItemDescription : MonoBehaviour
{
    public Image img;
    public Text description;
    private ShopItem currentItem = new ShopItem();
    public Button buy;
    public Text priceTxt;
    public ShopConfirmPanel confirmPanel;

    public Sprite defaultSp;

    public Text star, speed, power, health;


    void Start()
    {
        if(currentItem == null)
        {
            description.text = "Choose a item to know more.";
            buy.interactable = false;
        }
        SetDefaultState();
        confirmPanel.gameObject.SetActive(false);
        buy.onClick.AddListener(ShowBuyingCheck);
    }
    public void ShowDescriptionIcon(ShopItem itemShow, Sprite sp)
    {
        if(itemShow.type == ItemType.hero)
        {
            Bomberman hero = JsonUtility.FromJson<Bomberman>(itemShow.properties);
            speed.text = hero.speed;
            health.text = hero.health;
            power.text = hero.power;
            star.text = hero.star.ToString();
        }    
        currentItem = itemShow;
        img.sprite = sp;
        
        
        priceTxt.text = itemShow.price;
        if(PlayerPrefs.GetFloat("ERC20Token") > float.Parse(currentItem.price))
        {
            buy.interactable = true;
        }    
        else
        {
            buy.interactable = false;
        }    
    }
    public void ShowBuyingCheck()
    {
        if(PlayerPrefs.GetFloat("ERC20Token") > float.Parse(currentItem.price))
        {
            confirmPanel.gameObject.SetActive(true);
            confirmPanel.SetItemToConfirm(currentItem);
        }
        
    }
    private void SetDefaultState()
    {
        img.sprite = defaultSp;
        description.text = "";
        buy.interactable = false;
        currentItem = new ShopItem();
    }
}
