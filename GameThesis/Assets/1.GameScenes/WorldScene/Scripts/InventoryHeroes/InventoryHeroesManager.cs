using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
public class InventoryHeroesManager : MonoBehaviour
{
    public static InventoryHeroesManager instance;
    public InventorySlot prefabSlot;
    public UnityEngine.Object[] itemAll;
    public Transform container;
    public InventoryHeroDescription currentDescription;
    public InventorySlot currentSlot;
    public Button rebackButton;
    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }
    //UnityEngine.Event acc
    void Start()
    {
        GetDataOfHeroes();
        InitSlotForInventory();
        currentDescription.gameObject.SetActive(false);
        rebackButton.onClick.AddListener(RebackMainScene);
    }
    public void GetDataOfHeroes()
    {
        itemAll = Resources.LoadAll("", typeof(InventoryItem));
    }
    public void InitSlotForInventory()
    {
        for(int i = 0; i < itemAll.Length; i++)
        {
            InventorySlot slot = Instantiate(prefabSlot, container);
            slot.InitSlot((InventoryItem)itemAll[i]);
        }    
    } 
    public void ChooseItem(InventorySlot slot)
    {
        currentDescription.gameObject.SetActive(true);
        currentSlot = slot;
        currentDescription.ShowDescription(slot.item);
    }    
    public void ChangeStateItem()
    {
        if(currentSlot.isUsed == false)
        {
            currentSlot.isUsed = true;
            currentSlot.item.Use();
        }    
        else
        {
            currentSlot.isUsed = false;
            currentSlot.item.Rest();
        }    
    }
    public void RebackMainScene()
    {
        SceneManager.LoadScene("WorldScene");
    }
}
