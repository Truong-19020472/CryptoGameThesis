using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using UnityEngine.Tilemaps;
public class BombermanScripts : MonoBehaviour
{
    public float speed;
    public int powerBomb;
    

    private Tilemap currentmap;
    [SerializeField] private BombScript prefabBomb;
    [SerializeField] private AIPath aIPath;
    [SerializeField] private Seeker seeker;
    [SerializeField] private AIDestinationSetter aiSetter;//điểu chỉnh target
    
    public bool isReached = false;
    public Path path;
    private int currentWayPoint;
    // Start is called before the first frame update
    void Start()
    {
        currentmap = GameObject.Find("Wall").GetComponent<Tilemap>();
        currentTarget = Instantiate(prefabTargetPos, transform.position + Vector3.right, Quaternion.identity);
        aiSetter.target = currentTarget;
        InvokeRepeating("UpdatePath", 0, 0.5f);
        //UpdatePath();
        //seeker.StartPath(transform.position, targetPos.position, OnPathComplete);
    }
    //private void OnLevelWasLoaded(int level)
    //{
    //    CancelInvoke("UpdatePath");
        
    //}
    public void InitHero(Sprite sp, float _speed, int power )
    {
        speed = _speed;
        transform.GetComponent<SpriteRenderer>().sprite = sp;
        powerBomb = power;
    }
    public void OnPathComplete(Path p)
    {
        if(!p.error)
        {
            path = p;
            currentWayPoint = 0;
        }    

    }    
    
    public void UpdatePath()
    {
        if(seeker.IsDone())
            seeker.StartPath(transform.position, currentTarget.position, OnPathComplete);
    }
    //public void UpdateMap()
    //{
    //    BomberMapController.instance.UpdateStateOfMap();
    //}

    private void FixedUpdate()
    {
        if (path == null)
        {
            return;
        }
        //if (path.vectorPath.Count <= 0) return;
        if (currentWayPoint >= path.vectorPath.Count)
        {
            //isReached = true;
            //return;
            if (targetCanPutBomb == true)
            {
                Vector3Int cell = currentmap.WorldToCell(transform.position);
                Vector3 bombPos = currentmap.GetCellCenterWorld(cell);
                BombScript bom = Instantiate(prefabBomb, bombPos, Quaternion.identity);
                bom.power = powerBomb;
                //Destroy(bom.gameObject, 3f);
                //Invoke("UpdateMap", 3f);

            }

            FindTheCellToMove();
            UpdatePath();
            return;
        }
        else
        {
            isReached = false;
        }
        Vector2 direction = ((Vector2)path.vectorPath[currentWayPoint] - (Vector2)transform.position).normalized;
        transform.GetComponent<Rigidbody2D>().MovePosition((Vector2)transform.position + direction * Time.deltaTime * speed);
        float distance = Vector2.Distance(transform.position, path.vectorPath[currentWayPoint]);
        if (distance < 0.2f)
        {
            currentWayPoint++;
        }




        //if (aIPath.reachedDestination)
        //{
        //    FindTheCellToMove();
        //}
        //else
        //{

        //}
        //if(seeker.GetCurrentPath().path.Count > 0)
        //{

        //}    
        //if (Input.GetKey(KeyCode.UpArrow))
        //{
        //    if (Physics2D.BoxCast(transform.position, new Vector2(0.7f, 0.7f), 0f, Vector2.up, 0.1f, LayerMask.GetMask("Obstacle")).collider == null)//tránh check vào collider của player
        //    {
        //        //transform.GetComponent<Rigidbody2D>().MovePosition(transform.position + Vector3.up * Time.deltaTime * speed);
        //        transform.position += Vector3.up * Time.deltaTime * 5;
        //    }
        //    else
        //    {

        //        Debug.LogError("hit");
        //    }

        //}
        //if (Input.GetKey(KeyCode.DownArrow))
        //{
        //    if (Physics2D.BoxCast(transform.position, new Vector2(0.7f, 0.7f), 0f, Vector2.down, 0.1f, LayerMask.GetMask("Obstacle")).collider == null)
        //    {
        //        transform.position += Vector3.down * Time.deltaTime * 5;
        //    }

        //}
        //if (Input.GetKey(KeyCode.RightArrow))
        //{

        //    transform.GetComponent<SpriteRenderer>().flipX = false;
        //    if (Physics2D.BoxCast(transform.position, new Vector2(0.7f, 0.7f), 0f, Vector2.right, 0.1f, LayerMask.GetMask("Obstacle")).collider == null)
        //    {
        //        transform.position += Vector3.right * Time.deltaTime * 5;
        //    }

        //}
        //if (Input.GetKey(KeyCode.LeftArrow))
        //{
        //    transform.GetComponent<SpriteRenderer>().flipX = true;
        //    if (Physics2D.BoxCast(transform.position, new Vector2(0.7f, 0.7f), 0f, Vector2.left, 0.1f, LayerMask.GetMask("Obstacle")).collider == null)
        //    {
        //        transform.position += Vector3.left * Time.deltaTime * 5;
        //    }

        //}
        //if (Input.GetKeyDown(KeyCode.Space))
        //{
        //    Vector3Int cell = currentmap.WorldToCell(transform.position);
        //    Vector3 bombPos = currentmap.GetCellCenterWorld(cell);
        //    BombScript bom = Instantiate(prefabBomb, bombPos, Quaternion.identity);
        //    Destroy(bom.gameObject, 3f);
        //}
    }
    private List<Vector3Int> listReachableCell = new List<Vector3Int>();
    [SerializeField] private Transform prefabTargetPos;
    private Transform currentTarget;
    public bool targetCanPutBomb = false;
    private void FindTheCellToMove()
    {
        Debug.LogWarning("hey");
        Vector3Int cellPlayer = currentmap.WorldToCell(transform.position);
        listReachableCell =  BomberMapController.instance.FindPositionToPutBomb(cellPlayer);
        BoundsInt bounds = currentmap.cellBounds;
        if (listReachableCell.Count == 0)
            return;
        List<int> indexPlace = new List<int>();
        for(int i = 0; i < listReachableCell.Count; i ++)
        {
            if(BomberMapController.instance.indexPowerMap[listReachableCell[i].x - bounds.xMin][listReachableCell[i].y - bounds.yMin] == 1)
            {
                //targetPos.position = currentmap.GetCellCenterWorld(listReachableCell[i]);
                //targetCanPutBomb = true;
                //listReachableCell.Clear();
                indexPlace.Add(i);
            }
        }
        if(indexPlace.Count > 0)
        {
            int indx = indexPlace[Random.Range(0, indexPlace.Count)];
            //if (targetPos.position == currentmap.GetCellCenterWorld(listReachableCell[indx]))
            //{
            //    Time.timeScale = 0;
            //}

            //Transform target = Instantiate(targetPos);
            currentTarget.position = currentmap.GetCellCenterWorld(listReachableCell[indx]);
            targetCanPutBomb = true;
            //aiSetter.target = target;
        }
        else
        {
            //Transform target = Instantiate(targetPos);
            currentTarget.position = currentmap.GetCellCenterWorld(listReachableCell[Random.Range(0, listReachableCell.Count)]);
            targetCanPutBomb = false;
            //aiSetter.target = target;
        }
        
        //Vector3Int cellTarget = currentmap.WorldToCell(targetPos.position);
        //if(BomberMapController.instance.indexPowerMap[cellTarget.x - bounds.xMin][cellTarget.y - bounds.yMin] == 1)
        //{
        //    targetCanPutBomb = true;
        //}
        //else
        //{
        //    targetCanPutBomb = false;
        //}    
        listReachableCell.Clear();
    }
    public int numberChest = 0;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Chest")
        {
            Destroy(collision.gameObject);
            numberChest++;
        }    
    }
}
  