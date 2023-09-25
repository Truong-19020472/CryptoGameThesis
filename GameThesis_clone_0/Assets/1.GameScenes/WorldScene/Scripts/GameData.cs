using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameData
{
    public static int numberHero;
    public static string currentCoin { get; private set; }
    //public static string numberChild { get; private set; }
    public static FireBaseData.HeroFireBase currentHeroUpdate = new FireBaseData.HeroFireBase();

    public static List<FireBaseData.HeroFireBase> heroFirebase = new List<FireBaseData.HeroFireBase>();
    
    public static void ChangeCurrentCoin(string coin)
    {
        currentCoin = coin;
    }
    public static void AddHero(string data)
    {
        FireBaseData.HeroFireBase heroFb = JsonUtility.FromJson<FireBaseData.HeroFireBase>(data);
        heroFirebase.Add(heroFb);
    }

    public static List<Bomberman> totalBomber = new List<Bomberman>();

    public static void AddBomberman(Bomberman bomber)
    {
        totalBomber.Add(bomber);
    }
    public static void AddListBomberman(List<Bomberman> bomberList)
    {
        totalBomber = bomberList;
    }
    
    ///private static Dictionary<int, F>
}

