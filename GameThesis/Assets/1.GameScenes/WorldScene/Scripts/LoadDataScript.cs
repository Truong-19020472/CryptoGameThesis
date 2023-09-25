using Models;
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
public class LoadDataScript : MonoBehaviour
{
    public Image LoadingPanel;
    public class Response
    {
        public string image;
    }
    public class Attribute
    {
        public string trait_type { get; set; }
        public string value { get; set; }
    }

    public class Root
    {
        public List<string> additionalFiles { get; set; }
        public List<Attribute> attributes { get; set; }
        public string description { get; set; }
        public string image { get; set; }
        public string name { get; set; }
        public string tokenType { get; set; }
    }

    private string account;
    public string chain;
    public string network;
    private InventoryHeroList listItem;
    //public DataBaseManager dataBaseManager;
    int idAccount = -1;
    //private DataBaseManager.ListHeroDatabase listPurchasedHero = new DataBaseManager.ListHeroDatabase();
    void Start()
    {
        LoadingPanel.gameObject.SetActive(true);
        listItem = new InventoryHeroList();

        //DataBaseManager.CreateHeroTable();
        //DataBaseManager.CreatePlayerTable();
        //DataBaseManager.CreateTokenTable();


        account = //"0x9E958E12d317c1549856Af29eFade6852F57cAb3";
             PlayerPrefs.GetString("Account"); 
            //"0x9e958e12d317c1549856af29efade6852f57cab3";
        checkAccount.text = account;
        //if(DataBaseManager.GetIDAccount(account) != -1 && !account.Equals(""))
        //{
        //    DataBaseManager.AddAccount(account);
        //    idAccount = DataBaseManager.GetIDAccount(account);
        //}    
        GetListItem();
        GetBalanceOfAccountAsync();
        GetBalanceErc20Token();
    }
    public Text dectectError;
    public Text checkAccount;
    //get data current nft hero
    public async void GetListItem()
    {
        try
        {
            dectectError.text = "a";
            List<MintedNFT.Response> response = await EVM.GetMintedNFT(chain, network, account);
            if (response.Count > 0)
            {
                dectectError.text = "+++";
                StartCoroutine(RequestData(response));
            }    
               
            else

            {
                dectectError.text = "b";
                PlayerPrefs.SetString("CurrentNFTHero", "");
                PlayerPrefs.Save();
                StartCoroutine(GetDataFromFb());
            }
        }
        catch (Exception e)
        {
            dectectError.text = e.ToString();
            Debug.Log("No Listed Items" + e);
        }
    }
    IEnumerator GetDataFromFb()
    {
        FireBaseData.instanceData.GetUserTokenData();

        FireBaseData.instanceData.GetNumberChildrenHero();

        yield return new WaitForSeconds(1f);
        LoadingPanel.gameObject.SetActive(false);
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
                //Debug.Log(responseList[0].uri);
            }

            UnityWebRequest webRequest = UnityWebRequest.Get(responseList[i].uri);
            /*await*/ //webRequest.SendWebRequest();
            //webRequest.timeout = 3;
            yield return webRequest.SendWebRequest();

            Debug.LogError(webRequest.isDone);
            Root data =
                JsonConvert.DeserializeObject<Root>(
                    System.Text.Encoding.UTF8.GetString(webRequest.downloadHandler.data));

            string handleData = data.description.Replace("\\", string.Empty);
            Debug.LogError(handleData);
            try
            {
                Bomberman item = JsonUtility.FromJson<Bomberman>(handleData);
                heroItemList.Add(item);
            }
            catch(Exception e)
            {

            }

        }
        dectectError.text = "c";
        listItem.AddHeroList(heroItemList);
        GameData.AddListBomberman(heroItemList);//lưu giữ liệu cục bộ
        string heroListStr = JsonUtility.ToJson(listItem);
        PlayerPrefs.SetString("CurrentNFTHero", heroListStr);
        PlayerPrefs.Save();
        dectectError.text = "d";
        //Lưu các NFT vào danh sách gamedata hero với chỉ số id là - 1 để phân biệt với cái data lấy từ firebase
        for (int i = 0; i < heroItemList.Count; i++)
        {
            FireBaseData.HeroFireBase dataHeroOnFb = new FireBaseData.HeroFireBase();
            dataHeroOnFb.id = -1;
            dataHeroOnFb.properties = JsonUtility.ToJson(heroItemList[i]);
            dataHeroOnFb.state = 0;
            GameData.AddHero(JsonUtility.ToJson(dataHeroOnFb));
        }
        dectectError.text = "e";
       
        yield return new WaitForSeconds(0.5f);
        FireBaseData.instanceData.GetUserTokenData();
        dectectError.text = "f";
        //if (DataBaseManager.instanceDatabase.GetPurchasedHero(idAccount).listHero.Count == 0)
        //{
        //    PlayerPrefs.SetString("PurchasedHeroes", JsonUtility.ToJson(listPurchasedHero));
        //    PlayerPrefs.Save();
        //}    
        //else
        //{
        //    listPurchasedHero.ReplaceList(DataBaseManager.instanceDatabase.GetPurchasedHero(idAccount).listHero);
        //    PlayerPrefs.SetString("PurchasedHeroes", JsonUtility.ToJson(listPurchasedHero));
        //    PlayerPrefs.Save();
        //}    
        //PlayerPrefs.SetString("PurchasedHeroes", JsonUtility.ToJson(DataBaseManager.GetPurchasedHero(idAccount)));
        //PlayerPrefs.Save();

        FireBaseData.instanceData.GetNumberChildrenHero();
        dectectError.text = "g";
        //init data state for NFT
        //for (int i = 0; i < listItem.heroList.Count; i++)
        //{
        //    HeroStates.AddBomberState(new KeyValuePair<int, int>(-1, 0));
        //}
        //if (DataBaseManager.GetPurchasedHero(idAccount).listHero.Count != 0)
        //{
        //    DataBaseManager.ListHeroDatabase totalHero = DataBaseManager.GetPurchasedHero(idAccount);
        //    for (int i = 0; i < totalHero.listHero.Count; i++)
        //    {
        //        HeroStates.AddBomberState(new KeyValuePair<int, int>(totalHero.listHero[i].id, totalHero.listHero[i].state));
        //    }
        //}


        ////yield return new WaitForSeconds(0.2f);
        //PlayerPrefs.SetString("HeroActive", ""); // player can dat lai heroactive
        //PlayerPrefs.Save();

        yield return new WaitForSeconds(1f);
        LoadingPanel.gameObject.SetActive(false);
        //SceneManager.LoadScene("WorldScene");
    }
    public async void GetBalanceOfAccountAsync()
    {
        //string chain = "ethereum";
        //string network = "testnet";
        //string account = /*PlayerPrefs.GetString("Account")*/ "0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e";
        string balance = await EVM.BalanceOf(chain, network, account);

        float demicals = 1000000000000000000;
        float wei = float.Parse(balance);
        float bnb = wei / demicals;
        //coin.text = string.Format("{0:0.00}", bnb);
        PlayerPrefs.SetFloat("CurrentToken", bnb);
        PlayerPrefs.Save();
        Debug.Log(bnb);
    }
    public async void GetBalanceErc20Token()
    {
        //string chain = "binance";
        //string network = "testnet";
        string contract = "0x9e1094475DC54E1473eE55155393F80F5cFbE721";
        //string account = "0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e";

        BigInteger decimals = await ERC20.Decimals(chain, network, contract);
        BigInteger balanceOf = await ERC20.BalanceOf(chain, network, contract, account);
        float dBalance = (float)balanceOf;
        float balance = dBalance / Mathf.Pow(10f, (float)decimals);

        PlayerPrefs.SetFloat("ERC20Token", balance);
        PlayerPrefs.Save();
        Debug.Log(balance);
        
    }

}
