using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class MapSelectionScript : MonoBehaviour
{
    public int idMap;
    public GameObject panelNotify;
    private Button map;
    // Start is called before the first frame update
    void Start()
    {
        map = GetComponent<Button>();
        map.onClick.AddListener(MoveToGame);
    }
    public void MoveToGame()
    {
        if (PlayerPrefs.HasKey("HeroActive"))
        {
            if (PlayerPrefs.GetString("HeroActive") != "")
            {
                PlayerPrefs.SetInt("TreasureMap", idMap);
                PlayerPrefs.Save();
                SceneManager.LoadScene("TreasureHunt");
            }
            else
            {
                panelNotify.gameObject.SetActive(true);
            }
        }
        else
        {
            panelNotify.gameObject.SetActive(true);
        }    

    }

}
