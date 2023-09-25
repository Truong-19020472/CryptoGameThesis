using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class SettingScripts : MonoBehaviour
{
    public Slider slider;
    public AudioSource source;
    private bool isSetting = false;
    public Button setting;
    public GameObject settingPanel;
    // Start is called before the first frame update
    void Start()
    {
        slider.onValueChanged.AddListener(ChangeVolume);
        setting.onClick.AddListener(OpenSetting);
    }
    private void OpenSetting()
    {
        if(isSetting == false)
        {
            settingPanel.gameObject.SetActive(true);
            isSetting = true;
        }    
        else
        {
            settingPanel.gameObject.SetActive(false);
            isSetting = false;
        }    
    }
    private void ChangeVolume(float vl)
    {
        source.volume = vl;
    }
    
}
