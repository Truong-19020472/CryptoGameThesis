using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using UnityEngine.Tilemaps;
public class BombermanScripts : MonoBehaviour
{
    public float speed;
    public float maxSpeed;

    public int powerBomb;
    public int maxPower;
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
        currentmap = BomberMapController.instance.GetCurrentMap();
        currentTarget = Instantiate(prefabTargetPos, transform.position + Vector3.right, Quaternion.identity);
        aiSetter.target = currentTarget;
        InvokeRepeating("UpdatePath", 0, 0.5f);
        //UpdatePath();
        //seeker.StartPath(transform.position, targetPos.position, OnPathComplete);
    }
    public void InitHero(string spPath, float _speed, float maxSpd, int power, int maxPower)
    {
        speed = _speed;
        transform.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>($"HeroImages/{spPath}");
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
    private bool isEndGame = false;
    private void FixedUpdate()
    {
        if(isEndGame == false)
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
                    bom.power = Random.Range(powerBomb, maxPower);
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
        }    
        
    }
    private List<Vector3Int> listReachableCell = new List<Vector3Int>();
    [SerializeField] private Transform prefabTargetPos;
    private Transform currentTarget;
    public bool targetCanPutBomb = false;
    public GameObject particleEnd;
    
    
    private void FindTheCellToMove()
    {
        Debug.LogWarning("hey");
        Vector3Int cellPlayer = currentmap.WorldToCell(transform.position);
        listReachableCell =  BomberMapController.instance.FindPositionToPutBomb(cellPlayer);

        BoundsInt bounds = currentmap.cellBounds;
        if (listReachableCell.Count == 0)
        {
            isEndGame = true;
            return;
            //if(BomberMapController.instance.GetRandomRemainingChest().Count == 0)
            //{
            //    //Instantiate(particleEnd);

            //    isEndGame = true;
            //    return;
            //}    
            //else
            //{
            //    listReachableCell = BomberMapController.instance.GetRandomRemainingChest();
            //    currentTarget.position = currentmap.GetCellCenterWorld(listReachableCell[Random.Range(0, listReachableCell.Count)]);
            //    targetCanPutBomb = false;
            //}    
        }
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
            float reward = Random.Range(0.001f, 0.1f);
            BomberMapController.instance.AddReward(reward);
            BomberMapController.instance.RemoveChest(collision.gameObject.GetComponent<ChestScript>());
            Destroy(collision.gameObject);
            numberChest++;
        }    
    }
    
}
  