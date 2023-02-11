using System.Text;
using Nethereum.Signer;
using Nethereum.Util;
using UnityEngine;

public class SignVerifyWebWallet : MonoBehaviour
{
    // Start is called before the first frame update
    async void Start()
    {
        string message = "hello";
        string signature =/* await Web3Wallet.Sign(message)/**/"0x94bdbebbd0180195b89721a55c3a436a194358c9b3c4eafd22484085563ff55e49a4552904266a5b56662b280757f6aad3b2ab91509daceef4e5b3016afd34781b";
        //verification
        //string address = await EVM.Verify(message, signature);
       // Debug.LogError(address);
        SignVerifySignature(signature, message);
    }
    
    public void SignVerifySignature(string signatureString, string originalMessage)
    {
        string msg = "\x19" + "Ethereum Signed Message:\n" + originalMessage.Length + originalMessage;
        byte[] msgHash = new Sha3Keccack().CalculateHash(Encoding.UTF8.GetBytes(msg));
        EthECDSASignature signature = MessageSigner.ExtractEcdsaSignature(signatureString);
        EthECKey key = EthECKey.RecoverFromSignature(signature, msgHash);

        bool isValid = key.Verify(msgHash, signature);
        Debug.Log("Address Returned: " + key.GetPublicAddress());
        Debug.Log("Is Valid: " + isValid);
    }
}
