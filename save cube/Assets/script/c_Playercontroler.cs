using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace savecude
{
    public class c_Playercontroler : MonoBehaviour
    {
       public Rigidbody g_PlayerRigidbody;
        Vector3 g_movedirection = Vector3.zero;
        public c_Pupitmanager g_pupitmanagerscript;
        float g_speed = 0;
        int g_score;
        Ray g_PlayerRay;
        RaycastHit g_Playerhitinfo;
        public Text g_ScoreText;
        float g_fallingtime;
       public int g_scoreincrement;
        void Start()
        {
           
            g_speed = 8;
         
            
        }

        
        void Update()
        {
            m_move();
            m_Gamemanager();
            m_menu();
           
        }
        void m_move()
        {
            g_movedirection.x = -Input.GetAxis("Horizontal");
            g_movedirection.z = -Input.GetAxis("Vertical");
            this.transform.Translate(g_movedirection * g_speed * Time.deltaTime);
           
              
        }
        void m_Gamemanager()
        {
            if (!g_PlayerRigidbody.isKinematic)
            {
                g_fallingtime += 1 * Time.deltaTime;
               
            }
            if (g_PlayerRigidbody.isKinematic)
            {
                g_fallingtime = 0;

               

            }
            
            if (g_fallingtime>2)
            {
                SceneManager.LoadScene(2);
                g_fallingtime = 0;
               
            }
        }
         void m_scoreincreament()
        {
            g_score++;
            g_ScoreText.text = g_score.ToString();
        }
     
        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.tag == "Ground")
            {
                g_PlayerRigidbody.isKinematic = true;
            }
         
          
                    
        }
        private void OnCollisionExit(Collision collision)
        {
            if (collision.gameObject.tag == "Ground")
            {
             
                 g_PlayerRigidbody.isKinematic = false;
               
            }
           
           
        }
        private void OnTriggerExit(Collider other)
        {
            g_scoreincrement++;
            if (g_scoreincrement == 1)
            {
                m_scoreincreament();
               
            }
           
        }
        void m_menu()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                SceneManager.LoadScene(0);
            }
        }

    }
}

