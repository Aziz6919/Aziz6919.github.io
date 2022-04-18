using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.SceneManagement;
namespace FPSGame
{
    public class c_zombiecontroller : MonoBehaviour
    {
        Transform g_Player;
        public Animator g_zombieAnimator;
        public NavMeshAgent g_zombiemovecontroller;
        public float  g_resetzombiestime;
        float g_zombieAttackpower;
        c_Playercontroller g_Playerscript;
        public bool g_bullethitzombie;
       public bool g_isAlive;
        public AudioSource g_zombieAttackaudio;
        int g_zombierespawnrandompoint;

        // Start is called before the first frame update
        void Awake()
        {
           
            g_Player = GameObject.Find("Player").GetComponent<Transform>();
            g_Playerscript = GameObject.Find("Player").GetComponent<c_Playercontroller>();
            g_resetzombiestime = 0;
            g_zombieAttackpower = 0.001f;
            g_isAlive = true;
            g_zombierespawnrandompoint = 0;
        }

        // Update is called once per frame
        void Update()
        {
            m_zombiemanager();
            m_Gameover();
            m_resetzombieposition();
            g_zombieAttackaudio.Stop();


        }
         void m_zombiemanager()
        {
            
            g_zombiemovecontroller.destination = g_Player.position;
               
         if (Vector3.Distance(this.transform.position, g_Player.position) < g_zombiemovecontroller.stoppingDistance)
         {
                
                this.g_zombieAnimator.SetTrigger("Attack");
                this.g_Playerscript.g_Playerhealth.value += g_zombieAttackpower;
                g_zombiemovecontroller.isStopped = true;
                g_zombieAttackaudio.Play();
         }
         if (Vector3.Distance(this.transform.position, g_Player.position) >g_zombiemovecontroller.stoppingDistance)
         {
                if (this.g_isAlive==true)
                {
                    this.g_zombieAnimator.SetTrigger("Run");
                    g_zombiemovecontroller.isStopped = false;
                    g_zombieAttackaudio.Stop();
                    
                }
               
         }
            

        }
        public  void m_killingzombies()
        {
            

            g_zombieAnimator.SetTrigger("die");
        }
       
        void m_resetzombieposition()
        {
            if (g_isAlive) { return; }

            if (this.g_bullethitzombie == true)
            {

                this.g_resetzombiestime += 1 * Time.deltaTime;
            }
               
                if (this.g_resetzombiestime > 5)
                {
                    this.gameObject.SetActive(false);
                    this.g_resetzombiestime = 0;
                    g_zombierespawnrandompoint = Random.Range(0, g_Playerscript.g_zombierespawnpoints.Length);
                    this.gameObject.transform.position = g_Playerscript.g_zombierespawnpoints[g_zombierespawnrandompoint].position;
                    this.g_bullethitzombie = false;
                    
                }
                



        }
        void m_Gameover()
        {
            if (g_Playerscript.g_Playerhealth.value == 1)
            {
                SceneManager.LoadScene(2);
                Cursor.lockState = CursorLockMode.None;
            }
        }
    }

}