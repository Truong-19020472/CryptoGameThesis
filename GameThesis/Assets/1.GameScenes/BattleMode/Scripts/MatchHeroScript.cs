using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using Photon.Pun;
using Photon.Realtime;

public class MatchHeroScript : MonoBehaviourPunCallbacks, IPunObservable
{
    
    public int powerBomb;

    public int maxPowerBomb;
    public int health;
    public int maxHealth;
    public float speed;
    public float maxSpeed;
    
    
    private Tilemap currentmap;
    [SerializeField] private MatchBomScript prefabBomb;
    private int numberCurrentBomb;
    public PhotonView view;
    Player player;
    private void Awake()
    {
        PhotonNetwork.SendRate = 30; //gui 30 lan tren 1s
        PhotonNetwork.SerializationRate = 20;
    }
    // Start is called before the first frame update
    void Start()
    {
        numberCurrentBomb = 0;
        currentmap = GameObject.FindGameObjectWithTag("Map").GetComponent<Tilemap>();
        if(view.IsMine)
        {
            InventoryItem selectedHero = ScriptableObject.CreateInstance("InventoryItem") as InventoryItem;
            if (PlayerPrefs.HasKey("HeroToBattle"))
            {

                JsonUtility.FromJsonOverwrite(PlayerPrefs.GetString("HeroToBattle"), selectedHero);
            }
            var hash = PhotonNetwork.LocalPlayer.CustomProperties;
            hash["HeroCombat"] = PlayerPrefs.GetString("HeroToBattle");
            PhotonNetwork.LocalPlayer.SetCustomProperties(hash);
            InitHero(selectedHero.iconName, selectedHero.speed, selectedHero.power, selectedHero.health);
        }    
        else
        {
            Invoke("SetUpForOtherView", 0.3f);
        }    
    }
    private void SetUpForOtherView()
    {
        player = view.Owner;
        InventoryItem selectedHero = ScriptableObject.CreateInstance("InventoryItem") as InventoryItem;
        JsonUtility.FromJsonOverwrite((string)player.CustomProperties["HeroCombat"], selectedHero);
        InitHero(selectedHero.iconName, selectedHero.speed, selectedHero.power, selectedHero.health);

    }
    public void InitHero(string nameIcon, string _speed, string power, string _health)
    {

        string[] speedList = _speed.Split('/');
        string[] powerList = power.Split('/');
        string[] healthList = _health.Split('/');

        speed = float.Parse(speedList[0]);
        maxSpeed = float.Parse(speedList[1]);
        powerBomb = int.Parse(powerList[0]);
        maxPowerBomb = int.Parse(powerList[1]);
        health = int.Parse(healthList[0]);
        maxHealth = int.Parse(healthList[1]);
        transform.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>($"HeroImages/{nameIcon}");
    }

    private void Update()
    {
        //if (path == null)
        //{
        //    return;
        //}
        ////if (path.vectorPath.Count <= 0) return;
        //if (currentWayPoint >= path.vectorPath.Count)
        //{
        //    //isReached = true;
        //    //return;
        //    if (targetCanPutBomb == true)
        //    {
        //        Vector3Int cell = currentmap.WorldToCell(transform.position);
        //        Vector3 bombPos = currentmap.GetCellCenterWorld(cell);
        //        BombScript bom = Instantiate(prefabBomb, bombPos, Quaternion.identity);
        //        bom.power = powerBomb;
        //        //Destroy(bom.gameObject, 3f);
        //        //Invoke("UpdateMap", 3f);

        //    }

        //    FindTheCellToMove();
        //    UpdatePath();
        //    return;
        //}
        //else
        //{
        //    isReached = false;
        //}
        //Vector2 direction = ((Vector2)path.vectorPath[currentWayPoint] - (Vector2)transform.position).normalized;
        //transform.GetComponent<Rigidbody2D>().MovePosition((Vector2)transform.position + direction * Time.deltaTime * speed);
        //float distance = Vector2.Distance(transform.position, path.vectorPath[currentWayPoint]);
        //if (distance < 0.2f)
        //{
        //    currentWayPoint++;
        //}




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
        if(view.IsMine)
        {
            if (Input.GetKey(KeyCode.UpArrow))
            {
                if (Physics2D.CircleCast(transform.position, 0.4f, Vector2.up, 0.1f, LayerMask.GetMask("Obstacle")).collider == null)//tránh check vào collider của player
                {
                    //transform.GetComponent<Rigidbody2D>().MovePosition(transform.position + Vector3.up * Time.deltaTime * speed);
                    transform.position += Vector3.up * Time.deltaTime * speed;
                }

            }
            if (Input.GetKey(KeyCode.DownArrow))
            {
                if (Physics2D.CircleCast(transform.position, 0.4f, Vector2.down, 0.1f, LayerMask.GetMask("Obstacle")).collider == null)
                {
                    transform.position += Vector3.down * Time.deltaTime * speed;
                }

            }
            if (Input.GetKey(KeyCode.RightArrow))
            {

                transform.localScale = Vector3.one;
                if (Physics2D.CircleCast(transform.position, 0.4f, Vector2.right, 0.1f, LayerMask.GetMask("Obstacle")).collider == null)
                {
                    transform.position += Vector3.right * Time.deltaTime * speed;
                }

            }
            if (Input.GetKey(KeyCode.LeftArrow))
            {
                transform.localScale = new Vector3(-1f, 1f, 1f);
                if (Physics2D.CircleCast(transform.position, 0.4f, Vector2.left, 0.1f, LayerMask.GetMask("Obstacle")).collider == null)
                {
                    transform.position += Vector3.left * Time.deltaTime * speed;
                }

            }
            if (Input.GetKeyDown(KeyCode.Space) && numberCurrentBomb < 2)
            {

                numberCurrentBomb++;
                Vector3Int cell = currentmap.WorldToCell(transform.position);
                Vector3 bombPos = currentmap.GetCellCenterWorld(cell);
                PhotonNetwork.Instantiate(prefabBomb.name, bombPos, Quaternion.identity);
                Invoke("UpdateStateBomb", 3f);
            }
        }
        else
        {
            double timeToReachGoal = currentPacketTime - lastPacketTime;
            currentTime += Time.deltaTime;

            transform.position = Vector3.Lerp(positionAtLastPacket, latestPos, (float)(currentTime / timeToReachGoal));
            //transform.rotation = Quaternion.Lerp(rotationAtLastPacket, latestRot, (float)(currentTime / timeToReachGoal));

            if (Vector3.Distance(transform.position, latestPos) > teleportIfFarDistance)
            {
                transform.position = latestPos;
            }
        }
        
    }
    private void FixedUpdate()
    {
       if(view.IsMine == false)
        {
            //transform.position = Vector3.MoveTowards(transform.position, networkPos, Time.fixedDeltaTime);
            //transform.rotation = Quaternion.RotateTowards(transform.rotation, networkRot, Time.fixedDeltaTime * 100.0f);'


            //double timeToReachGoal = currentPacketTime - lastPacketTime;
            //currentTime += Time.deltaTime;

            //transform.position = Vector3.Lerp(positionAtLastPacket, latestPos, (float)(currentTime / timeToReachGoal));
            //transform.rotation = Quaternion.Lerp(rotationAtLastPacket, latestRot, (float)(currentTime / timeToReachGoal));

            //if(Vector3.Distance(transform.position, latestPos) > teleportIfFarDistance)
            //{
            //    transform.position = latestPos;
            //}
        }
    }
    private void UpdateStateBomb()
    {
        numberCurrentBomb--;
    }
    public int numberChest = 0;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Chest")
        {
            Destroy(collision.gameObject);
            numberChest++;
        }
    }
    //private Vector3 networkPos;
    //private Quaternion networkRot;
    //private Rigidbody2D rigid;

    Vector3 latestPos;
    Quaternion latestRot;
    //Lag compensation
    float currentTime = 0;
    double currentPacketTime = 0;
    double lastPacketTime = 0;
    Vector3 positionAtLastPacket = Vector3.zero;
    Quaternion rotationAtLastPacket = Quaternion.identity;
    public bool teleportIfFar;
    public float teleportIfFarDistance;
    public float smoothpos = 0.5f;
    public float smoothRot = 0.5f;

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if(stream.IsWriting)
        {
            stream.SendNext(transform.position);
            //stream.SendNext(transform.rotation);
            //stream.SendNext(transform.GetComponent<Rigidbody2D>().velocity);
        }    
        else
        {
            latestPos = (Vector3)stream.ReceiveNext();
            //latestRot = (Quaternion)stream.ReceiveNext();

            //Lag compensation
            currentTime = 0.0f;
            lastPacketTime = currentPacketTime;
            currentPacketTime = info.SentServerTime;
            positionAtLastPacket = transform.position;
            //rotationAtLastPacket = transform.rotation;


            //networkPos = (Vector3)stream.ReceiveNext();
            //networkRot = (Quaternion)stream.ReceiveNext();
            //rigid.velocity = (Vector3)stream.ReceiveNext();
            //float lag = Mathf.Abs((float)(PhotonNetwork.Time - info.SentServerTime));
            //networkPos += (Vector3)(transform.GetComponent<Rigidbody2D>().velocity * lag);
        }    
    }

}
