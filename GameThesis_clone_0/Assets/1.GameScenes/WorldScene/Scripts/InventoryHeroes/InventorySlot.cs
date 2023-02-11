using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class InventorySlot : MonoBehaviour
{
    public Text nameTxt;
    public Image icon;
    public Button slot;
    public bool isUsed = false;
    public InventoryItem item;
    // Start is called before the first frame update
    void Start()
    {
        slot.onClick.AddListener(SelectItem);
    }

    public void InitSlot(InventoryItem newItem)
    {
        item = newItem;
        nameTxt.text = item.name;
        icon.sprite = Resources.Load<Sprite>($"HeroImages/{item.iconName}");
        isUsed = item.isUsed;
    }    
    public void SelectItem()
    {
        InventoryHeroesManager.instance.ChooseItem(this);
    }
}
