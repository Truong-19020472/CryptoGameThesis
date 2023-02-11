using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ShopConfirmPanel : MonoBehaviour
{
    public ShopItem currentItemToBuy;
    public Button confirm;
    public Button cancel;
    void Start()
    {
        cancel.onClick.AddListener(CancelBuying);
        confirm.onClick.AddListener(Buying);
    }
    public void SetItemToConfirm(ShopItem it)
    {
        currentItemToBuy = it;
    }    
    private void CancelBuying()
    {
        gameObject.SetActive(false);
    }
    private void Buying()
    {
        gameObject.SetActive(false);

    }
}
