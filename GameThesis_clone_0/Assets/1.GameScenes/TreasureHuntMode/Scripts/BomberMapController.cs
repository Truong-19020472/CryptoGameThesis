using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using Pathfinding;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class BomberMapController : MonoBehaviour
{
    public static BomberMapController instance;
    public Tilemap tilemapCol;
    //public Tilemap tilemapFloor;
    public Tile wallTile;
    public AnimatedTile animatedTile;
    public Tile floorTile;
    public Tile destructibleTile;
    public int power;
    public GameObject prefabExplode;
    public AIPath aiPath;
    public AstarPath astarPath;
    public GameObject chest;

    public UnityEngine.Object[] allHeroes;
    private List<InventoryItem> listActiveHero = new List<InventoryItem>();
    public BombermanScripts prefabBomber;
    private List<BombermanScripts> listBomber = new List<BombermanScripts>();

    public Button exit;
    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }
    void Start()
    {

        exit.onClick.AddListener(RebackMainScene);
        astarPath.Scan();
        tilemapCol.CompressBounds();//thu hẹp bounds tránh những ô ko sử dụng
        AutoSpawnChest();
        InitDataForStatePowerMap();
        UpdateStateOfMap();
        //CheckList();
        GetHeroData();
    }
    private void RebackMainScene()
    {
        SceneManager.LoadScene("WorldScene");
    }
    private void GetHeroData()
    {
        allHeroes = Resources.LoadAll("", typeof(InventoryItem));
        for (int i = 0; i < allHeroes.Length; i++)
        {
            InventoryItem item = (InventoryItem)allHeroes[i];
            if(item.isUsed == true)
            {
                listActiveHero.Add(item);
            }    
        }
        foreach(InventoryItem item in listActiveHero)
        {
            BombermanScripts bomber = Instantiate(prefabBomber);
            string[] powerstate = item.power.Split('/');
            string[] speedState = item.speed.Split('/');
            
            bomber.InitHero(item.iconName, float.Parse( speedState[0]), float.Parse(speedState[1]), Int32.Parse(powerstate[0]), Int32.Parse(powerstate[1]));
            bomber.transform.position = new Vector3(UnityEngine.Random.Range(transform.position.x - 1f, transform.position.x + 1f), transform.position.y, transform.position.z);
            listBomber.Add(bomber);
        }    
    }
    //tạo rương 
    private void AutoSpawnChest()
    {
        BoundsInt bounds = tilemapCol.cellBounds;
        TileBase[] allTile = tilemapCol.GetTilesBlock(bounds);
        List<Vector3> tileLocation = new List<Vector3>();
        foreach (var pos in tilemapCol.cellBounds.allPositionsWithin)
        {
            Vector3Int localPlace = new Vector3Int(pos.x, pos.y, pos.z);
            Vector3 tilePlace = tilemapCol.CellToWorld(localPlace); // chuyển từ cell position thành world position
            if(tilemapCol.HasTile(localPlace))
            {
                tileLocation.Add(tilePlace);
                Tile tl = tilemapCol.GetTile<Tile>(localPlace);
                if(tl == destructibleTile )
                {
                    //Debug.LogError(localPlace.x + " " + localPlace.y);
                    if(UnityEngine.Random.Range(0, 3) == 0)
                    {
                        Instantiate(chest, tilePlace + new Vector3(0.5f, 0.5f, 0), Quaternion.identity);
                    }    
                }    
            }
            
        }  
        
    }
    //check xem kiểu 
    public bool CheckTile(Vector3Int cell, int isBlocked)
    {
        
        Tile tl = tilemapCol.GetTile<Tile>(cell);
        if (tl == wallTile || tl == animatedTile || isBlocked == 1)
        {
            return false;
        }    
        if(tl == destructibleTile)
        {
            tilemapCol.SetTile(cell, floorTile);
            //tilemapFloor.SetTile(cell, floorTile);
            Vector3 pos = tilemapCol.GetCellCenterWorld(cell);
            Destroy(Instantiate(prefabExplode, pos, Quaternion.identity), 1f);
            return false;
        }
        else
        {
            //tilemapCol.SetTile(cell, null);
            //tilemapFloor.SetTile(cell, floorTile);
            
            Vector3 pos = tilemapCol.GetCellCenterWorld(cell);
            Destroy(Instantiate(prefabExplode, pos, Quaternion.identity), 1f);
            return true;
        }    
        
    }
   
    //private void OnLevelWasLoaded(int level)
    //{
    //    CancelInvoke("ScanMap");
    //}
    //Tạo bom nổ
    public void ExplodeBomb(BombScript bom)
    {
        if (tilemapCol == null) return;
        Vector3Int bomCell = tilemapCol.WorldToCell(bom.transform.position);

        CheckTile(bomCell, 0);
        List<int> cellLimitation = new List<int>() { 0, 0, 0, 0 };
        for (int i = 0; i < power; i++)
        {
            if (CheckTile(new Vector3Int(bomCell.x + i, bomCell.y, bomCell.z), cellLimitation[0]) == false)
            {
                cellLimitation[0] = 1;
            }
            if (CheckTile(new Vector3Int(bomCell.x - i, bomCell.y, bomCell.z), cellLimitation[1]) == false)
            {
                cellLimitation[1] = 1;
            }
            if (CheckTile(new Vector3Int(bomCell.x, bomCell.y + i, bomCell.z), cellLimitation[2]) == false)
            {
                cellLimitation[2] = 1;

            }
            if (CheckTile(new Vector3Int(bomCell.x, bomCell.y - i, bomCell.z), cellLimitation[3]) == false)
            {
                cellLimitation[3] = 1;
            }
        }
        //astarPath.Scan();
        Invoke("ScanMap", 0.5f);
    }
    private void ScanMap()
    {
        astarPath.Scan();
        UpdateStateOfMap();
    }

    public List<List<int>> indexPowerMap = new List<List<int>>();
    public List<Vector3Int> listPos;

    public void InitDataForStatePowerMap()
    {
        //NavGraph[] gph = astarPath.graphs;//các ai map đã scan trong game
        //int l = gph.Length;
        //var dataGraph = AstarPath.active.data.gridGraph;
        
        //Debug.LogError(gph[0].name + "----" + gph[0].CountNodes()+ " "+ dataGraph.center.ToString());
        //GridNode[] gridNodes = dataGraph.nodes;
       
        //for(int i = 0; i < dataGraph.width; i ++)
        //{
        //    List<int> powerRow = new List<int>();
        //    for(int j =0; j < dataGraph.depth; j ++)
        //    {
        //        GridNodeBase currentNode = dataGraph.GetNode(i, j);
        //        GridNode gridNode = (GridNode) currentNode;
        //        //Debug.LogError(Camera.main.ScreenToWorldPoint((Vector3)gridNode.position));
                
        //    }    
        //}
        //var pointGrp = AstarPath.active.data.pointGraph;
        //Debug.LogError(dataGraph.width + "loala" + dataGraph.depth);  
        //foreach (var pos in tilemapCol.cellBounds.allPositionsWithin)
        //{
        //    Vector3Int localPlace = new Vector3Int(pos.x, pos.y, pos.z);
        //    //Vector3 tilePlace = tilemapCol.CellToWorld(localPlace);
        //    listPos.Add(localPlace);
        //}
        BoundsInt bounds = tilemapCol.cellBounds;//trả về ranh giới tile map tính theo tile
        TileBase[] allTiles = tilemapCol.GetTilesBlock(bounds);

        //bounds.xMin là chỉ số x của cell đầu tiên - ví dụ: -13
        //Debug.LogError(bounds.xMin + " " + bounds.xMax + "hhh"+ bounds.yMax + ";" + bounds.yMin);
        //Debug.LogError(bounds.size.x + "----" + bounds.size.y);
        for (int i = 0; i < bounds.size.x; i ++)
        {
            List<int> powerRow = new List<int>();
            for(int j = 0; j < bounds.size.y; j++)
            {
                TileBase tile = allTiles[i + j * bounds.size.x];
                
                //tạo mảng int trong đó ô có bom = 3, ô thùng = 2, ô cạnh thùng = 1, ô không có = 0, ô có thể dính bom = -1;
                if (tile != null)
                {
                    //tile.name = $"{i + j * bounds.size.x}";
                    
                    
                    Vector3Int gridPlace = new Vector3Int(i + bounds.xMin, j + bounds.yMin, bounds.z);
                    Tile tl = tilemapCol.GetTile<Tile>(gridPlace);
                    
                    if (tl == floorTile)
                    {
                        
                        //tile.name = $"{0}";
                        powerRow.Add(0);
                    }
                    else
                    {
                        //if(tl == destructibleTile)
                        //{
                        //    //tile.name = $"{3}";
                        //}    
                        //else
                        //{
                        //    //tile.name = "4";
                        //}    
                        
                        powerRow.Add(3);
                    }
                    
                }   
            }
            indexPowerMap.Add(powerRow);
        }
    }
    
    public void UpdateStateOfMap()
    {
        
        BoundsInt bounds = tilemapCol.cellBounds;//trả về ranh giới tile map tính theo tile
        TileBase[] allTiles = tilemapCol.GetTilesBlock(bounds);
        for (int i = 0; i < bounds.size.x; i++)
        {
            //List<int> powerRow = new List<int>();
            for (int j = 0; j < bounds.size.y; j++)
            {
                TileBase tile = allTiles[i + j * bounds.size.x];
                //tạo mảng int trong đó ô có bom = 3, ô thùng = 2, ô cạnh thùng = 1, ô không có = 0, ô có thể dính bom = -1;
                if (tile != null)
                {
                    Vector3Int gridPlace = new Vector3Int(i + bounds.xMin, j + bounds.yMin, bounds.z);
                    Tile tl = tilemapCol.GetTile<Tile>(gridPlace);
                    
                    if (tl == floorTile)
                    {
                        //tile.name = $"{0}";
                        indexPowerMap[i][j] = 0;
                        //tl.color = Color.white;
                        if (i - 1 >= 0)
                        {
                            Vector3Int pl = new Vector3Int(i - 1 + bounds.xMin, j + bounds.yMin, bounds.z);
                            Tile adjacentTile = tilemapCol.GetTile<Tile>(pl);
                            if(adjacentTile == destructibleTile)
                            {
                                //tile.name = "1";
                                indexPowerMap[i][j] = 1;
                                //tl.color = Color.black;
                                continue;
                                //return;
                            }    
                            //TileBase tlbs = allTiles[i - 1 + j * bounds.size.x];
                            //int nameTile = Int32.Parse(tlbs.name);
                            //tlbs.name = $"{nameTile + 1}";

                            //ChangeStateTile(new Vector3Int(i - 1 + bounds.xMin, j + bounds.yMin, bounds.z));
                            //indexPowerMap[i - 1][j] ++;
                        }   
                        if(i + 1 < bounds.size.x)
                        {
                            Vector3Int pl = new Vector3Int(i + 1 + bounds.xMin, j + bounds.yMin, bounds.z);
                            Tile adjacentTile = tilemapCol.GetTile<Tile>(pl);
                            if (adjacentTile == destructibleTile)
                            {
                                //tile.name = "1";
                                indexPowerMap[i][j] = 1;
                                //tl.color = Color.black;
                                continue;
                                //return;
                            }
                            //TileBase tlbs = allTiles[i + 1 + j * bounds.size.x];
                            //int nameTile = Int32.Parse(tlbs.name);
                            //tlbs.name = $"{nameTile + 1}";
                            ////ChangeStateTile(new Vector3Int(i + 1 + bounds.xMin, j + bounds.yMin, bounds.z));
                            //indexPowerMap[i + 1][j]++;
                        } 
                        if(j - 1 >= 0)
                        {
                            Vector3Int pl = new Vector3Int(i + bounds.xMin, j - 1 + bounds.yMin, bounds.z);
                            Tile adjacentTile = tilemapCol.GetTile<Tile>(pl);
                            if (adjacentTile == destructibleTile)
                            {
                                //tile.name = "1";
                                indexPowerMap[i][j] = 1;
                                //tl.color = Color.black;
                                continue;
                                //return;
                            }
                            //TileBase tlbs = allTiles[i + (j - 1)* bounds.size.x];
                            //int nameTile = Int32.Parse(tlbs.name);
                            //tlbs.name = $"{nameTile + 1}";
                            ////ChangeStateTile(new Vector3Int(i + bounds.xMin, j - 1 + bounds.yMin, bounds.z));
                            //indexPowerMap[i][j + 1]++;
                        }
                        if (j + 1 < bounds.size.y)
                        {
                            Vector3Int pl = new Vector3Int(i + bounds.xMin, j + 1 + bounds.yMin, bounds.z);
                            Tile adjacentTile = tilemapCol.GetTile<Tile>(pl);
                            if (adjacentTile == destructibleTile)
                            {
                                //tile.name = "1";
                                indexPowerMap[i][j] = 1;
                                //tl.color = Color.black;
                                continue;
                                //return;
                            }
                        }    
                    } 
                }

            }
        }
    }
    public void CheckList()
    {
        //tilemapCol.CompressBounds();
        BoundsInt bd = tilemapCol.cellBounds;
        
        Debug.LogError(indexPowerMap.Count + " " + bd.size.x + "[[[" + indexPowerMap[0].Count);
        for(int i = 0; i < indexPowerMap.Count; i++)
        {
            for(int j = 0; j < indexPowerMap[0].Count; j++)
            {
                Vector3Int cell = new Vector3Int(i + bd.xMin, j + bd.yMin, 0);
                Tile tl = tilemapCol.GetTile<Tile>(cell);
                if(tl == null)
                {
                    Debug.LogError("huhu" + $"{i + bd.xMin}" + "---" + $"{j + bd.yMin}");
                }    
                if(indexPowerMap[i][j] == 0)
                {
                    Instantiate(prefabIcon, tilemapCol.CellToWorld(cell) + Vector3.one * 0.5f, Quaternion.identity);
                }    
            }    
        }    
    }
    //BFS
    public List<GameObject> listIconDebug;
    public GameObject prefabIcon;
    public List<Vector3Int> FindPositionToPutBomb(Vector3Int cell)
    {
        UpdateStateOfMap();
        //if (listIconDebug.Count > 0)
        //{
        //    for(int i = 0; i < listIconDebug.Count; i++)
        //    {
        //        Destroy(listIconDebug[i]);
        //    }    
        //}
        //listIconDebug.Clear();
        BoundsInt bounds = tilemapCol.cellBounds;
        //TileBase[] allCell = tilemapCol.GetTilesBlock(bounds);
        List<Vector3Int> listCellCanAttach = new List<Vector3Int>();//nhận biết nearbox bằng tên của tile
        try
        {
            //List<Vector3Int> listCellNearBox = new List<Vector3Int>();
            listCellCanAttach.Add(cell);

            Queue<Vector3Int> queueCheck = new Queue<Vector3Int>();
            List<Vector3Int> checkedTile = new List<Vector3Int>();
            queueCheck.Enqueue(cell);
            checkedTile.Add(cell);

            while (queueCheck.Count > 0)
            {
                Vector3Int checkedCell = queueCheck.Dequeue();//remove and return

                //Gizmos.DrawCube(tilemapCol.CellToWorld(checkedCell), new Vector3(0.5f, 0.5f, 0.5f));
                //Debug.LogError(queueCheck.Count + " --- ");
                //if (checkedTile.Contains(checkedCell))
                //{
                //    continue;
                //}    
                //else
                //{
                //    checkedTile.Add(checkedCell);
                //}
                //listIconDebug.Add(Instantiate(prefabIcon, tilemapCol.CellToWorld(checkedCell) + Vector3.one * 0.5f, Quaternion.identity));
                if (checkedCell.x + 1 <= bounds.xMax)
                {

                    //TileBase tl = tilemapCol.GetTile(new Vector3Int(checkedCell.x + 1, checkedCell.y, checkedCell.z));
                    //TileBase tlbs = (TileBase)tl;
                    //Debug.LogError(tl.ToString() + "front");
                    if (indexPowerMap[checkedCell.x + 1 - bounds.xMin][checkedCell.y - bounds.yMin] == 1 || indexPowerMap[checkedCell.x + 1 - bounds.xMin][checkedCell.y - bounds.yMin] == 0)
                    {
                        if (checkedTile.Contains(new Vector3Int(checkedCell.x + 1, checkedCell.y, checkedCell.z)) == false)
                        {
                            checkedTile.Add(new Vector3Int(checkedCell.x + 1, checkedCell.y, checkedCell.z));
                            queueCheck.Enqueue(new Vector3Int(checkedCell.x + 1, checkedCell.y, checkedCell.z));
                            listCellCanAttach.Add(new Vector3Int(checkedCell.x + 1, checkedCell.y, checkedCell.z));
                            Debug.LogError("+1");
                        }

                    }

                }
                if (checkedCell.x - 1 >= bounds.xMin)
                {

                    //TileBase tl = tilemapCol.GetTile(new Vector3Int(checkedCell.x - 1, checkedCell.y, checkedCell.z));

                    if (indexPowerMap[checkedCell.x - 1 - bounds.xMin][checkedCell.y - bounds.yMin] == 1 || indexPowerMap[checkedCell.x - 1 - bounds.xMin][checkedCell.y - bounds.yMin] == 0)
                    {
                        if (checkedTile.Contains(new Vector3Int(checkedCell.x - 1, checkedCell.y, checkedCell.z)) == false)
                        {
                            checkedTile.Add(new Vector3Int(checkedCell.x - 1, checkedCell.y, checkedCell.z));
                            queueCheck.Enqueue(new Vector3Int(checkedCell.x - 1, checkedCell.y, checkedCell.z));
                            listCellCanAttach.Add(new Vector3Int(checkedCell.x - 1, checkedCell.y, checkedCell.z));
                            Debug.LogError("-1");
                        }

                    }

                }
                if (checkedCell.y + 1 <= bounds.yMax)
                {

                    //TileBase tl = tilemapCol.GetTile(new Vector3Int(checkedCell.x, checkedCell.y + 1, checkedCell.z));

                    if (indexPowerMap[checkedCell.x - bounds.xMin][checkedCell.y + 1 - bounds.yMin] == 1 || indexPowerMap[checkedCell.x - bounds.xMin][checkedCell.y + 1 - bounds.yMin] == 0)
                    {
                        if (checkedTile.Contains(new Vector3Int(checkedCell.x, checkedCell.y + 1, checkedCell.z)) == false)
                        {
                            checkedTile.Add(new Vector3Int(checkedCell.x, checkedCell.y + 1, checkedCell.z));
                            queueCheck.Enqueue(new Vector3Int(checkedCell.x, checkedCell.y + 1, checkedCell.z));
                            listCellCanAttach.Add(new Vector3Int(checkedCell.x, checkedCell.y + 1, checkedCell.z));
                            Debug.LogError("+y1");
                        }

                    }

                }
                if (checkedCell.y - 1 >= bounds.yMin)
                {
                    if (indexPowerMap[checkedCell.x - bounds.xMin][checkedCell.y - 1 - bounds.yMin] == 1 || indexPowerMap[checkedCell.x - bounds.xMin][checkedCell.y - 1 - bounds.yMin] == 0)
                    {
                        if (checkedTile.Contains(new Vector3Int(checkedCell.x, checkedCell.y - 1, checkedCell.z)) == false)
                        {
                            checkedTile.Add(new Vector3Int(checkedCell.x, checkedCell.y - 1, checkedCell.z));
                            queueCheck.Enqueue(new Vector3Int(checkedCell.x, checkedCell.y - 1, checkedCell.z));
                            listCellCanAttach.Add(new Vector3Int(checkedCell.x, checkedCell.y - 1, checkedCell.z));
                            Debug.LogError("-y1");
                        }

                    }

                }

            }
            if (listCellCanAttach.Count == 0)
            {
                Time.timeScale = 0;
            }
        }
        catch(Exception e)
        {
            Debug.LogError(e);
        }
       
        return listCellCanAttach;
    }    
}
