using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdvantureIceMonster : MonoBehaviour, IMonster
{
    private Vector3 randomPos;
    private Rigidbody2D rid;
    void Start()
    {
        rid = GetComponent<Rigidbody2D>();
        randomPos = new Vector3(0, 0, 0);
        
    }

    private void FixedUpdate()
    {
        rid.MovePosition(transform.position + DirectionMove() * 0.5f * Time.fixedDeltaTime);
        //transform.position += DirectionMove() * Time.fixedDeltaTime;
    }
    public Vector3 DirectionMove()
    {
        if((randomPos - transform.position).magnitude < 0.1f)
        {
            randomPos = new Vector3(Random.Range(-7f, 7f), Random.Range(-3f, 3f), 0);
            if(randomPos.x > transform.position.x)
            {
                transform.GetComponent<SpriteRenderer>().flipX = false;
            }    
            else
            {
                transform.GetComponent<SpriteRenderer>().flipX = true;
            }    
           
        }

        return (randomPos - transform.position).normalized ;
        
    }

}
