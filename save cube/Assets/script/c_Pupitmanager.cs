using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore;
namespace savecude
{
    public class c_Pupitmanager : MonoBehaviour
    {
        public GameObject g_Pupitprefeb;
        float g_spawntime;
        float g_spawnchacktime;
        float g_spawnconter;
        GameObject[] g_pupitclones;
        Animator[] g_pupiAnimators;
        float g_scaleupanimationplay;
        float g_scaledownanimationplay;
         int g_pupitcounter;
        float g_pupitlifetime1;
        float g_pupitlifetime2;
        int g_maxint;
        int g_minint;
        TextMesh[] g_pupitlifetimetexts;
        Transform[] g_Randompos;
        int g_Randomnumber;
        bool g_spwancontroller;
        Vector3 g_Randompospupit;
        float g_maxdeactivetime;
        float g_mindeativetime;
       public  c_Playercontroler g_Playerscript;
        void Start()
        {
            g_spawnchacktime = 0.5f;
            m_spawnpupit();
            g_maxint = 3;
            g_minint = 0;
            g_pupitlifetime1 = 6;
            g_pupitlifetime2 = 6;
            g_spwancontroller = false;
            


        }

        // Update is called once per frame
        void Update()
        {
            m_spawnpupitmanager();
            m_deactivepupits();
            m_pupitmanager();
            

        }
        void m_spawnpupit()
        {
            g_pupitclones = new GameObject[2];
            g_pupiAnimators = new Animator[g_pupitclones.Length];
            for (int i = 0; i < g_pupitclones.Length; i++)
            {
                g_pupitclones[i] = Instantiate(g_Pupitprefeb, this.transform.position, Quaternion.identity);

                g_pupiAnimators[i] = g_pupitclones[i].GetComponent<Animator>();
                g_pupitclones[i].SetActive(false);

            }

        }
        void m_spawnpupitmanager()
        {
            
            g_spawntime += 1 * Time.deltaTime;
          
            if (g_spawntime > g_spawnchacktime)
            {
                g_pupitcounter++;


                g_spawntime = 0;

                for (int i = 0; i < g_pupitclones.Length; i++)
                {
                    if (!g_pupitclones[i].activeInHierarchy)
                    {
                        g_pupitclones[i].SetActive(true);

                        g_pupitclones[i].transform.position = g_Randompospupit;
                        g_pupiAnimators[i].SetBool("scaleup", true);
                       
                        
                      
                        if (i == 0)
                        {
                            g_pupitlifetime1 = 6;
                        }
                        if (i == 1)
                        {
                            g_pupitlifetime2 = 6;
                        }
                        if (g_pupitclones[i].activeInHierarchy)
                        {
                            g_Randomnumber = Random.Range(g_minint, g_maxint);
                            g_Randompospupit = g_pupitclones[i].GetComponent<c_pupitprefeb>().g_pupitpos[g_Randomnumber].position;
                        }

                        break;

                    }
                      

                }


               
            }








        }
       
        void m_pupitmanager()
        {

            if (g_pupitcounter == 1)
            {
                g_spawnchacktime = 2.5f;
                g_spwancontroller = true;

            }
            if (g_pupitcounter == 5)
            {

                g_pupitcounter = 0;
                g_spawnchacktime = 0.5f;
            }
            if (g_spwancontroller)
            {
                g_scaleupanimationplay += 1 * Time.deltaTime;
                if (g_scaleupanimationplay > 0.1)
                {
                    for (int i = 0; i < g_pupitclones.Length; i++)
                    {
                        if (g_pupitclones[i].activeInHierarchy)
                        {
                           
                       
                               
                                g_pupiAnimators[i].SetBool("scaleup", false);

                            
                            
                        }
                        g_scaleupanimationplay = 0;
                      
                        


                    }
                }




            }






        }
        void m_deactivepupits()
        {
            g_Randompos = new Transform[4];
            g_pupitlifetimetexts = new TextMesh[g_pupitclones.Length];

            for (int i = 0; i < g_pupitclones.Length; i++)
            {
                if (g_pupitclones[i].activeInHierarchy)
                {
                   
                   
                    if (i == 0)
                    {
                        g_pupitlifetime1 -= 1 * Time.deltaTime;

                        g_pupitlifetimetexts[i] = g_pupitclones[i].GetComponentInChildren<TextMesh>();
                        g_pupitlifetimetexts[i].text = Mathf.Floor(g_pupitlifetime1).ToString();
                        if (Mathf.Floor(g_pupitlifetime1) <= 0)
                        {
                            g_pupiAnimators[i].SetBool("scaledown", true);
                            g_scaledownanimationplay += 1 * Time.deltaTime;
                            if (g_scaledownanimationplay >= 0.5)
                            {
                              
                                g_pupiAnimators[i].SetBool("scaledown", false);
                                g_pupitclones[i].transform.localScale = new Vector3(30, 0.5f, 30);
                                g_pupitclones[i].SetActive(false);
                                g_scaledownanimationplay = 0;
                                g_spawnchacktime = 0.5f;
                                g_Playerscript.g_scoreincrement = 0;


                            }
                            

                        }
                       

                    }
                    if (i == 1)
                    {
                        g_pupitlifetime2 -= 1 * Time.deltaTime;
                        g_pupitlifetimetexts[i] = g_pupitclones[i].GetComponentInChildren<TextMesh>();
                        g_pupitlifetimetexts[i].text = Mathf.Floor(g_pupitlifetime2).ToString();
                    

                        if (Mathf.Floor(g_pupitlifetime2) <= 0)
                        {
                            g_pupiAnimators[i].SetBool("scaledown", true);
                            g_scaledownanimationplay += 1 * Time.deltaTime;
                            if (g_scaledownanimationplay >= 0.5)
                            {
                             
                                g_pupiAnimators[i].SetBool("scaledown", false);
                                g_pupitclones[i].transform.localScale = new Vector3(30, 0.5f, 30);
                                g_pupitclones[i].SetActive(false);
                                g_scaledownanimationplay = 0;
                                g_spawnchacktime = 0.5f;
                                g_Playerscript.g_scoreincrement = 0;


                            }




                        }
                        break;
                    }
                }
            }


        }
        

    }
}
