using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Models;
using UnityEngine.Networking;
using Newtonsoft.Json;
using System;

#if UNITY_WEBGL
public class MarketSellNFT : MonoBehaviour
{
    private string chain = "ethereum";
    private string network = "goerli";
    private string _itemPrice = "0.001";
    private string _tokenType = "";
    private string _itemID = "";
    private string account;

    public GameObject textureObject;
    public Text description;
    public Text tokenURI;
    public Text contractAddr;
    public Text isApproved;
    public InputField itemPrice;
    public Text playerAccount;

    public void Awake()
    {
        account = PlayerPrefs.GetString("Account");  /*"0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e"*/;
        description.text = "";
        tokenURI.text = "";
        isApproved.text = "";
        contractAddr.text = "";
    }
    public int index = -1;
    // Start is called before the first frame update
    public async void GetNFTOfAccount()
    {
        index++;
        playerAccount.text = account;
        List<MintedNFT.Response> response = await EVM.GetMintedNFT(chain, network, account);
        if(index >= response.Count || index < 0)
        {
            index = 0;
        }    
        if (response[index].uri.StartsWith("ipfs://"))
        {
            response[index].uri = response[index].uri.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
        }

        UnityWebRequest webRequest = UnityWebRequest.Get(response[index].uri);
        await webRequest.SendWebRequest();
        RootGetNFT data =
            JsonConvert.DeserializeObject<RootGetNFT>(
                System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data));
        description.text = data.name;
        tokenURI.text = data.description;
        Debug.Log(index);
        // parse json to get image uri
        string imageUri = data.image;
        if (imageUri.StartsWith("ipfs://"))
        {
            imageUri = imageUri.Replace("ipfs://", "https://cloudflare-ipfs.com/ipfs/");
            StartCoroutine(DownloadImage(imageUri));
        }

        //tokenURI.text = response[index].uri;
        Debug.Log(response[index].uri);
        contractAddr.text = response[index].nftContract;
        isApproved.text = response[index].isApproved.ToString();
        _itemID = response[index].id;
        _itemPrice = itemPrice.text;
        _tokenType = response[index].tokenType;
    }

    // ReSharper disable Unity.PerformanceAnalysis
    IEnumerator DownloadImage(string MediaUrl)
    {
        Debug.LogError("hehe");
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
    }

    Sprite SpriteFromTexture2D(Texture2D texture)
    {
        return Sprite.Create(texture, new Rect(0.0f, 0.0f, texture.width, texture.height), new Vector2(0.5f, 0.5f),
            100.0f);
    }

    public async void ListItem()
    {
        if(_itemID.Equals(""))
        {
            return;
        }    
        float eth = float.Parse(_itemPrice);
        float decimals = 1000000000000000000; // 18 decimals
        float wei = eth * decimals;
        ListNFT.Response response =
            await EVM.CreateListNftTransaction(chain, network, account, _itemID, Convert.ToDecimal(wei).ToString(), _tokenType);
        int value = Convert.ToInt32(response.tx.value.hex, 16);
        try
        {
            string responseNft = await Web3GL.SendTransactionData(response.tx.to, value.ToString(),
                 response.tx.gasPrice, response.tx.gasLimit, response.tx.data);
            if (responseNft == null)
            {
                Debug.Log("Empty Response Object:");
            }
            else
            {
                GetListItem();
                HeroStates.RemoveBomberState(index);
            }    
        }
        catch (Exception)
        {
            Debug.Log("Revoked Transaction");
        }
    }
    public async void GetListItem()
    {
        try
        {
            List<MintedNFT.Response> response = await EVM.GetMintedNFT(chain, network, account);
            if (response.Count > 0)
                StartCoroutine(RequestData(response));
            else
            {
                PlayerPrefs.SetString("CurrentNFTHero", "");
                PlayerPrefs.Save();
            }    
                
        }
        catch (Exception e)
        {
            Debug.Log("No Listed Items" + e);
        }
    }
    IEnumerator RequestData(List<MintedNFT.Response> responseList)
    {
        List<Bomberman> heroItemList = new List<Bomberman>();

        for (int i = 0; i < responseList.Count; i++)
        {
            if (responseList[i].uri == null)
            {
                Debug.Log("Not Listed Items");
                //continue;
                //return;
            }
            if (responseList[i].uri.StartsWith("ipfs://"))
            {
                responseList[i].uri = responseList[i].uri.Replace("ipfs://", /*"https://ipfs.io/ipfs/"/*"http://localhost:8080/ipfs/"*/"https://cloudflare-ipfs.com/ipfs/");
                Debug.Log(responseList[0].uri);
            }

            UnityWebRequest webRequest = UnityWebRequest.Get(responseList[i].uri);
            /*await*/ //webRequest.SendWebRequest();
            //webRequest.timeout = 3;
            yield return webRequest.SendWebRequest();

            Debug.LogError(webRequest.isDone);
            LoadDataScript.Root data =
                JsonConvert.DeserializeObject<LoadDataScript.Root>(
                    System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data));

            string handleData = data.description.Replace("\\", string.Empty);
            //Debug.LogError(handleData);
            try
            {
                Bomberman item = JsonUtility.FromJson<Bomberman>(handleData);
                heroItemList.Add(item);
            }
            catch (Exception e)
            {
                Debug.Log("Error in get NFTs");
            }

        }
        InventoryHeroList listItem = new InventoryHeroList();
        listItem.AddHeroList(heroItemList);
        string heroListStr = JsonUtility.ToJson(listItem);
        PlayerPrefs.SetString("CurrentNFTHero", heroListStr);
        PlayerPrefs.Save();
    }
    }
#endif

