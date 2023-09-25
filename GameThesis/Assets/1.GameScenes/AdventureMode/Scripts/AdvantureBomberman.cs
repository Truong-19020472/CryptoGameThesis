using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class AdvantureBomberman : MonoBehaviour
{

    public float speed;
    public float maxSpeed;
    public int health;
    public int maxHealth;
    public int power;
    public int maxPower;

    private int numberCurrentBomb = 0;

    public bool isDie = false;
    public GameObject prefabFlame;
    private Tilemap currentmap;
    public AdvantureBomb prefabBomb;
    // Start is called before the first frame update
    void Start()
    {
        maxBomb = 1;
        currentmap = AdvantureManager.instance.tilemapCol;
    }
    public void InitHero(string nameIcon, string _speed, string _power, string _health)
    {

        string[] speedList = _speed.Split('/');
        string[] powerList = _power.Split('/');
        string[] healthList = _health.Split('/');

        speed = float.Parse(speedList[0]);
        maxSpeed = float.Parse(speedList[1]);
        power = int.Parse(powerList[0]);
        maxPower = int.Parse(powerList[1]);
        health = int.Parse(healthList[0]);
        maxHealth = int.Parse(healthList[1]);
        transform.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>($"HeroImages/{nameIcon}");
    }
    // Update is called once per frame
    private int maxBomb;
    void FixedUpdate()
    {
        if (isDie == true || isIced == true)
            return;
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
        
    }
    private void Update()
    {
        if (isDie == true)
            return;
        if (Input.GetKeyDown(KeyCode.Space) && numberCurrentBomb < maxBomb)
        {

            numberCurrentBomb++;
            Vector3Int cell = currentmap.WorldToCell(transform.position);
            Vector3 bombPos = currentmap.GetCellCenterWorld(cell);
            AdvantureBomb bmb = Instantiate(prefabBomb, bombPos, Quaternion.identity);
            bmb.power = power;
        }
        if(Physics2D.OverlapPoint(transform.position, LayerMask.GetMask("Explosion")) != null)
        {
            BombermanIsAttacked();
        }    
    }
    public void BombermanIsAttacked()
    {
        if (isHurt == true)
            return;
        isHurt = true;
        health--;
        //Debug.LogError(health + "life");
        AdvantureManager.instance.TakeAwayALife();
        if(health == 0)
        {
            transform.GetComponent<Collider2D>().enabled = false;
            isDie = true;
            Instantiate(prefabFlame, transform.position, Quaternion.Euler(-90f, 0 , 0));
            Destroy(gameObject, 1f);
        }    
        Invoke("ResetHurt", 3f);
    }
    
    public void UpdateStateBomb()
    {
        numberCurrentBomb--;
    }
    private bool isHurt = false;
    public void ResetHurt()
    {
        isHurt = false;
    }
    public void ReleaseIce()
    {
        isIced = false;
        transform.GetChild(0).gameObject.SetActive(false);
    }
    private bool isIced = false;
    //public int numberChest = 0;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Bat")
        {
            BombermanIsAttacked();
        }
        if (collision.gameObject.tag == "Ghost")
        {
            BombermanIsAttacked();
        }
        if (collision.gameObject.tag == "Ice")
        {
            if (isIced == true)
                return;
            isIced = true;
            transform.GetChild(0).gameObject.SetActive(true);
            Invoke("ReleaseIce", 2f);
        }

        if (collision.gameObject.tag == "Chest")
        {
            float reward = Random.Range(0.001f, 0.1f);
            AdvantureManager.instance.AddReward(reward);
            AdvantureManager.instance.RemoveChest(collision.gameObject.GetComponent<ChestScript>());
            
            Destroy(collision.gameObject);
            //numberChest++;
        }
        if(collision.gameObject.tag == "Boost")
        {
            collision.gameObject.GetComponent<Collider2D>().enabled = false;
            switch (collision.gameObject.GetComponent<AdvantureBoost>().type)
            {
                case TypeBoost.speed:
                    speed = Mathf.Clamp(speed + 0.5f, 1, maxSpeed);
                    break;
                case TypeBoost.power:
                    power = Mathf.Clamp(power + 1, 1, maxPower);
                    break;
                case TypeBoost.bomb:
                    maxBomb = Mathf.Clamp(maxBomb + 1, 0, 5);
                    break;
                default:
                    health = Mathf.Clamp(health + 1, 0, maxHealth);
                    AdvantureManager.instance.GiveAnMoreLife();
                    break;
            }
        }    
    }
}
