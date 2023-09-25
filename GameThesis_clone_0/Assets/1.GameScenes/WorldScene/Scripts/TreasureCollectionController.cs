using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Newtonsoft.Json;
using System.Numerics;
using System;
using System.Data;
public class TreasureCollectionController : MonoBehaviour
{
    public Button exit;
    public GameObject panelNotify;
    public GameObject loading;
    public Text collectionCoin;
    public Button withdrawBtn;

    // Start is called before the first frame update
    void Start()
    {
        
        panelNotify.SetActive(false);
        loading.SetActive(false);
        exit.onClick.AddListener(BackToWorldScene);
        withdrawBtn.onClick.AddListener(WithdrawToken);
        ShowCoin();
    }
    public void BackToWorldScene()
    {
        SceneManager.LoadScene("WorldScene");
    }
    public void ShowCoin()
    {
        collectionCoin.text = GameData.currentCoin;
        //if(PlayerPrefs.HasKey("TemporaryCoin"))
        //{
        //    float coin = PlayerPrefs.GetFloat("TemporaryCoin");
        //    collectionCoin.text = string.Format("{0:0.0000}", coin);
        //}    
        //else
        //{
        //    collectionCoin.text = "0.0000";
        //    PlayerPrefs.SetFloat("TemporaryCoin", 0f);
        //    if (DataBaseManager.GetToken(DataBaseManager.GetIDAccount(PlayerPrefs.GetString("Account"))).Equals("") == false)
        //    {
        //        DataBaseManager.UpdateCoin(DataBaseManager.GetIDAccount(PlayerPrefs.GetString("Account")), collectionCoin.text);
        //    }
        //    PlayerPrefs.Save();
        //}    
    }
    public async void WithdrawToken()
    {
        //if (PlayerPrefs.HasKey("TemporaryCoin"))
        //{
            float coin = float.Parse(GameData.currentCoin); //PlayerPrefs.GetFloat("TemporaryCoin");
            if((coin - 0.5f) > 0)
            {
                loading.SetActive(true);
                string chain = "ethereum";
                // set network
                string network = "goerli";
                // abi in json format
                string abi = "[ { \"inputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"constructor\" }, { \"anonymous\": false, \"inputs\": [ { \"indexed\": true, \"internalType\": \"address\", \"name\": \"owner\", \"type\": \"address\" }, { \"indexed\": true, \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"indexed\": false, \"internalType\": \"uint256\", \"name\": \"value\", \"type\": \"uint256\" } ], \"name\": \"Approval\", \"type\": \"event\" }, { \"anonymous\": false, \"inputs\": [ { \"indexed\": true, \"internalType\": \"address\", \"name\": \"previousOwner\", \"type\": \"address\" }, { \"indexed\": true, \"internalType\": \"address\", \"name\": \"newOwner\", \"type\": \"address\" } ], \"name\": \"OwnershipTransferred\", \"type\": \"event\" }, { \"anonymous\": false, \"inputs\": [ { \"indexed\": true, \"internalType\": \"address\", \"name\": \"from\", \"type\": \"address\" }, { \"indexed\": true, \"internalType\": \"address\", \"name\": \"to\", \"type\": \"address\" }, { \"indexed\": false, \"internalType\": \"uint256\", \"name\": \"value\", \"type\": \"uint256\" } ], \"name\": \"Transfer\", \"type\": \"event\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"owner\", \"type\": \"address\" }, { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" } ], \"name\": \"allowance\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"approve\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"account\", \"type\": \"address\" } ], \"name\": \"balanceOf\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"account\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"burn\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"decimals\", \"outputs\": [ { \"internalType\": \"uint8\", \"name\": \"\", \"type\": \"uint8\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"subtractedValue\", \"type\": \"uint256\" } ], \"name\": \"decreaseAllowance\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"addedValue\", \"type\": \"uint256\" } ], \"name\": \"increaseAllowance\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"account\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"mint\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"name\", \"outputs\": [ { \"internalType\": \"string\", \"name\": \"\", \"type\": \"string\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"owner\", \"outputs\": [ { \"internalType\": \"address\", \"name\": \"\", \"type\": \"address\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"renounceOwnership\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"symbol\", \"outputs\": [ { \"internalType\": \"string\", \"name\": \"\", \"type\": \"string\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"totalSupply\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"to\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"transfer\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"from\", \"type\": \"address\" }, { \"internalType\": \"address\", \"name\": \"to\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"transferFrom\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"newOwner\", \"type\": \"address\" } ], \"name\": \"transferOwnership\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" } ]";
                // address of contract
                string contract = "0x9e1094475DC54E1473eE55155393F80F5cFbE721";
                // method you want to write to
                string method = "mint";
                string account = PlayerPrefs.GetString("Account");
                // amount you want to change, in this case we are adding 1 to "addTotal"
                float mintAmout = PlayerPrefs.GetFloat("TemporaryCoin");
                float decimals = 1000000000000000000; // 18 decimals
                float wei = mintAmout * decimals;
                string amount = /*"1000000000000000000"*/ Convert.ToDecimal(wei).ToString();
                // array of arguments for contract you can also add a nonce here as optional parameter. You leave this blank or remove and set args to "[]" if your function has no inputs
                string[] obj = { account, amount };
                string args = JsonConvert.SerializeObject(obj);
                // connects to user's browser wallet to call a transaction
                string response = await Web3GL.SendContract(method, abi, contract, args, "0", "", "");
                if (response.Length == 66)
                {
                    collectionCoin.text = "0.0000";
                    FireBaseData.instanceData.UpdateCoinData("0.0");
                    //PlayerPrefs.SetFloat("TemporaryCoin", 0f);
                    //PlayerPrefs.Save();
                    //if (DataBaseManager.GetToken(DataBaseManager.GetIDAccount(PlayerPrefs.GetString("Account"))).Equals("") == false)
                    //{
                    //    DataBaseManager.UpdateCoin(DataBaseManager.GetIDAccount(PlayerPrefs.GetString("Account")), collectionCoin.text);
                    //}
                    GetBalanceErc20Token();
                }


            }  
            else
            {
                panelNotify.SetActive(true);
            }    
        //}
        //else
        //{
        //    panelNotify.SetActive(true);
        //}    
        // set chain
        
            //result.text = response;
            // display response in game
            //print(response);

        
    }
    public async void GetBalanceErc20Token()
    {
        string chain = "ethereum";
        string network = "goerli";
        string contract = "0x9e1094475DC54E1473eE55155393F80F5cFbE721";
        string account = /*"0x9E958E12d317c1549856Af29eFade6852F57cAb3" ; //*/PlayerPrefs.GetString("Account");

        BigInteger decimals = await ERC20.Decimals(chain, network, contract);
        BigInteger balanceOf = await ERC20.BalanceOf(chain, network, contract, account);
        float dBalance = (float)balanceOf;
        float balance = dBalance / Mathf.Pow(10f, (float)decimals);

        PlayerPrefs.SetFloat("ERC20Token", balance);
        PlayerPrefs.Save();
        loading.SetActive(false);
    }
}
