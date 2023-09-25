using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class AdvantureHeroSlot : MonoBehaviour
{
    public Image img;
    private Bomberman hero = new Bomberman();
    private Button selectedBtn;
    // Start is called before the first frame update
    void Awake()
    {
        //img = GetComponent<Image>();
        selectedBtn = GetComponent<Button>();
        selectedBtn.onClick.AddListener(ChooseHero);
    }
    public void InitDataHero(Bomberman man)
    {
        img.sprite = Resources.Load<Sprite>($"HeroImages/{man.iconSource}");
        hero = man;
    }
    public void ChooseHero()
    {
        PreAdvantureManager.instance.SetCurrentHero(hero, img.sprite);
    }
    
}
