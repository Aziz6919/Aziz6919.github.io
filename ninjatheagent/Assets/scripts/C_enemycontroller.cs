using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ninjatheagent
{
    public class C_enemycontroller : MonoBehaviour
    {
        Vector2 g_movedirection = Vector2.zero;
        public Animator g_enemyAnimator;
        float g_movespeed = 0;
        bool g_isRunning;
        public SpriteRenderer g_PlayerspriteRenders;
        c_Playercontroller g_Playerscript;
        public Transform g_enemybulletspawnrightpoint;
        public Transform g_enemybulletspawnleftpoint;
        public GameObject g_enemybullet;
        GameObject[] g_enemybulletrightprefebs;
        GameObject[] g_enemybulletleftprefebs;
        Vector2 g_bulletmovedirection = Vector2.zero;
        float g_bulletspeed;
        float g_bulletshootime;
        public c_Healthbarmanager g_enemyhealthbar;
        float g_enemyhealth = 30f;
        float g_enemyhelathbarsize = 1;
        float g_damage = 0;
        public bool g_isAlive;
        public AudioClip[] g_Audioclips;
        public AudioSource g_Audiosource;
        bool g_isAttacking;
        void Start()
        {
            
           
            g_Playerscript = GameObject.Find("ninja").GetComponent<c_Playercontroller>();
            g_movespeed = 3;
            g_isRunning = true;
            g_bulletspeed = 5;
            m_bulletrightspawnpoint();
            m_bulletleftspawnpoint();
            g_bulletshootime = 0;
            g_damage = g_enemyhelathbarsize / g_enemyhealth;
            g_isAlive = true;
            g_isAttacking = false;
        }


        void FixedUpdate()
        {
            m_enemymanager();
            m_enemybulletmanager();
        }
        void m_enemymanager()
        {
            
          
            if (g_isAlive)
            {
                m_move();
                m_enemyshoot();
                m_bulletmove();
                m_enemyattackingplayer();

            }
        }

        void m_bulletrightspawnpoint()
        {
            g_enemybulletrightprefebs = new GameObject[5];
            for(int i=0; i<g_enemybulletrightprefebs.Length; i++)
            {
                g_enemybulletrightprefebs[i] = Instantiate(g_enemybullet, g_enemybulletspawnrightpoint.position, Quaternion.identity);
                g_enemybulletrightprefebs[i].SetActive(false);
            }
        }
        void m_bulletleftspawnpoint()
        {
            g_enemybulletleftprefebs = new GameObject[5];
            for (int i = 0; i < g_enemybulletleftprefebs.Length; i++)
            {
                g_enemybulletleftprefebs[i] = Instantiate(g_enemybullet, g_enemybulletspawnleftpoint.position, Quaternion.identity);
                g_enemybulletleftprefebs[i].SetActive(false);
            }
        }
        void m_enemyActivebullet()
        {

          
                for (int i = 0; i < g_enemybulletrightprefebs.Length; i++)
                {
                    if (!g_enemybulletrightprefebs[i].activeInHierarchy)
                    {
                        g_enemybulletrightprefebs[i].transform.position = g_enemybulletspawnrightpoint.position;
                        g_enemybulletrightprefebs[i].SetActive(true);
                        break;
                    }

                }
            
               
            
                for (int i = 0; i < g_enemybulletleftprefebs.Length; i++)
                {
                    if (!g_enemybulletleftprefebs[i].activeInHierarchy)
                    {
                        g_enemybulletleftprefebs[i].transform.position = g_enemybulletspawnleftpoint.position;
                        g_enemybulletleftprefebs[i].GetComponent<SpriteRenderer>().flipX = true;
                        g_enemybulletleftprefebs[i].SetActive(true);
                        break;
                    }

                }
            
               
            

        }
        void m_bulletmove()
        {
            for(int i=0; i<g_enemybulletrightprefebs.Length; i++)
            {
                if (g_enemybulletrightprefebs[i].activeInHierarchy)
                {
                    g_bulletmovedirection = Vector2.right;
                    g_enemybulletrightprefebs[i].transform.Translate(g_bulletmovedirection * g_bulletspeed * Time.deltaTime);
                }
            }
            for (int i = 0; i < g_enemybulletleftprefebs.Length; i++)
            {
                if (g_enemybulletleftprefebs[i].activeInHierarchy)
                {
                    g_bulletmovedirection = Vector2.left;
                    g_enemybulletleftprefebs[i].transform.Translate(g_bulletmovedirection * g_bulletspeed * Time.deltaTime);
                }
            }
        }
        void m_enemybulletmanager()
        {
            if (!g_isAlive)
            {
                for(int i = 0; i < g_enemybulletrightprefebs.Length; i++)
                {
                    Destroy(g_enemybulletrightprefebs[i].gameObject);
                }
                for (int i = 0; i < g_enemybulletleftprefebs.Length; i++)
                {
                    Destroy(g_enemybulletleftprefebs[i].gameObject);
                }
            }
        }
        void m_move()
        {
            if (g_isRunning)
            {
                g_movedirection = Vector2.right;
                this.gameObject.transform.Translate(g_movedirection * g_movespeed*Time.deltaTime);
                this.gameObject.transform.localScale = new Vector2(Mathf.Sign(g_movespeed), 1f);
                g_enemyAnimator.SetBool("Run", true);
            }




        }

        private void OnTriggerEnter2D(Collider2D collision)
        {
            if(collision.gameObject.tag== "enemycontroller")
            {
                g_movespeed = -g_movespeed;
            }
           
            if (collision.gameObject.tag == "weapon")
            {
                m_enemyheathmanager();
                if (g_enemyhealth <= 0)
                {
                    g_enemyAnimator.SetBool("dead", true);
                    g_isAlive = false;
                    Destroy(this.gameObject, 1f);

                }
            }
        }
        private void OnCollisionStay2D(Collision2D collision)
        {
            if (collision.gameObject.tag == "Player")
            {
                if (g_isAlive)
                {
                    if (g_Playerscript.g_isAttacking)
                    {
                        m_enemyheathmanager();
                    }
                   
                    g_enemyAnimator.SetBool("Run", false);
                    g_enemyAnimator.SetBool("shoot", false);
                    g_enemyAnimator.SetBool("Attack", true);
                    g_isRunning = false;

                    if (!g_isRunning)
                    {
                        if (g_Playerscript.g_PlayerSpriteRenderer.flipX)
                        {
                            this.gameObject.transform.localScale = new Vector2(1f, 1f);
                        }
                        if (!g_Playerscript.g_PlayerSpriteRenderer.flipX)
                        {
                            this.gameObject.transform.localScale = new Vector2(-1f, 1f);
                        }
                    }
                    if (g_enemyhealth <= 0)
                    {
                        g_enemyAnimator.SetBool("dead", true);
                        g_isAlive = false;
                        g_Audiosource.clip = g_Audioclips[1];
                        g_Audiosource.Play();
                        Destroy(this.gameObject, 1f);

                    }
                }
            }
            
        }
        private void OnCollisionExit2D(Collision2D collision)
        {
            if (collision.gameObject.tag == "Player")
            {
               
                g_enemyAnimator.SetBool("Run", true);
                g_enemyAnimator.SetBool("shoot", false);
                g_enemyAnimator.SetBool("Attack", false);
                g_isRunning = true;
               



            }

          
        }
       
        void m_enemyshoot()
        {

           
                g_bulletshootime += 1 * Time.deltaTime;
                if (g_bulletshootime > 5)
                {
                    g_Audiosource.clip = g_Audioclips[0];
                    g_Audiosource.Play();
                    g_bulletshootime = 0;
                    m_enemyActivebullet();
                    g_enemyAnimator.SetBool("Run", false);
                    g_enemyAnimator.SetBool("shoot", true);
                    g_isRunning = false;
                   
                }
                else
                {

                    g_enemyAnimator.SetBool("Run", true);
                    g_enemyAnimator.SetBool("shoot", false);
                    g_isRunning = true;

                }
            

        }
        void m_enemyheathmanager()
        {
            if (g_enemyhealth > 0)
            {
                g_enemyhealth -= 1;
                g_enemyhelathbarsize = g_enemyhelathbarsize - g_damage;
                g_enemyhealthbar.m_setsize(g_enemyhelathbarsize);
            }
        }
        void m_enemyattackingplayer()
        {
            if (Vector2.Distance(this.transform.position,g_Playerscript.transform.position)<2)
            {
                g_isAttacking = true;
                if (g_isAttacking)
                {
                    g_Playerscript.m_Playerhealthbarmanager();
                }   
            }
            else
            {
                g_isAttacking = false;
            }
        }
       
    }
       
    }


