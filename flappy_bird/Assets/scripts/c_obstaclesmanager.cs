using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Flappybirdgame
{
    public class c_obstaclesmanager : MonoBehaviour
    {
        // Start is called before the first frame update
        public GameObject g_pipesprefeb;
        GameObject[] g_pipesarray;
        float g_pipespawntime;
        float g_randompipesypos;
        float maxypos = 0;
        float minypos = 0;
        Vector2 g_movedirction = Vector2.zero;
        float g_movespeed;
        public bool g_gamestart;
        void Start()
        {
            m_spawnpipes();
            minypos = -1f;
            maxypos = 0.5f;
            g_movespeed = 1;
            g_movedirction = Vector2.left;
            g_pipespawntime = 0;
        }

        // Update is called once per frame
        void Update()
        {
            m_pipesstartmove();
        }
        void m_spawnpipes()
        {
           
                g_pipesarray = new GameObject[5];
                for (int i = 0; i < g_pipesarray.Length; i++)
                {
                    g_pipesarray[i] = Instantiate(g_pipesprefeb, this.transform.position, Quaternion.identity);
                    g_pipesprefeb.SetActive(false);
                }
            
           
        }
        void m_pipesmanager()
        {
           
                g_pipespawntime += 1 * Time.deltaTime;

                if (g_pipespawntime > 2)
                {
                    for (int i = 0; i < g_pipesarray.Length; i++)
                    {
                        if (!g_pipesarray[i].activeInHierarchy)
                        {
                            g_pipesarray[i].SetActive(true);
                            g_randompipesypos = Random.Range(minypos, maxypos);
                            g_pipesarray[i].transform.position = new Vector3(this.transform.position.x, g_randompipesypos, this.transform.position.z);
                            break;
                        }
                    }
                    g_pipespawntime = 0;
                }
            
        }
        void m_movepipe()
        {
                for (int i = 0; i < g_pipesarray.Length; i++)
                {
                    if (g_pipesarray[i].activeInHierarchy)
                    {
                        g_pipesarray[i].transform.Translate(g_movedirction * g_movespeed * Time.deltaTime);
                        if (g_pipesarray[i].transform.position.x < -4)
                        {
                            g_pipesarray[i].SetActive(false);
                        }
                    }

                }
            
            
        }
        void m_pipesstartmove()
        {
            if (g_gamestart)
            {
                m_pipesmanager();
                m_movepipe();
                
            }
        }
    }

}