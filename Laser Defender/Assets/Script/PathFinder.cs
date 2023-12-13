using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathFinder : MonoBehaviour
{

     WaveConfigSo WaveConfigSo;
    EnemySpawner Enemy;
    List<Transform> WayPoints = new List<Transform>();
    int WayPointIndex=0;
    private void Awake()
    {
        Enemy = FindObjectOfType<EnemySpawner>();
    }
    void Start()
    {
        WaveConfigSo = Enemy.GetCurrentWave();
        WayPoints = WaveConfigSo.GetwayPoints();
        transform.position = WayPoints[WayPointIndex].position;
    }

   
    void Update()
    {
        followPath();
    }
    void followPath()
    {
        if (WayPointIndex < WayPoints.Count)
        {
            Vector3 targetPosition = WayPoints[WayPointIndex].position;
            float delta = WaveConfigSo.GetMoveSpeed() * Time.deltaTime;
            transform.position = Vector3.MoveTowards(transform.position, targetPosition, delta);
            if(transform.position == targetPosition)
            {
                WayPointIndex++; 
            }
        }
        else
        {
            Destroy(gameObject);
        }
    }
}
