using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class AdvantureHeroChoice : MonoBehaviour
{
    public Image img;
    public Text speed;
    public Text power;
    public Text health;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void VizualizeHeroChoice(Sprite sp, string _speed, string pw, string hl)
    {
        img.sprite = sp;
        speed.text = _speed;
        power.text = pw;
        health.text = hl;
    }
}
