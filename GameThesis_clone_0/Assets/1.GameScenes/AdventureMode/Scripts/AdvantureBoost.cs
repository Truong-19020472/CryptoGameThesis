using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdvantureBoost : MonoBehaviour
{
    private Collider2D col;
    public List<Sprite> spritesBoost;
    private SpriteRenderer sp;
    public TypeBoost type { get; private set; }
    private void Awake()
    {
        col = GetComponent<Collider2D>();
        sp = GetComponent<SpriteRenderer>();
    }
    void Start()
    {
        
    }
    public void InitSpriteRenderer(TypeBoost _type)
    {
        sp.sprite = spritesBoost[(int)_type];
        type = _type;
    }
    void Update()
    {
        if (Physics2D.OverlapPoint(transform.position, LayerMask.GetMask("Obstacle")))
        {
            col.enabled = false;
            sp.enabled = false;
        }
        else
        {
            col.enabled = true;
            sp.enabled = true;
        }
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        col.enabled = false;
        Destroy(gameObject);
    }
}
public enum TypeBoost
{
    speed,
    power,
    health,
    bomb
}
