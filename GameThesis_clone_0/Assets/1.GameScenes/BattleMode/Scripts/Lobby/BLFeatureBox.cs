using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class BLFeatureBox : MonoBehaviour
{
    public Text star, speedTxt, powerTxt, healthTxt;

    public void SetUpFeatureOfCurrentHero(Bomberman currentHero)
    {
        star.text = currentHero.star.ToString();
        speedTxt.text = currentHero.speed;
        powerTxt.text = currentHero.power;
        healthTxt.text = currentHero.health;
    }
}
