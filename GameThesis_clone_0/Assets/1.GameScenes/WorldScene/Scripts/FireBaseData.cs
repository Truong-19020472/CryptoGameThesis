using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Runtime.InteropServices;
using System;
using System.Threading.Tasks;
public class FireBaseData : MonoBehaviour
{
    [Serializable]
    public class User
    {
        public string token;
        public User()
        {

        }
        public User(string coin)
        {
            token = coin;
        }
    }
   
    [Serializable]
    public class HeroFireBase
    {
        public int id;
        public string properties;
        public int state;
    }

    //public Text debugText;
    [DllImport("__Internal")]
    public static extern void GetJSON(string path, string objectName, string callBack, string fallBack);

    [DllImport("__Internal")]
    public static extern void PostJSON(string path, string value, string objectName, string callBack, string fallBack);

    [DllImport("__Internal")]
    public static extern void PushJSON(string path, string value, string objectName, string callBack, string fallBack);

    [DllImport("__Internal")]
    public static extern void UpdateJSON(string path, string value, string objectName, string callBack, string fallBack);
    // Start is called before the first frame update

    [DllImport("__Internal")]
    public static extern void GetChild(string path, string childName, string objectName, string callBack, string fallBack);

    [DllImport("__Internal")]
    public static extern void GetCountChild(string path, string objectName, string callBack, string fallBack);

    public static FireBaseData instanceData;
    public void Awake()
    {
        if (instanceData == null)
            instanceData = this;
        else
            Destroy(gameObject);
    }
    void Start()
    {
           
    }
    public void GetUserTokenData()
    {
        GetJSON($"players/{PlayerPrefs.GetString("Account")}", gameObject.name, "OnSuccessGetTokenData", "OnFailRequest");
    }
    /// <summary>
     /// Hàm trả về khi lấy dữ liệu thành công
     /// </summary>
     /// <param name="data"></param>
    public void OnSuccessGetTokenData(string data)
    {
        if (data.Equals("null"))
        {
            UpdateCoinData("0.5");
        }
        else
        {
            User dataToken = new User();
            dataToken = JsonUtility.FromJson<User>(data);
            GameData.ChangeCurrentCoin(dataToken.token);
            //debugText.text = data + dataToken.token;

        }
    }
    public void UpdateCoinData(string token)
    {
        GameData.ChangeCurrentCoin(token);
        User newUser = new User(token);
        PostJSON($"players/{PlayerPrefs.GetString("Account")}", JsonUtility.ToJson(newUser), gameObject.name, "OnSuccessPostTokenData", "OnFailRequest");
    }
    private void OnSuccessPostTokenData(string data)
    {
        Debug.LogError("success");
    }
    
    //public Text heroBoard;
    public void GetNumberChildrenHero()
    {
        GetCountChild($"heroes/{PlayerPrefs.GetString("Account")}", gameObject.name, "OnSuccessNumberHero", "OnFailRequest");
    }
    private void OnSuccessNumberHero(string data)
    {
        if (data.Equals("null"))
        {
            GameData.numberHero = 0;
        }
        else
        {
            GameData.numberHero = int.Parse(data);
            //heroBoard.text = data + " hihi";
            GetHeroData();
        }
        
    }
    public void GetHeroData()
    {
        if (GameData.numberHero == 0)
            return;
        for(int i = 0; i < GameData.numberHero; i ++)
        {
            GetJSON($"heroes/{PlayerPrefs.GetString("Account")}/{i + 1}", gameObject.name, "OnSuccessDataHero", "OnFailRequest");

        }    
    }

    string s = "";

    private void OnSuccessDataHero(string data)
    {
        if(data.Equals("null"))
        {
            return;
        }    
        else
        {
            GameData.AddHero(data);
            s += data;
        }    

    }   
    
    public void ShowString()
    {
        //heroBoard.text = s;
    }
    public void PostNewHero(FireBaseData.HeroFireBase newHero)
    {
        GameData.AddHero(JsonUtility.ToJson(newHero));
        PostJSON($"heroes/{PlayerPrefs.GetString("Account")}/{newHero.id}", JsonUtility.ToJson(newHero), gameObject.name, "OnSuccess", "OnFailRequest");
    }

    public void UpdateStateHero(FireBaseData.HeroFireBase newHero)
    {
        //int id = GameData.heroFirebase.IndexOf(newHero);
        //if (id >= 0)
        //{
        //    GameData.heroFirebase[id] = newHero;
        //}    
        PostJSON($"heroes/{PlayerPrefs.GetString("Account")}/{newHero.id}", JsonUtility.ToJson(newHero), gameObject.name, "OnSuccessUpdateState", "OnFailRequest");
    }

    public void OnSuccess(string data)
    {
        GameData.numberHero++;
    }
    public void OnSuccessUpdateState(string data)
    {
        if (data.Equals("null"))
            return;
        //FireBaseData.HeroFireBase updateHero = JsonUtility.FromJson<FireBaseData.HeroFireBase>(data);
        //int index = GameData.heroFirebase.IndexOf(updateHero);
        //if(index >= 0)
        //{
        //    GameData.heroFirebase[index] = updateHero;
        //}    
    }    
    private void OnFailRequest(string error)
    {
        Debug.LogError("Fail");
    }
    
}
