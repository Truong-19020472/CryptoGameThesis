using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    [SerializeField] private GameObject playerFollow;

    private Vector3 vel = Vector3.zero;
    // Update is called once per frame
    void Update()
    {
        
        Vector3 pos = Vector3.SmoothDamp(transform.position, playerFollow.transform.position, ref vel, 0.4f);
        transform.position = new Vector3(pos.x, pos.y, transform.position.z);
    }
}

