using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using UnityEngine;
using UnityEngine.UI;
public class ShopConfirmPanel : MonoBehaviour
{
    public ShopItem currentItemToBuy;
    public Button confirm;
    public Button cancel;
    public Text coin;
    //public GameObject loading;
    //public DataBaseManager dataBaseManager;
    void Start()
    {
        cancel.onClick.AddListener(CancelBuying);
        confirm.onClick.AddListener(Buying);
    }
    public void SetItemToConfirm(ShopItem it)
    {
        currentItemToBuy = it;
    }    
    private void CancelBuying()
    {
        gameObject.SetActive(false);
    }
    private void Buying()
    {
        //loading.SetActive(true);
        //gameObject.SetActive(false);
        //GetBalanceErc20Token();
        BuyItemByMyToken();
    }
    public async void BuyItemByMyToken()
    {
        
        //string chain = "ethereum";
        // set network
        //string network = "goerli";
        // abi in json format
        //string abi = "[ { \"inputs\": [ { \"internalType\": \"uint8\", \"name\": \"_myArg\", \"type\": \"uint8\" } ], \"name\": \"addTotal\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"myTotal\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" } ]";
        string abi = "[ { \"inputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"constructor\" }, { \"anonymous\": false, \"inputs\": [ { \"indexed\": true, \"internalType\": \"address\", \"name\": \"owner\", \"type\": \"address\" }, { \"indexed\": true, \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"indexed\": false, \"internalType\": \"uint256\", \"name\": \"value\", \"type\": \"uint256\" } ], \"name\": \"Approval\", \"type\": \"event\" }, { \"anonymous\": false, \"inputs\": [ { \"indexed\": true, \"internalType\": \"address\", \"name\": \"previousOwner\", \"type\": \"address\" }, { \"indexed\": true, \"internalType\": \"address\", \"name\": \"newOwner\", \"type\": \"address\" } ], \"name\": \"OwnershipTransferred\", \"type\": \"event\" }, { \"anonymous\": false, \"inputs\": [ { \"indexed\": true, \"internalType\": \"address\", \"name\": \"from\", \"type\": \"address\" }, { \"indexed\": true, \"internalType\": \"address\", \"name\": \"to\", \"type\": \"address\" }, { \"indexed\": false, \"internalType\": \"uint256\", \"name\": \"value\", \"type\": \"uint256\" } ], \"name\": \"Transfer\", \"type\": \"event\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"owner\", \"type\": \"address\" }, { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" } ], \"name\": \"allowance\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"approve\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"account\", \"type\": \"address\" } ], \"name\": \"balanceOf\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"account\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"burn\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"decimals\", \"outputs\": [ { \"internalType\": \"uint8\", \"name\": \"\", \"type\": \"uint8\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"subtractedValue\", \"type\": \"uint256\" } ], \"name\": \"decreaseAllowance\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"addedValue\", \"type\": \"uint256\" } ], \"name\": \"increaseAllowance\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"account\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"mint\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"name\", \"outputs\": [ { \"internalType\": \"string\", \"name\": \"\", \"type\": \"string\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"owner\", \"outputs\": [ { \"internalType\": \"address\", \"name\": \"\", \"type\": \"address\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"renounceOwnership\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"symbol\", \"outputs\": [ { \"internalType\": \"string\", \"name\": \"\", \"type\": \"string\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"totalSupply\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"to\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"transfer\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"from\", \"type\": \"address\" }, { \"internalType\": \"address\", \"name\": \"to\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"transferFrom\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"newOwner\", \"type\": \"address\" } ], \"name\": \"transferOwnership\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" } ]";
        // address of contract
        string contract = "0x9e1094475DC54E1473eE55155393F80F5cFbE721";
        // method you want to write to
        string method = "burn";
        string account = /*"0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e";*/ PlayerPrefs.GetString("Account");
        // amount you want to change, in this case we are adding 1 to "addTotal"
        //BigInteger mintAmout = Mathf.FloorToInt(float.Parse(currentItemToBuy.price) * (float)Mathf.Pow(10, 18));
        float mintAmout =float.Parse( currentItemToBuy.price);
        float decimals = 1000000000000000000; // 18 decimals
        float wei = mintAmout * decimals;
        string amount = /*"1000000000000000000"*/ Convert.ToDecimal(wei).ToString();
        //string amount = currentItemToBuy.price;
        // array of arguments for contract you can also add a nonce here as optional parameter. You leave this blank or remove and set args to "[]" if your function has no inputs
        string[] obj = { account, amount };
        string args = JsonConvert.SerializeObject(obj);
        // connects to user's browser wallet to call a transaction
        string response = await Web3GL.SendContract(method, abi, contract, args, "0", "", "");
        if (response.Length == 66)
        {
            GetBalanceErc20Token();
        }
        else
        {
            gameObject.SetActive(false);
        }    
        //loading.SetActive(false);
    }
    public async void GetBalanceErc20Token()
    {
        string chain = "ethereum";
        string network = "goerli";
        string contract = "0x9e1094475DC54E1473eE55155393F80F5cFbE721";
        string account =/* "0x9E958E12d317c1549856Af29eFade6852F57cAb3"; //*/PlayerPrefs.GetString("Account");

        float decimals = 1000000000000000000;
        BigInteger balanceOf = await ERC20.BalanceOf(chain, network, contract, account);
        float dBalance = (float)balanceOf;
        float balance = dBalance / decimals;

        PlayerPrefs.SetFloat("ERC20Token", balance);
        PlayerPrefs.Save();
        coin.text = string.Format("{0:0.0000}", balance);

        FireBaseData.HeroFireBase newHero = new FireBaseData.HeroFireBase();
        newHero.id = GameData.numberHero + 1;
        newHero.state = 0;
        newHero.properties = currentItemToBuy.properties;

        FireBaseData.instanceData.PostNewHero(newHero);
        //InventoryHeroList inventoryHeroList = new InventoryHeroList();
        //if (PlayerPrefs.HasKey("PurchasedHero"))
        //{
        //    //int idAcc = DataBaseManager.GetIDAccount(PlayerPrefs.GetString("Account"));
        //    //DataBaseManager.AddHero(idAcc, currentItemToBuy.properties, 0);
        //    ////string str = PlayerPrefs.GetString("PurchasedHero");
        //    //DataBaseManager.ListHeroDatabase listPurchasedHero = new DataBaseManager.ListHeroDatabase();
        //    //listPurchasedHero = DataBaseManager.GetPurchasedHero(idAcc);
        //    //PlayerPrefs.SetString("PurchasedHeroes", JsonUtility.ToJson(listPurchasedHero));
        //    //PlayerPrefs.Save();

        //    //HeroStates.AddBomberState(new KeyValuePair<int, int>(listPurchasedHero.listHero[listPurchasedHero.listHero.Count - 1].id, 0));
        //    //if (str != "")
        //    //{
        //    //    InventoryHeroList listShopHeroes = JsonUtility.FromJson<InventoryHeroList>(str);
        //    //    listShopHeroes.AddHero(JsonUtility.FromJson<Bomberman>(currentItemToBuy.properties));
        //    //    PlayerPrefs.SetString("PurchasedHero", JsonUtility.ToJson(listShopHeroes));
        //    //    PlayerPrefs.Save();
        //    //    //currentHeroList.AddOtherList(listShopHeroes);
        //    //}

        //}
        //else
        //{
        //    //InventoryHeroList listShopHeroes = new InventoryHeroList(JsonUtility.FromJson<Bomberman>(currentItemToBuy.properties));
        //    //PlayerPrefs.SetString("PurchasedHero", JsonUtility.ToJson(listShopHeroes));
        //    //PlayerPrefs.Save();
        //}
        //Debug.Log(balance);
        //loading.SetActive(false);
        gameObject.SetActive(false);
    }
}
