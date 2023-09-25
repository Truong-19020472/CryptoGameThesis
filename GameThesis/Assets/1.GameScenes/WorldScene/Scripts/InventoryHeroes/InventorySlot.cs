using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class InventorySlot : MonoBehaviour
{
    public int index;
    public Text nameTxt;
    public Image icon;
    public Button slot;
    public int isUsed;
    //public InventoryItem item;
    //public FireBaseData.HeroFireBase bomberInFirebase;
    public Bomberman bomber { get; private set; }
    // Start is called before the first frame update
    void Start()
    {
        slot.onClick.AddListener(SelectItem);
    }
    public void ChangeData(int newSt)
    {
        GameData.heroFirebase[index].state = newSt;
        FireBaseData.instanceData.UpdateStateHero(GameData.heroFirebase[index]);
    }
    public void InitSlot(int idInData)
    {
        index = idInData;
        //bomberInFirebase = heroFb;
        bomber = JsonUtility.FromJson<Bomberman>(GameData.heroFirebase[index].properties);
        nameTxt.text = bomber.iconSource;
        icon.sprite = Resources.Load<Sprite>($"HeroImages/{bomber.iconSource}");
        isUsed = GameData.heroFirebase[index].state;
    }    
    /// <summary>
    /// event when click item button
    /// </summary>
    public void SelectItem()
    {
        HeroesManager.instance.ChooseItem(this);
    }
}
