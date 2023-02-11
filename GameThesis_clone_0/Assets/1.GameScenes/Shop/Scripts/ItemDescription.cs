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
        currentItem = itemShow;
        img.sprite = sp;
        description.text = JsonUtility.ToJson(currentItem);
        buy.interactable = true;
        priceTxt.text = itemShow.price;
    }
    public void ShowBuyingCheck()
    {
        if(PlayerPrefs.GetFloat("CurrentToken") > float.Parse(currentItem.price))
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
