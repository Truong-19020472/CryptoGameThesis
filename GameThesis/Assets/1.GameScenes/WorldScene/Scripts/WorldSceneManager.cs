using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Threading.Tasks;
using System.Numerics;
using System;
public class WorldSceneManager : MonoBehaviour
{
    public static WorldSceneManager instanceWorldScene;
    [SerializeField] private Button marketPlace, heroes, inventory, advanture, shop, treasureHunt, treasure;
    public Text ethe;
    public Text erc20Coin;
    public Text collectedCoin;
    private void Awake()
    {
        if (instanceWorldScene == null)
            instanceWorldScene = this;
        else
            Destroy(gameObject);

    }
    void Start()
    {
        treasureHunt.onClick.AddListener(TreasureHuntMode);
        heroes.onClick.AddListener(InventoryHeroesScene);
        shop.onClick.AddListener(GoToShop);
        inventory.onClick.AddListener(InventoryScene);
        treasure.onClick.AddListener(GoToTreasureCollection);
        advanture.onClick.AddListener(GoToAdventure);
        marketPlace.onClick.AddListener(GotoMarket);
        GetBalanceOfAccountAsync();
        GetCurrentErc20Token();
        GetCollectedCoin();
        //float mintAmout = PlayerPrefs.GetFloat("TemporaryCoin");
        //float decimals = 1000000000000000000; // 18 decimals
        //float wei = mintAmout * decimals;
        //Debug.LogError(Convert.ToDecimal(wei).ToString());
    }
    private void GotoMarket()
    {
        SceneManager.LoadScene("MarketPlace");
    }
    private void GoToAdventure()
    {
        SceneManager.LoadScene("AdvantureMap");
    }
    private void TreasureHuntMode()
    {
        SceneManager.LoadScene("MapSelection");
    }
    private void GoToShop()
    {
        SceneManager.LoadScene("Shop");
    }
    private void InventoryHeroesScene()
    {
        SceneManager.LoadScene("HeroesManager");
    }
    private void InventoryScene()
    {
        SceneManager.LoadScene("Inventory");
    }
    private void GoToTreasureCollection()
    {
        SceneManager.LoadScene("Treasure");
    }
    public async void GetBalanceOfAccountAsync()
    {
        string chain = "ethereum";
        string network = "goerli";
        string account = PlayerPrefs.GetString("Account"); /*"0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e";*/
        string balance = await EVM.BalanceOf(chain, network, account);

        float demicals = 1000000000000000000;
        float wei = float.Parse(balance);
        float bnb = wei / demicals;
        ethe.text = string.Format("{0:0.0000}", bnb);
        //if (PlayerPrefs.HasKey("CurrentToken"))
        //{
        //    float bnb = PlayerPrefs.GetFloat("CurrentToken");
        //    ethe.text = string.Format("{0:0.0000}", bnb);
        //}
        //else
        //{
        //    ethe.text = "0.00";
        //    PlayerPrefs.SetFloat("CurrentToken", 0.00f);
        //    PlayerPrefs.Save();
        //}


    }
    public async void GetCurrentErc20Token()
    {
        //if (PlayerPrefs.HasKey("ERC20Token"))
        //{
        //    float bnb = PlayerPrefs.GetFloat("ERC20Token");
        //    erc20Coin.text = string.Format("{0:0.0000}", bnb);
        //}
        //else
        //{
        //    erc20Coin.text = "0.00";
        //    PlayerPrefs.SetFloat("ERC20Token", 0.00f);
        //    PlayerPrefs.Save();
        //}
        string chain = "ethereum";
        string network = "goerli";
        string account = PlayerPrefs.GetString("Account");
        string contract = "0x9e1094475DC54E1473eE55155393F80F5cFbE721";
        //string account = "0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e";

        float decimals = 1000000000000000000;
        BigInteger balanceOf = await ERC20.BalanceOf(chain, network, contract, account);
        float dBalance = (float)balanceOf;
        float balance = dBalance/decimals;
        erc20Coin.text = string.Format("{0:0.0000}", balance);
    }
    public void GetCollectedCoin()
    {
        //if(PlayerPrefs.HasKey("TemporaryCoin"))
        //{
        //    float bc = PlayerPrefs.GetFloat("TemporaryCoin");
        //    collectedCoin.text = string.Format("{0:0.0000}", bc);
        //}
        collectedCoin.text = GameData.currentCoin;
    }
}
 