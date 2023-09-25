//using System.Collections.Generic;
//using UnityEngine;
//using Mono.Data.Sqlite;
//using System.Data;
//using System;
//using UnityEngine.Networking;
//using System.Collections;
//public static class DataBaseManager 
//{
//    [Serializable]
//    public class SQLiteDataHero
//    {
//        public int id;
//        public int id_account;
//        public string properties;
//        public int state;

//        public SQLiteDataHero(int _id, int _acc, string pro, int st)
//        {
//            id = _id;
//            id_account = _acc;
//            properties = pro;
//            state = st;
//        }
//    }    
//    [Serializable]
//    public class ListHeroDatabase
//    {
//        public List<SQLiteDataHero> listHero = new List<SQLiteDataHero>();
//        public void AddHero(SQLiteDataHero hero)
//        {
//            listHero.Add(hero);
//        }
//        public void ReplaceList(List<SQLiteDataHero> heroes)
//        {
//            listHero = heroes;
//        }
//    }
//    //public static DataBaseManager instanceDatabase;
//    private static string connectionString = "URI=file:" + Application.dataPath + "/MyDatabase.db" ;

//    //void Awake()
//    //{
//    //    connectionString = "URI=file:" + Application.dataPath + "/MyDatabase.db";
//    //    //Debug.LogError(connectionString);
//    //    if(instanceDatabase == null)
//    //    {
//    //        instanceDatabase = this;
//    //    }
//    //    //Debug.LogError(PlayerPrefs.GetString("Account"));
//    //    //DeleteTable("players");
//    //    //DeleteTable("token");
//    //    //DeleteTable("hero");
//    //    CreatePlayerTable();
//    //    CreateHeroTable();
//    //    CreateTokenTable();
//    //    //DeleteDataToken();
//    //    //Debug.LogError(PlayerPrefs.GetString())
//    //    //AddAccount("0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e");
//    //    //AddToken(1, 1, "0.99");
//    //    //Debug.Log(GetIDAccount("0xfe28FF7A8960732DF68Efea7f0E12aDb8153556e"));
//    //    //AddHero(1, PlayerPrefs.GetString("PurchasedHero"), 0);
//    //    //UpdateHero(1, 1);
//    //    //UpdateCoin(1, "0.3");
//    //    //DisplayCoin(1);
//    //    //DisplayAccount();
//    //    //DisplayHeroes(1);
//    //}
    
//    //public static IEnumerator LoadSQLite()
//    //{
//    //    UnityWebRequest request = UnityWebRequest.Get("SQLiteLoader.js");
//    //    yield return request.SendWebRequest();
//    //    if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
//    //    {
//    //        Debug.LogError(request.error);
//    //        yield break;
//    //    }

//    //    // Evaluate the loaded JavaScript code
//    //    var engine = gameObject.AddComponent<Jint.Engine>();
//    //    engine.Execute(request.downloadHandler.text);
//    //}
//    public static void CreatePlayerTable()
//    {
        
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "CREATE TABLE IF NOT EXISTS players (id INTEGER PRIMARY KEY AUTOINCREMENT , account TEXT)";
//                dbCommand.ExecuteNonQuery();

//            }
//            dbConnection.Close();
//        }
//    }
//    public static void CreateTokenTable()
//    {
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "CREATE TABLE IF NOT EXISTS token (id INTEGER PRIMARY KEY AUTOINCREMENT, id_account INT, token TEXT, FOREIGN KEY (id_account) REFERENCES players(id))";
//                dbCommand.ExecuteNonQuery();
//                Debug.LogError("Success");
//            }
//            dbConnection.Close();
//        }
//    }
//    public static void CreateHeroTable()
//    {
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "CREATE TABLE IF NOT EXISTS hero (id INTEGER PRIMARY KEY AUTOINCREMENT, id_account INT, bomber TEXT, state INT, FOREIGN KEY (id_account) REFERENCES players(id))";
//                dbCommand.ExecuteNonQuery();
//                Debug.LogError("Success");
//            }
//            dbConnection.Close();
//        }
//    }
//    public static void AddToken(int id, int idAcc, string tk)
//    {
//        SqliteParameter parameterID = new SqliteParameter("@id", id);
//        SqliteParameter parameterAcc = new SqliteParameter("@idAcc", idAcc);
//        SqliteParameter parameter1 = new SqliteParameter("@token", tk);
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "INSERT OR REPLACE INTO token (id, id_account, token) VALUES (@id, @idAcc, @token)";
//                dbCommand.Parameters.Add(parameterID);
//                dbCommand.Parameters.Add(parameterAcc);
//                dbCommand.Parameters.Add(parameter1);
//                dbCommand.ExecuteNonQuery();

//            }
//            dbConnection.Close();
//        }
//    }
//    public static void DeleteTable(string table)
//    {
//        //SqliteParameter tb = new SqliteParameter("@table", table);
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
            
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "DROP TABLE '"+ table + "'";
//                dbCommand.ExecuteNonQuery();

//            }
//            dbConnection.Close();
//        }
//    }

//    public static void DeleteDataToken()
//    {
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "DELETE FROM hero";
//                dbCommand.ExecuteNonQuery();

//            }
//            dbConnection.Close();
//        }
//    }
//    public static void AddHero(int id_acc, string heroJson, int activeInd)
//    {
//        SqliteParameter parameter = new SqliteParameter("@idAcc", id_acc);
//        SqliteParameter parameter1 = new SqliteParameter("@heroJs", heroJson);
//        SqliteParameter parameter2 = new SqliteParameter("@state", activeInd);
      
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "INSERT INTO hero (id_account, bomber, state) VALUES (@idAcc, @heroJs, @state)";
//                dbCommand.Parameters.Add(parameter);
//                dbCommand.Parameters.Add(parameter1);
//                dbCommand.Parameters.Add(parameter2);
//                dbCommand.ExecuteNonQuery();

//            }
//            dbConnection.Close();
//        }
//    }
//    public static void UpdateHero(int id, int state)
//    {
//        SqliteParameter parameter = new SqliteParameter("@id", id);
//        SqliteParameter parameter1 = new SqliteParameter("@state", state);

//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "UPDATE hero SET state = @state WHERE id = @id";
//                dbCommand.Parameters.Add(parameter);
//                dbCommand.Parameters.Add(parameter1);
//                dbCommand.ExecuteNonQuery();

//            }
//            dbConnection.Close();
//        }
//    }
//    public static void UpdateCoin(int idacc, string token)
//    {
//        SqliteParameter parameter = new SqliteParameter("@idAcc", idacc);
//        SqliteParameter parameter1 = new SqliteParameter("@token", token);

//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "UPDATE token SET token = @token WHERE id_account = @idAcc";
//                dbCommand.Parameters.Add(parameter);
//                dbCommand.Parameters.Add(parameter1);
//                dbCommand.ExecuteNonQuery();

//            }
//            dbConnection.Close();
//        }
//    }
//    public static void AddAccount(string acc)
//    {
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "INSERT OR IGNORE INTO players (account) SELECT '"+ acc + "' WHERE NOT EXISTS(SELECT * FROM players WHERE account = '" + acc + "');";
//                dbCommand.ExecuteNonQuery();

//            }
//            dbConnection.Close();
//        }
//    }

//    public static int GetIDAccount(string acc)
//    {
//        int id = -1;
//        //SqliteParameter parameter = new SqliteParameter("@acc", acc);
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "SELECT id FROM players WHERE account = '" + acc + "'";
//                object result = dbCommand.ExecuteScalar();
//                if (result != null && result != DBNull.Value)
//                {
//                    Debug.Log(result + "???");
//                    id = Convert.ToInt32(result);
//                }
//                //}
//                //}

//            }
//            dbConnection.Close();
//        }
//        return id;
//    }
//    public static DataBaseManager.ListHeroDatabase GetPurchasedHero(int id_acc)
//    {
//        DataBaseManager.ListHeroDatabase listhero = new ListHeroDatabase();
//        SqliteParameter parameter = new SqliteParameter("@acc", id_acc);
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "SELECT * FROM hero WHERE id_account = @acc ;";
//                dbCommand.Parameters.Add(parameter);
//                using (IDataReader reader = dbCommand.ExecuteReader())
//                {
//                    if (reader.Depth == 0)
//                        reader.Close();
//                    else
//                    {
//                        while (reader.Read())
//                        {
//                            int currentID = Convert.ToInt32(reader["id"]);
//                            string proper = Convert.ToString(reader["bomber"]);
//                            int st = Convert.ToInt32(reader["state"]);
//                            listhero.AddHero(new SQLiteDataHero(currentID, id_acc, proper, st));
//                            //Debug.LogError("data account ++++" + reader["id"] + "???  " + reader["id_account"] + "...." + reader["bomber"] + "///" + reader["state"]);
//                        }
//                        reader.Close();
//                    }   

//                }

//            }
//            dbConnection.Close();
//        }
//        return listhero;
//    } 
//    public static string GetToken(int id_Acc)
//    {
//        string tichluy = "";
//        SqliteParameter parameter = new SqliteParameter("@acc", id_Acc);
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "SELECT token FROM token WHERE id_account = @acc";
//                dbCommand.Parameters.Add(parameter);
//                object result = dbCommand.ExecuteScalar();
//                if (result != null && result != DBNull.Value)
//                {
//                    Debug.Log(result + "???");
//                    tichluy = Convert.ToString(result);
//                }
//                //}
//                //}

//            }
//            dbConnection.Close();
//        }
//        return tichluy;
//    }
//    public static void DisplayHeroes(int _idAcc)
//    {
//        SqliteParameter parameter = new SqliteParameter("@acc", _idAcc);
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "SELECT * FROM hero WHERE id_account = @acc ;";
//                dbCommand.Parameters.Add(parameter);
//                using (IDataReader reader = dbCommand.ExecuteReader())
//                {
//                    while (reader.Read())
//                    {
//                        Debug.LogError("data account ++++" + reader["id"] + "???  " + reader["id_account"] + "...." + reader["bomber"] + "///" +reader["state"]);
//                    }    
//                    reader.Close();

//                }

//            }
//            dbConnection.Close();
//        }
//    }    
//    public static void DisplayCoin(int _idAcc)
//    {
//        SqliteParameter parameter = new SqliteParameter("@idacc", _idAcc);
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "SELECT * FROM token WHERE id_account = @idacc ;";
//                dbCommand.Parameters.Add(parameter);
//                using (IDataReader reader = dbCommand.ExecuteReader())
//                {
//                    while (reader.Read())
//                        Debug.LogError("data account ++++" + reader["id"] + "???  " + reader["id_account"] +"///" + reader["token"]);

//                    reader.Close();

//                }

//            }
//            dbConnection.Close();
//        }
//    }
//    public static void DisplayAccount()
//    {
//        using (var dbConnection = new SqliteConnection(connectionString))
//        {
//            dbConnection.Open();
//            using (var dbCommand = dbConnection.CreateCommand())
//            {
//                dbCommand.CommandText = "SELECT * FROM players;";
//                using (IDataReader reader = dbCommand.ExecuteReader())
//                {
//                    while (reader.Read())
//                        Debug.LogError("data account ++++" + reader["id"] + "???  " + reader["account"]);

//                    reader.Close();
                    
//                }    

//            }
//            dbConnection.Close();
//        }
//    }
//};