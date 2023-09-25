using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class SelectionMapController : MonoBehaviour
{
    //public GameObject panelNotify;
    // Start is called before the first frame update
    void Start()
    {
        //panelNotify.gameObject.SetActive(false);
    }
    public void BackToWorld()
    {
        SceneManager.LoadScene("WorldScene");
    }
}
