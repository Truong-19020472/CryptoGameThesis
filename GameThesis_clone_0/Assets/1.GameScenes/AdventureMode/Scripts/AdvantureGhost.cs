using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Tilemaps;
using Pathfinding;

public class AdvantureGhost : MonoBehaviour, IMonster
{
    public bool catchHero = false;
    [SerializeField] private Seeker seeker;
    [SerializeField] private AIDestinationSetter aiSetter;
    public Tilemap map;
    public float speed;
    Vector3 dir;
    private SpriteRenderer sp;
    private Collider2D col;
    private Rigidbody2D rid;
    public GameObject prefabFlame;

    //path

    public bool isReached = false;
    public Path path;
    private int currentWayPoint;
    private Transform currentTarget;
    // Start is called before the first frame update
    void Start()
    {
        currentTarget = GameObject.FindGameObjectWithTag("Hero").transform;
        sp = GetComponent<SpriteRenderer>();
        col = GetComponent<Collider2D>();
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
    public void OnPathComplete(Path p)
    {
        if (!p.error)
        {
            path = p;
            currentWayPoint = 0;
        }

    }

    public void UpdatePath()
    {
        if (seeker.IsDone())
            seeker.StartPath(transform.position, currentTarget.position, OnPathComplete);
    }
    private void FixedUpdate()
    {
        if (isDie == true)
            return;
        
        if(catchHero == false)
        {
            
            if (Physics2D.Raycast(transform.position, dir, 0.6f, LayerMask.GetMask("Obstacle")).collider != null)
            {
                //Debug.LogError("huhu");
                dir = DirectionMove();
                rid.velocity = dir * speed;
            }
            if (dir == Vector3.right)
            {
                transform.GetComponent<SpriteRenderer>().flipX = true;
            }
            else
            {
                if (dir == Vector3.left)
                    transform.GetComponent<SpriteRenderer>().flipX = false;
            }
            CheckHeroAhead();
        } 
        else
        {
            if (currentTarget.gameObject == null)
                return;
            if (path == null)
            {
                ReleaseCatchingTime();
                Debug.LogError("catching");
                return;
            }
            //if (path.vectorPath.Count <= 0) return;
            if (currentWayPoint >= path.vectorPath.Count)
            {
                UpdatePath();
                return;
            }
            //else
            //{
            //    isReached = false;
            //}
            Vector2 direction = ((Vector2)path.vectorPath[currentWayPoint] - (Vector2)transform.position).normalized;
            transform.GetComponent<Rigidbody2D>().MovePosition((Vector2)transform.position + direction * Time.deltaTime * speed);
            float distance = Vector2.Distance(transform.position, path.vectorPath[currentWayPoint]);
            if (distance < 0.2f)
            {
                currentWayPoint++;
            }
        }    
        
      

    }

    //kiểm tra xem nếu trên đường đi có hero sẽ đuổi theo
    public void CheckHeroAhead()
    {

        if(Physics2D.Raycast(transform.position, Vector2.right, 2f, LayerMask.GetMask("Player")))
        {
            if (catchHero == true)
                return;
            catchHero = true;
            UpdatePath();
            Invoke("ReleaseCatchingTime", 8f);
            return;
        }

        if (Physics2D.Raycast(transform.position, Vector2.left, 2f, LayerMask.GetMask("Player")))
        {
            if (catchHero == true)
                return;
            catchHero = true;
            UpdatePath();
            Invoke("ReleaseCatchingTime", 8f);
            return;
        }

        if (Physics2D.Raycast(transform.position, Vector2.up, 2f, LayerMask.GetMask("Player")))
        {
            if (catchHero == true)
                return;
            catchHero = true;
            UpdatePath();
            Invoke("ReleaseCatchingTime", 8f);
            return;
        }

        if (Physics2D.Raycast(transform.position, Vector2.down, 2f, LayerMask.GetMask("Player")))
        {
            if (catchHero == true)
                return;
            //currentTarget.position = Physics2D.Raycast(transform.position, Vector2.down, 2f, LayerMask.GetMask("Player")).collider.transform.position;
            catchHero = true;
            UpdatePath();
            Invoke("ReleaseCatchingTime", 8f);
            return;
        }
    }    
    private void ReleaseCatchingTime()
    {
        Debug.LogError("noncatch");
        catchHero = false;
    }
    public Vector3 DirectionMove()
    {
        List<Vector3> directions = new List<Vector3>();
        if (Physics2D.Raycast(transform.position, Vector2.up, 0.6f, LayerMask.GetMask("Obstacle")).collider == null)
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
        if (directions.Count == 0)
        {
            return Vector3.zero;
        }
        int id = Random.Range(0, directions.Count);
        //Debug.LogError(directions.Count + " hihi " + directions[id].ToString());
        return directions[id];
    }
   
    private bool isDie = false;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Explosion")
        {
            if (isDie == true)
                return;
            isDie = true;
            transform.GetComponent<Collider2D>().enabled = false;
            Instantiate(prefabFlame, transform.position, Quaternion.Euler(-90f, 0, 0));
            Destroy(gameObject, 1f);
        }
        if(collision.gameObject.tag == "Hero")
        {
            catchHero = false;
        }    
        
    }
}
