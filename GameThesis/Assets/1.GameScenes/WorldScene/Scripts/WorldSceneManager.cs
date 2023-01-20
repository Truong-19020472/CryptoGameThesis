using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class WorldSceneManager : MonoBehaviour
{
    public static WorldSceneManager instanceWorldScene;
    [SerializeField] private Button marketPlace, heroes, inventory, adventure, shop, treasureHunt;
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
    }
    private void TreasureHuntMode()
    {
        SceneManager.LoadScene("TreasureHunt");
    }
    private void InventoryHeroesScene()
    {
        SceneManager.LoadScene("HeroesManager");
    }
}
 