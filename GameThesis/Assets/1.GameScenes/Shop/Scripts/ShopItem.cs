using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
[Serializable]
public class ShopItem
{
    //public string name;
    public ItemType type;
    public string properties;
    public string price;
    
}
[Serializable]
public class ListShopItem
{
    public int id;
    public List<ShopItem> shopItemList = new List<ShopItem>();
    public ListShopItem()
    {

    }
    public ListShopItem(int _id, ShopItem item)
    {
        id = _id;
        shopItemList.Add(item);
    }
    public void AddItem(ShopItem it)
    {
        shopItemList.Add(it);
    }
}
[Serializable]
public class Bomberman
{
    public string iconSource;
    public int star;
    public string power;
    public string health;
    public string speed;
    
}

[Serializable]
public class BoosterItem
{
    public BoostStats stats;
    public string boostIndex;
}
public enum ItemType
{
    hero,
    boost //các vật phẩm tăng sức mạnh cho tướng
}
public enum BoostStats
{
    power,
    maxPower,
    health,
    maxHealth,
    speed,
    maxSpeed
}
