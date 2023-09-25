using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestTransaction : MonoBehaviour
{
    public string chain = "ethereum";
    public string network = "goerli";
    public string account = "0x0000000000000000000000000000000000000000";
    public string to = "0x9E958E12d317c1549856Af29eFade6852F57cAb3";
    public string value = "0x0010000000000000000";
    public string data = "";
    // gas limit OPTIONAL
    string gasLimit = "";
    // gas price OPTIONAL
    string gasPrice = "";

    public async void DrawMoney()
    {
        string dataResponses = await EVM.CreateTransaction(chain, network, account, to, value, data, gasLimit, gasPrice);
        Debug.LogError(dataResponses);
    }
}
