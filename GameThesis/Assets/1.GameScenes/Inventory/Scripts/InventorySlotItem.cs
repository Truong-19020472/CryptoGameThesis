using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class InventorySlotItem : MonoBehaviour
{
    private Button chooseButton;
    public bool isHero;
    // Start is called before the first frame update
    void Start()
    {
        chooseButton = GetComponent<Button>();
        if(isHero)
        {
            chooseButton.onClick.AddListener(SelectItem);
        }    
        else
        {
            chooseButton.onClick.AddListener(ClickItem);
        }    
        
    }
    private void SelectItem()
    {
        SceneManager.LoadScene("HeroesManager");
    }
    private void ClickItem()
    {

    }
    
}
