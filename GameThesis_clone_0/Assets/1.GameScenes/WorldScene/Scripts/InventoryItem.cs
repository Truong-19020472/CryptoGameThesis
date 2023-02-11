using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CreateAssetMenu(fileName ="ItemGame", menuName ="Inventory/Item")]
public class InventoryItem : ScriptableObject
{
    new public string name;
    public string iconName;
    public int star;
    public string power;
    public string health;
    public string speed;
    public bool isUsed = false;
    public virtual void Use()
    {
        isUsed = true;
    }
    public virtual void Rest()
    {
        isUsed = false;
    }
}
