using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
namespace FPSGame
{
    public class c_Playercontroller : MonoBehaviour
    {
        // Start is called before the first frame update
        CharacterController g_Playercontroller;
        public Camera g_camera;
        Vector3 g_movedirection = Vector3.zero;
        Vector3 g_cameraRotationdirection = Vector3.zero;
        Vector3 g_Playerrotationdirection = Vector3.zero;
        float g_movespeed,g_Rotatespeed = 0;
        Vector3 g_cameraeulerAngle = Vector3.zero;
        public ParticleSystem g_muzzleflash;
        Ray g_ray;
        RaycastHit g_Rayhitinfo;
        public GameObject g_spark;
        GameObject g_sparkprefeb;
        float g_jumpspeed;
        public AudioSource g_Audiosource;
        c_zombiecontroller g_zombiescript;
        public Image g_Recticle;
        GameObject g_zombies;
        public Slider g_Playerhealth;
        int g_zombieskillcounter;
        public Text g_zombiekillstext;
        public Transform[] g_zombierespawnpoints;
        Vector3 g_JumpPos;
        bool g_JumpFlag;
        float g_JumpHeight;
        public Text g_numbertext;
        float g_gamestarttimecounter;
        int g_numbercounter;
       public bool g_gamestartflg;
        public GameObject g_Playerweapon;
        void Start()
        {
            g_Playercontroller = this.GetComponent<CharacterController>();
            g_movespeed = 5;
            g_Rotatespeed = 80;
            g_muzzleflash.Stop();
            g_jumpspeed = 7;
            Cursor.visible = false;
            Cursor.lockState = CursorLockMode.Locked;
            g_Audiosource.Stop();
            g_zombieskillcounter = 0;
            g_JumpFlag = false;
            g_JumpHeight = 0;
            g_gamestarttimecounter = 0;
            g_numbercounter=3;
            g_gamestartflg = false;
        }

        // Update is called once per frame
        void Update()
        {
            m_Gamestart();
            m_stopplay();
        }
        void m_playermove()
        {
            
                g_movedirection = Vector3.zero;
                g_movedirection = this.transform.forward * Input.GetAxis("Vertical") * g_movespeed;
                g_movedirection += this.transform.right * Input.GetAxis("Horizontal") * g_movespeed;
                g_Playercontroller.SimpleMove(g_movedirection);
            
           
        }

        void m_Rotation()
        {

                if (!Cursor.visible)
                {
                    g_cameraRotationdirection.x = -Input.GetAxis("Mouse Y") * g_Rotatespeed * Time.deltaTime;
                }

                g_Playerrotationdirection.y = Input.GetAxis("Mouse X") * g_Rotatespeed * Time.deltaTime;
                this.transform.Rotate(g_Playerrotationdirection);
                g_camera.transform.Rotate(g_cameraRotationdirection, Space.Self);
                g_cameraeulerAngle = g_camera.transform.eulerAngles;
                if (g_cameraeulerAngle.x > 270 && g_cameraeulerAngle.x < 300)
                {
                    g_cameraeulerAngle.x = 300;
                    g_camera.transform.eulerAngles = g_cameraeulerAngle;
                }
                if (g_cameraeulerAngle.x > 60 && g_cameraeulerAngle.x < 100)
                {
                    g_cameraeulerAngle.x = 60;
                    g_camera.transform.eulerAngles = g_cameraeulerAngle;
                }
               if (g_Playerweapon.transform.localEulerAngles.x > 0)
               {
                g_Playerweapon.transform.localEulerAngles= new Vector3(0, g_Playerweapon.transform.localEulerAngles.y, g_Playerweapon.transform.localEulerAngles.z);
               }
            
                
        }
        void m_gunfire()
        {

            if (Input.GetMouseButtonDown(0))
            {
                g_muzzleflash.Play();
                g_Audiosource.Play();
                g_ray = g_camera.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0));
                if (Physics.Raycast(g_ray, out g_Rayhitinfo))
                {
                    g_sparkprefeb = Instantiate(g_spark, g_Rayhitinfo.point, Quaternion.LookRotation(g_Rayhitinfo.normal));
                    Destroy(g_sparkprefeb, 0.5f);


                    if(g_Rayhitinfo.transform.gameObject.tag== "zombie")
                    {
                        g_zombiescript = g_Rayhitinfo.transform.gameObject.GetComponent<c_zombiecontroller>();
                        g_zombies = g_Rayhitinfo.transform.gameObject;
                        if (g_zombiescript.g_isAlive == true)
                        {
                            g_Recticle.color = Color.red;
                            g_zombiescript.m_killingzombies();
                            g_zombiescript.g_bullethitzombie = true;
                            g_zombiescript.g_zombiemovecontroller.isStopped = true;
                            g_zombiescript.g_isAlive = false;
                            g_zombieskillcounter++;
                            g_zombiekillstext.text = g_zombieskillcounter.ToString();
                        }
                       
                       
                    }
                    
                }
                
                
            }
           
          
            if (Input.GetMouseButtonUp(0))
            {

                g_muzzleflash.Stop();
                g_Audiosource.Stop();
                g_Recticle.color = Color.white;
                
                
                
            }
           

        }

       
       
        void m_Playerjump()
        {
            if (g_Playercontroller.isGrounded)
            {
                if (Input.GetKeyDown(KeyCode.Space) && g_JumpFlag == false)
                {
                    g_JumpFlag = true;
                }
            }

            if(g_JumpFlag)
            {
                g_JumpHeight += g_jumpspeed * Time.deltaTime;
                g_JumpPos = Vector3.up * g_jumpspeed * Time.deltaTime;
                g_Playercontroller.Move(g_JumpPos);


                if(g_JumpHeight >= g_jumpspeed)
                {
                    g_JumpFlag = false;
                    g_JumpHeight = 0;
                }
            }

          
        }
        void m_playermanager()
        {
            if (this.transform.position.y < 0)
            {
                SceneManager.LoadScene(2);
            }
        }
        void m_stopplay()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                SceneManager.LoadScene(0);
            }
        }
        void m_Gamestart()
        {
            if (!g_gamestartflg)
            {
                g_gamestarttimecounter++;
            }
            if (g_gamestarttimecounter == 100)
            {
                g_numbercounter--;
                g_numbertext.text = g_numbercounter.ToString();
                
            }
            if (g_gamestarttimecounter == 200)
            {
                g_numbercounter--;
                g_numbertext.text = g_numbercounter.ToString();

            }
            if (g_gamestarttimecounter == 300)
            {
                g_numbercounter--;
                g_numbertext.text = g_numbercounter.ToString();
            }
            if (g_gamestarttimecounter == 400)
            {
                g_numbercounter--;
                g_numbertext.text = g_numbercounter.ToString();
                g_gamestartflg = true;
                g_numbertext.enabled = false;
            }
            if (g_gamestartflg)
            {
                g_gamestarttimecounter = 0;
                m_Rotation();
                m_gunfire();
                m_Playerjump();
                m_playermove();
                m_playermanager();
             
            }
        }
    }
}
