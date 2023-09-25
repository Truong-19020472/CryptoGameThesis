using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class BLHeroSlot : MonoBehaviour
{
    public Bomberman dataHero;
    public Image img;
    private Button select;

    // Start is called before the first frame update
    void Start()
    {
        select = transform.GetComponent<Button>();
        select.onClick.AddListener(OptHeroToCombat);
    }
    public void InitHeroSlot(Bomberman hero)
    {
        dataHero = hero;
        img.sprite = Resources.Load<Sprite>($"HeroImages/{dataHero.iconSource}");
    }    
    public void OptHeroToCombat()
    {
        BLHeroPanel.instance.SelectOneWarrior(dataHero);
    }
}
