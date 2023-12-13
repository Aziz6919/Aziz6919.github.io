using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] List<WaveConfigSo> WaveConfigs;
    [SerializeField] float timeBetweenSpawnWave;
    [SerializeField] bool IsLooping;
    WaveConfigSo CurrentWave;
    
    void Start()
    {
        StartCoroutine(Spawnwaves());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public WaveConfigSo GetCurrentWave()
    {
        return CurrentWave;
    }
    IEnumerator Spawnwaves()
    {
        do
        {
            foreach (WaveConfigSo Wave in WaveConfigs)
            {
                CurrentWave = Wave;
                for (int i = 0; i < CurrentWave.GetEnemyCount(); i++)
                {
                    Instantiate(CurrentWave.GetEnemyPrefab(i),
                    CurrentWave.GetStartWaypoint().position, Quaternion.identity, transform);
                    yield return new WaitForSeconds(CurrentWave.GetRandomSpawnTime());
                }
            }
            yield return new WaitForSeconds(timeBetweenSpawnWave);
        }
        while (IsLooping);
    }

    
}
