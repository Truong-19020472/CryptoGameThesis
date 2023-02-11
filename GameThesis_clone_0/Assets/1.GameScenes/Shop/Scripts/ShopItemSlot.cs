using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ShopItemSlot : MonoBehaviour
{
    private ShopItem item;
    public Image img;
    private Button btn;
    
    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(ShowDescription);
    }
    public void InitDataShopItem(ShopItem it)
    {
        item = it;
        switch(item.type)
        {
            case ItemType.hero:
                Bomberman hero = JsonUtility.FromJson<Bomberman>(item.properties);
                img.sprite = Resources.Load<Sprite>($"HeroImages/{hero.iconSource}");
                break;
            case ItemType.boost:
                break;

        }    
        
    }    
    public void ShowDescription()
    {
        ShopManager.instance.ShowDescription(item, img.sprite);
    }
    
}
