using Models;
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class InventoryContentManager : MonoBehaviour
{
    //private string account;
    //public string chain;
    //public string network;

    //public SpriteRenderer textureObject;
    private InventoryHeroList listItem;

    public Transform content;
    public GameObject itemPrefab;
    private List<GameObject> currentItemList = new List<GameObject>();
    void Start()
    {
        //account = /*PlayerPrefs.GetString("Account")*/"0x9E958E12d317c1549856Af29eFade6852F57cAb3";
        listItem = new InventoryHeroList();
        //Bomberman man2 = new Bomberman();
        //man2.iconSource = "huuh";
        //man2.star = 2;
        //man2.power = "3/4";
        //man2.health = "1/3";
        //man2.speed = "3/4";
        //Debug.LogError(JsonUtility.ToJson(man2));
        //string ts = "{\\\"iconSource\\\":\\\"RedKing\\\",\\\"star\\\":1,\\\"power\\\":\\\"2/4\\\",\\\"health\\\":\\\"1/4\\\",\\\"speed\\\":\\\"2/4\\\"}";
        ////string arr = ts.Trim('\n', '\r');/*.Replace("\r", string.Empty);*/
        //Bomberman man  = JsonUtility.FromJson<Bomberman>(ts.Replace("\\", ""));

        //Debug.LogError(ts.Replace("\\", "") +"....");
        GetListHeroItem();
    }

    
    public void GetListHeroItem()
    {
        //if (PlayerPrefs.HasKey("CurrentNFTHero"))
        //{
        //    string str = PlayerPrefs.GetString("CurrentNFTHero");
        //    if (str != "")
        //    {
        //        listItem = JsonUtility.FromJson<InventoryHeroList>(str);
        //    }

        //}
        //if (PlayerPrefs.HasKey("PurchasedHero"))
        //{
        //    string str = PlayerPrefs.GetString("PurchasedHero");
        //    if (str != "")
        //    {
        //        InventoryHeroList listShopHeroes = JsonUtility.FromJson<InventoryHeroList>(str);
        //        listItem.AddOtherList(listShopHeroes);
        //    }
        //}

        //listItem.AddHeroList(heroItemList);
        //Debug.LogError(listItem.heroList[0].iconSource);

        for(int j = 0; j < GameData.heroFirebase.Count; j++)
        {
            listItem.AddHero(JsonUtility.FromJson<Bomberman>(GameData.heroFirebase[j].properties));
            
        }
        //show data inventory
        for (int i = 0; i < listItem.heroList.Count; i++)
        {
            GameObject ob = Instantiate(itemPrefab, content);
            ob.GetComponent<Image>().sprite = Resources.Load<Sprite>($"HeroImages/{listItem.heroList[i].iconSource}");
            currentItemList.Add(ob);
        }
        Debug.LogError("inventory hero " + GameData.heroFirebase.Count + listItem.heroList.Count) ;
        //string heroListStr = JsonUtility.ToJson(listItem);
        //PlayerPrefs.SetString("TotalHero", heroListStr);
        //PlayerPrefs.Save();
    }
   public void BackToWorldScene()
    {
        SceneManager.LoadScene("WorldScene");
    }
}
