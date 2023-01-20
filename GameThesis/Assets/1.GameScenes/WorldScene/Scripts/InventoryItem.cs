using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="ItemGame", menuName ="Inventory/Item")]
public class InventoryItem : ScriptableObject
{
    new public string name;
    public Sprite icon;
    public string rarity;
    public int power;
    public int health;
    public int speed;
    public bool isUsed = false;
    public virtual void Use()
    {
        isUsed = true;
    }
    public virtual void Rest()
    {
        isUsed = true;
    }
}
