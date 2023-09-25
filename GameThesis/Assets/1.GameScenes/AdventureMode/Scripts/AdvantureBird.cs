using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
public interface IMonster
{
    Vector3 DirectionMove();
}
public class AdvantureBird : MonoBehaviour, IMonster
{
    public float speed;
    private Rigidbody2D rid;
    //public T
    Vector3 dir;
    void Start()
    {
        rid = GetComponent<Rigidbody2D>();
        dir = DirectionMove();
        rid.velocity = dir * speed;
    }
    private void Update()
    {
        if (Physics2D.OverlapPoint(transform.position, LayerMask.GetMask("Explosion")))
        {
            Destroy(gameObject);
        }
    }
    private void FixedUpdate()
    {
        
        if(Physics2D.Raycast(transform.position, dir, 0.6f, LayerMask.GetMask("Obstacle")).collider != null)
        {
            //Debug.LogError("huhu");
            dir = DirectionMove();
            rid.velocity = dir * speed;
        }
        if(dir == Vector3.right)
        {
            transform.GetComponent<SpriteRenderer>().flipX = false;
        }
        else
        {
            if(dir == Vector3.left)
                transform.GetComponent<SpriteRenderer>().flipX = true;
        }
        
    }

    public Vector3 DirectionMove()
    {
        List<Vector3> directions = new List<Vector3>();
        if(Physics2D.Raycast(transform.position, Vector2.up, 0.6f, LayerMask.GetMask("Obstacle")).collider == null)
        {
            directions.Add(Vector3.up);
            //transform.position += Vector3.up * Time.fixedDeltaTime * speed;
            //return;
        }
        if (Physics2D.Raycast(transform.position, Vector2.down, 0.6f, LayerMask.GetMask("Obstacle")).collider == null)
        {
            directions.Add(Vector3.down);
            //transform.position += Vector3.down * Time.fixedDeltaTime * speed;
            //return;
        }
        if (Physics2D.Raycast(transform.position, Vector2.left, 0.6f, LayerMask.GetMask("Obstacle")).collider == null)
        {
            directions.Add(Vector3.left);
            //transform.GetComponent<SpriteRenderer>().flipX = true;
            //transform.position += Vector3.left * Time.fixedDeltaTime * speed;
            //return;
        }
        if (Physics2D.Raycast(transform.position, /*0.2f,*/ Vector2.right, 0.6f, LayerMask.GetMask("Obstacle")).collider == null)
        {
            directions.Add(Vector3.right);
            //transform.GetComponent<SpriteRenderer>().flipX = false;
            //transform.position += Vector3.right * Time.fixedDeltaTime * speed;
            //return;
        }
        if(directions.Count == 0)
        {
            return Vector3.zero;
        }
        
        int id = Random.Range(0, directions.Count);
        //Debug.LogError(directions.Count + " hihi " + directions[id].ToString());
        return directions[id];
        //throw new System.NotImplementedException();
    }
    public GameObject flame;
    private bool isDie = false;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Explosion")
        {
            if (isDie == true)
                return;
            isDie = true;
            transform.GetComponent<Collider2D>().enabled = false;
            Instantiate(flame, transform.position, Quaternion.Euler(-90f, 0, 0));
            Destroy(gameObject, 1f);
        }
        if(collision.gameObject.tag == "Hero")
        {
            Debug.LogError("kill");
        }
    }
}
