using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if UNITY_WEBGL
public class WebGLSendTransactionExample : MonoBehaviour
{
    async public void OnSendTransaction()
    {
        // account to send to
        string to = "0x9E958E12d317c1549856Af29eFade6852F57cAb3";
        // amount in wei to send
        string value = "100000000000000000";

        // gas limit OPTIONAL
        string gasLimit = "";
        // gas price OPTIONAL
        string gasPrice = "";
        // connects to user's browser wallet (metamask) to send a transaction
        try {
            string response = await Web3GL.SendTransaction(to, value, gasLimit, gasPrice);
            Debug.LogError(response + "hihi");
        } catch (Exception e) {
            Debug.LogException(e, this);
        }
    }
}
#endif