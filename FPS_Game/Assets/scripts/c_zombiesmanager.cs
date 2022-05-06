using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FPSGame
{
    public class c_zombiesmanager : MonoBehaviour
    {
        public GameObject[] g_zombiespawnpoints;
        public GameObject g_zombiePrefab;
        GameObject[] g_zombiesarray;
        float g_zombiespawntime;
        int g_zombiespawnrandompoints;
        int g_randomzombie;
        public c_Playercontroller g_playerscript;
        // Start is called before the first frame update
        void Start()
        {
            
            g_zombiespawntime = 0;
            m_spawnzombies();
            g_randomzombie = 0;
        }

        // Update is called once per frame
        void Update()
        {
            m_startzombiesspawn();
        }
        void m_spawnzombies()
        {
            g_zombiesarray = new GameObject[30];
            for (var i=0; i< g_zombiesarray.Length; i++)
            {

                g_zombiesarray[i] = Instantiate(g_zombiePrefab, g_zombiespawnpoints[0].transform.position, Quaternion.identity);
                g_zombiesarray[i].SetActive(false);
            }

        }
        void m_zombiesetposition()
        {
                
                g_zombiespawntime += 1 * Time.deltaTime;
                if (g_zombiespawntime > 2)
                {
                    g_randomzombie = Random.Range(0, g_zombiesarray.Length);
                   for(var i=0; i<g_zombiesarray.Length; i++)
                {
                    if (g_zombiesarray[i].activeInHierarchy == false)
                    {
                        g_zombiespawnrandompoints = Random.Range(0, g_zombiespawnpoints.Length);
                        g_zombiesarray[i].transform.position = g_zombiespawnpoints[g_zombiespawnrandompoints].transform.position;
                        g_zombiesarray[i].SetActive(true);
                        g_zombiesarray[i].GetComponent<c_zombiecontroller>().g_isAlive = true;
                        break; 
                    }
                }
                    
                    g_zombiespawntime = 0;
                }
            
        }
        void m_startzombiesspawn()
        {
            if (g_playerscript.g_gamestartflg)
            {
                m_zombiesetposition();
            }
        }
    }
    
}