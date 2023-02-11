using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class BLHeroSlot : MonoBehaviour
{
    public InventoryItem dataHero;
    public Image img;
    private Button select;

    // Start is called before the first frame update
    void Start()
    {
        select = transform.GetComponent<Button>();
        select.onClick.AddListener(OptHeroToCombat);
    }
    public void InitHeroSlot(InventoryItem hero)
    {
        dataHero = hero;
        img.sprite = Resources.Load<Sprite>($"HeroImages/{dataHero.iconName}");
    }    
    public void OptHeroToCombat()
    {
        BLHeroPanel.instance.SelectOneWarrior(dataHero);
    }
}
