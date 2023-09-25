using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class HeroStates
{
    public static List<KeyValuePair<int, int>> stateControlList = new List<KeyValuePair<int, int>>();
    public static void AddBomberState(KeyValuePair<int, int> st)
    {
        stateControlList.Add(st);
    }
    public static void UpdateBomberState(int slot, int newSt)
    {
        if (slot < stateControlList.Count)
        {
            stateControlList[slot] = new KeyValuePair<int, int>(stateControlList[slot].Key, newSt);
        }
        //if(stateControlList[slot].Value != -1)
        //{
        //    //DataBaseManager.UpdateHero(stateControlList[slot].Key, newSt);
        //}    
    }
    public static bool CheckState(int slot)
    {
        if (slot > stateControlList.Count - 1)
            return false;
        if (stateControlList[slot].Value == 1)
            return true;
        else
            return false;
    }
    public static void RemoveBomberState(int slot)
    {
        if(slot < stateControlList.Count)
            stateControlList.RemoveAt(slot);
    }
}
