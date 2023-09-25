using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class MarketplaceController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void BackToWorldScene()
    {
        SceneManager.LoadScene("WorldScene");
    }
}
