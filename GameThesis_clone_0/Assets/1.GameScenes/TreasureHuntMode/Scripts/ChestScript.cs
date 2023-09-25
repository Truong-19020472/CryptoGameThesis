using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChestScript : MonoBehaviour
{
    private Collider2D col;
    private SpriteRenderer sp;
    public Vector3Int spot;
    public bool isCollect = false;
    // Start is called before the first frame update
    void Start()
    {
        col = transform.GetComponent<Collider2D>();
        sp = GetComponent<SpriteRenderer>();
    }
    public void InitSpot(Vector3Int pos)
    {
        spot = pos;
    }    
    // Update is called once per frame
    void Update()
    {
        if(Physics2D.OverlapPoint(transform.position, LayerMask.GetMask("Obstacle")))
        {
            //col.enabled = false;
            sp.enabled = false;
        }
        else
        {
            //col.enabled = true;
            sp.enabled = true;
            isCollect = true;
        }    
    }

}
