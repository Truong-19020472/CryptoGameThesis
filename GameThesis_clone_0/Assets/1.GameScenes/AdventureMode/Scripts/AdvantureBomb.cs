using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdvantureBomb : MonoBehaviour
{
    [SerializeField] private GameObject prefabExplosion;
    public int power;
    public bool isBoom = false;
    //private List<Vector3> listPositionBomb;
    // Start is called before the first frame update
    void Start()
    {
        Invoke("ExplodeBomb", 3f);

    }
    private void Update()
    {
        if(isBoom == false)
        {
            if(Physics2D.OverlapPoint(transform.position, LayerMask.GetMask("Explosion")))
            {
                ExplodeBomb();
            }    
        }    
        
    }
    private void ExplodeBomb()
    {
        if (isBoom == true)
            return;
        AdvantureManager.instance.ExplodeBomb(this);
        isBoom = true;
        Destroy(gameObject);
    }

    //public void CreateExplosion(List<Vector3> listBombPos)
    //{
    //    //listPositionBomb = listBombPos;
    //}
}
