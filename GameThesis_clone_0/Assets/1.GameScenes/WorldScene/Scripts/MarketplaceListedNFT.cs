using Models;
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


public class MarketplaceListedNFT : MonoBehaviour
{
    // This script has been moved from the GetListedNFTWebGL.cs example in the Minter scripts folder to show you how to make additional changes.
    private string chain = "ethereum";
    public GameObject textureObject;
    private string network = "goerli";
    public Text price;
    public Text seller;
    public Text description;
    public Text listPercentage;
    public Text contractAddr;
    public Text tokenId;
    public Text itemId;
    private string _itemPrice = "";
    private string _tokenType = "";
    private string _itemID = "";
    private int NFTNumber;

    public Button next, previous;
    private int numberMarketNFT = 0;
    private List<Models.GetNftListModel.Response> totalResponse = new List<GetNftListModel.Response>();
    public void Awake()
    {

        price.text = "";
        seller.text = "";
        description.text = "";
        listPercentage.text = "";
        tokenId.text = "";
        itemId.text = "";
        contractAddr.text = "";
    }

    // Start is called before the first frame update
    async void Start()
    {
        NFTNumber = 1;
        List<GetNftListModel.Response> response = await EVM.GetNftMarket(chain, network);
        totalResponse = response;
        Debug.LogError(response.Count);
        totalResponse = response;
        numberMarketNFT = response.Count;
        

        double wei = 1000000000000000000;
        double prOriginal = double.Parse(response[NFTNumber].price);
        double eth = prOriginal / wei;
        price.text = eth.ToString();
        //price.text = response[NFTNumber].price;
        seller.text = response[NFTNumber].seller;
        if (response[NFTNumber].uri.StartsWith("ipfs://"))
        {
            response[NFTNumber].uri = response[NFTNumber].uri.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
            Debug.Log("Response URI" + response[NFTNumber].uri);
        }

        UnityWebRequest webRequest = UnityWebRequest.Get(response[NFTNumber].uri);
        await webRequest.SendWebRequest();
        RootGetNFT data =
            JsonConvert.DeserializeObject<RootGetNFT>(
                System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data));
        description.text = data.description;
        // parse json to get image uri
        string imageUri = data.image;
        if (imageUri.StartsWith("ipfs://"))
        {
            imageUri = imageUri.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
            StartCoroutine(DownloadImage(imageUri));
        }

        if (data.properties != null)
        {
            foreach (var prop in data.properties.additionalFiles)
            {
                if (prop.StartsWith("ipfs://"))
                {
                    var additionalURi = prop.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
                }
            }
        }
        listPercentage.text = response[NFTNumber].listedPercentage;
        contractAddr.text = response[NFTNumber].nftContract;
        itemId.text = response[NFTNumber].itemId;
        _itemID = response[NFTNumber].itemId;
        _itemPrice = response[NFTNumber].price;
        _tokenType = response[NFTNumber].tokenType;
        tokenId.text = response[NFTNumber].tokenId;
    }

    async public void NextNFT()
    {
        if (NFTNumber < numberMarketNFT)
        {

            NFTNumber ++;
            previous.interactable = true;
            if (NFTNumber == numberMarketNFT - 1)
            {
                next.interactable = false;
            }
            else
            {

            }
        }
        else
        {

            return;
        }
        //next.interactable = false;
        //previous.interactable = false;
        //NFTNumber++;

        //List<GetNftListModel.Response> response = await EVM.GetNftMarket(chain, network);
        previous.interactable = false;
        next.interactable = false;

        if (totalResponse[NFTNumber].uri.StartsWith("ipfs://"))
        {
            totalResponse[NFTNumber].uri = totalResponse[NFTNumber].uri.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
            Debug.Log("Response URI" + totalResponse[NFTNumber].uri);
        }

        UnityWebRequest webRequest = UnityWebRequest.Get(totalResponse[NFTNumber].uri);
        await webRequest.SendWebRequest();
        RootGetNFT data =
            JsonConvert.DeserializeObject<RootGetNFT>(
                System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data));

        string dtstring = System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data);
        previous.interactable = true;
        next.interactable = true;
        Debug.LogWarning(dtstring + " ///");
        if (dtstring.Equals(""))
        {
            totalResponse.RemoveAt(NFTNumber);
            NFTNumber--;
            Debug.LogError(totalResponse.Count);
            return;
        }
        
        Debug.LogError(System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data));
        double wei = 1000000000000000000;
        double prOriginal = double.Parse(totalResponse[NFTNumber].price);
        double eth = prOriginal / wei;
        price.text = eth.ToString();
        //price.text = response[NFTNumber].price;
        seller.text = totalResponse[NFTNumber].seller;
        description.text = data.description;
        // parse json to get image uri
        string imageUri = data.image;
        if (imageUri.StartsWith("ipfs://"))
        {
            imageUri = imageUri.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
            StartCoroutine(DownloadImage(imageUri));
        }

        if (data.properties != null)
        {
            foreach (var prop in data.properties.additionalFiles)
            {
                if (prop.StartsWith("ipfs://"))
                {
                    var additionalURi = prop.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
                }
            }
        }
        listPercentage.text = totalResponse[NFTNumber].listedPercentage;
        contractAddr.text = totalResponse[NFTNumber].nftContract;
        itemId.text = totalResponse[NFTNumber].itemId;
        _itemID = totalResponse[NFTNumber].itemId;
        _itemPrice = totalResponse[NFTNumber].price;
        _tokenType = totalResponse[NFTNumber].tokenType;
        tokenId.text = totalResponse[NFTNumber].tokenId;
        
    }

    async public void PreviousNFT()
    {
        //previous.interactable = false;
        //next.interactable = false;
        if (NFTNumber > 1)
        {
            
            NFTNumber--;

            next.interactable = true;
            if(NFTNumber == 1)
            {
                previous.interactable = false;
            }    
            else
            {

            }    
        }
        else
        {
            
            return;
        }


        //List<GetNftListModel.Response> response = await EVM.GetNftMarket(chain, network);
        //price.text = response[NFTNumber].price;
        //seller.text = response[NFTNumber].seller;
        if (totalResponse[NFTNumber].uri.StartsWith("ipfs://"))
        {
            totalResponse[NFTNumber].uri = totalResponse[NFTNumber].uri.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
            Debug.Log("Response URI" + totalResponse[NFTNumber].uri);
        }

        UnityWebRequest webRequest = UnityWebRequest.Get(totalResponse[NFTNumber].uri);
        await webRequest.SendWebRequest();
        RootGetNFT data =
            JsonConvert.DeserializeObject<RootGetNFT>(
                System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data));
        string dtstring = System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data);
        Debug.LogWarning(dtstring + " ///");
        if (dtstring.Equals(""))
        {
            //totalResponse.RemoveAt(NFTNumber);
            //Debug.LogError(totalResponse.Count);
            return;
        }
       
        //Debug.Log(System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data) + " nini");
        double wei = 1000000000000000000;
        double prOriginal = double.Parse(totalResponse[NFTNumber].price);
        double eth = prOriginal / wei;
        price.text = eth.ToString();
        //price.text = response[NFTNumber].price;
        seller.text = totalResponse[NFTNumber].seller;
        description.text = data.description;
        // parse json to get image uri
        string imageUri = data.image;
        if (imageUri.StartsWith("ipfs://"))
        {
            imageUri = imageUri.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
            StartCoroutine(DownloadImage(imageUri));
        }

        if (data.properties != null)
        {
            foreach (var prop in data.properties.additionalFiles)
            {
                if (prop.StartsWith("ipfs://"))
                {
                    var additionalURi = prop.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
                }
            }
        }
        listPercentage.text = totalResponse[NFTNumber].listedPercentage;
        contractAddr.text = totalResponse[NFTNumber].nftContract;
        itemId.text = totalResponse[NFTNumber].itemId;
        _itemID = totalResponse[NFTNumber].itemId;
        _itemPrice = totalResponse[NFTNumber].price;
        _tokenType = totalResponse[NFTNumber].tokenType;
        tokenId.text = totalResponse[NFTNumber].tokenId;
    }

    // ReSharper disable Unity.PerformanceAnalysis
    IEnumerator DownloadImage(string MediaUrl)
    {
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
        yield return request.SendWebRequest();
        if (request.result == UnityWebRequest.Result.ProtocolError)
            Debug.Log(request.error);
        else
        {
            Texture2D webTexture = ((DownloadHandlerTexture)request.downloadHandler).texture as Texture2D;
            Sprite webSprite = SpriteFromTexture2D(webTexture);
            textureObject.GetComponent<Image>().sprite = webSprite;
        }

        //if(NFTNumber == 0)
        //{
        //    next.interactable = true;
        //    previous.interactable = false;
        //}    
        //else
        //{
        //    if(NFTNumber == numberMarketNFT - 1)
        //    {
        //        previous.interactable = true;
        //        next.interactable = false;
        //    }  
        //    else
        //    {
        //        previous.interactable = true;
        //        next.interactable = true;
        //    }    
        //}    
    }

    Sprite SpriteFromTexture2D(Texture2D texture)
    {
        return Sprite.Create(texture, new Rect(0.0f, 0.0f, texture.width, texture.height), new Vector2(0.5f, 0.5f),
            100.0f);
    }

    public async void PurchaseItem()
    {
        //previous.interactable = false;
        //next.interactable = false;
        BuyNFT.Response response = await EVM.CreatePurchaseNftTransaction(chain, network,
        PlayerPrefs.GetString("Account"), _itemID, _itemPrice, _tokenType);
        Debug.Log("Account: " + response.tx.account);
        Debug.Log("To : " + response.tx.to);
        Debug.Log("Value : " + response.tx.value);
        Debug.Log("Data : " + response.tx.data);
        Debug.Log("Gas Price : " + response.tx.gasPrice);
        Debug.Log("Gas Limit : " + response.tx.gasLimit);

        try
        {
            string responseNft = await Web3GL.SendTransaction(response.tx.to, response.tx.value, response.tx.gasLimit, response.tx.gasLimit);
            if (responseNft == null)
            {
                Debug.Log("Empty Response Object:");
            }
            print(responseNft);
            Debug.Log(responseNft);
        }
        catch (Exception e)
        {
            Debug.LogError(e, this);
        }
    }
}
