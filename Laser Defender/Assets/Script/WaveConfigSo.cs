using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Wave Config",fileName ="new Config")]
public class WaveConfigSo : ScriptableObject
{
    [SerializeField] List<GameObject> EnemyPrefab = new List<GameObject>();
    [SerializeField] Transform PathPrefab;
    [SerializeField] float Movespeed = 5f;
    [SerializeField] float BetweenEnemySpawnTime = 1;
    [SerializeField] float SpawnTimeVirence = 0;
    [SerializeField] float minimumSpawnTime = 0.2f;

    public int GetEnemyCount()
    {
        return EnemyPrefab.Count;
    }
     
    public GameObject GetEnemyPrefab(int index)
    {
        return EnemyPrefab[index];
    }
    public Transform GetStartWaypoint()
    {
        return PathPrefab.GetChild(0);
    }

    public List<Transform> GetwayPoints()
    {
        List<Transform> wayPoints = new List<Transform>();
        foreach(Transform Child in PathPrefab)
        {
            wayPoints.Add(Child);
        }
        return wayPoints;
    }
   public float GetRandomSpawnTime()
    {
        float SpawnTime = Random.Range(BetweenEnemySpawnTime - SpawnTimeVirence, BetweenEnemySpawnTime + SpawnTimeVirence);
        return Mathf.Clamp(SpawnTime, minimumSpawnTime, float.MaxValue);
    }
    public float GetMoveSpeed()
    {
        return Movespeed;
    }

}
