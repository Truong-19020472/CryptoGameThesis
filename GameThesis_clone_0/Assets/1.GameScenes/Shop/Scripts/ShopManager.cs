using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.IO;
//using UnityEditor;

public class ShopManager : MonoBehaviour
{
    public static ShopManager instance;
    public Button hero;
    public Button boost;
    public Button exit;
    public Text currentCoin;

    public Transform content;
    public ShopItemSlot slotPrefab;
    public TextAsset assetShop;
    private ListShopItem listItem = new ListShopItem();
    
    private List<ShopItemSlot> currentSlot = new List<ShopItemSlot>();
    public int category = 0;
    public ItemDescription description;
    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }
    // Start is called before the first frame update
    void Start()
    {
        exit.onClick.AddListener(LeaveShop);
        GetDataToLoad();
        currentCoin.text = string.Format("{0:0.00}", PlayerPrefs.GetFloat("ERC20Token"));

        //string listItemJs = JsonUtility.ToJson(listItem);
        //Debug.LogError(listItemJs);
        //StartCoroutine(GetRequest("https://jsonformatter.org/json-editor/351452"));
    }
    private void GetDataToLoad()
    {
        listItem  = JsonUtility.FromJson<ListShopItem>(assetShop.text);
        List<ShopItem> shopItems = listItem.shopItemList;
        for(int i = 0; i < shopItems.Count; i++)
        {
            ShopItemSlot slot = Instantiate(slotPrefab, content);
            slot.InitDataShopItem(shopItems[i]);
            currentSlot.Add(slot);
        }    
    }
    public void ShowDescription(ShopItem item, Sprite img)
    {
        description.ShowDescriptionIcon(item, img);
    }    
    public void ChangeDataShop(ShopItem itemChange)
    {
        
        if(listItem.shopItemList.Contains(itemChange))
        {
            Debug.LogError("Success");
            int id = listItem.shopItemList.IndexOf(itemChange);
            Destroy(currentSlot[id].gameObject);
            currentSlot.RemoveAt(id);
            //File.WriteAllText(AssetDatabase.GetAssetPath(assetShop), JsonUtility.ToJson(listItem));
            //listItem.shopItemList.Remove(itemChange);
        }
        
    }

    private void LeaveShop()
    {
        //File.WriteAllText(AssetDatabase.GetAssetPath(assetShop), JsonUtility.ToJson(listItem));
        SceneManager.LoadScene("WorldScene");
    }
    private void OnApplicationQuit()
    {
        
    }
    //IEnumerator GetRequest(string url)
    //{
    //    using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
    //    {
    //        yield return webRequest.SendWebRequest();
    //        switch(webRequest.result)
    //        {
    //            case UnityWebRequest.Result.ConnectionError:
    //            case UnityWebRequest.Result.DataProcessingError:
    //                Debug.LogError(webRequest.error);
    //                break;
    //            case UnityWebRequest.Result.Success:

    //                //ListShopItem listItem = new ListShopItem();
    //                //listItem = JsonUtility.FromJson<ListShopItem>(webRequest.downloadHandler.text);
    //                Debug.LogError(webRequest.downloadHandler.text);
    //                break;
    //        }    
    //    }
    //}    

}
