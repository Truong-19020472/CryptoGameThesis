using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Threading.Tasks;
using System.Numerics;
public class WorldSceneManager : MonoBehaviour
{
    public static WorldSceneManager instanceWorldScene;
    [SerializeField] private Button marketPlace, heroes, inventory, adventure, shop, treasureHunt;
    public Text coin;
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
        GetBalanceOfAccountAsync();
    }
    private void TreasureHuntMode()
    {
        SceneManager.LoadScene("TreasureHunt");
    }
    private void GoToShop()
    {
        SceneManager.LoadScene("Shop");
    }
    private void InventoryHeroesScene()
    {
        SceneManager.LoadScene("HeroesManager");
    }
    public async void GetBalanceOfAccountAsync()
    {
        string chain = "binance";
        string network = "testnet";
        string account = /*PlayerPrefs.GetString("Account")*/ "0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e";
        string balance = await EVM.BalanceOf(chain, network, account);

        float demicals = 1000000000000000000;
        float wei = float.Parse(balance);
        float bnb = wei / demicals;
        coin.text = string.Format("{0:0.00}", bnb);
        PlayerPrefs.SetFloat("CurrentToken", bnb);
        PlayerPrefs.Save();
    }
    
}
 