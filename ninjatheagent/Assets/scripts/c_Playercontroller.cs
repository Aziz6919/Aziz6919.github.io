using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
namespace ninjatheagent
{
    public class c_Playercontroller : MonoBehaviour
    {
        Rigidbody2D g_PlayerRigidbody2D;
        float g_movespeed = 0;
        float g_jumpspeed = 0;
        Vector2 g_movedirection = Vector2.zero;
        Animator g_Playeranimator;
        bool g_moverightflg;
        bool g_moveleftflg;
        public SpriteRenderer g_PlayerSpriteRenderer;
        BoxCollider2D g_Playercollider2D;
        CapsuleCollider2D g_Playerbodycollider;
        bool g_jumping;
        public bool g_isAttacking;
        bool g_isjumpmove;
        bool g_isthrowknife;
        bool g_jumprightmoveflg;
        bool g_jumpleftmoveflg;
        GameObject[] g_Playerrightweaponprefebs;
        GameObject[] g_Playerleftweaponprefebs;
        public GameObject g_Playerweapon;
        public Transform g_Playerweaponspawnpointright;
        public Transform g_Playerweaponspawnpointleft;
        Vector2 g_Playerweaponmovedirction = Vector2.zero;
        SpriteRenderer g_WeaponspriteRenderer;
        public GameObject g_closeDoor;
        public GameObject g_closedoorswitch;
        public Sprite g_openDoor;
        public Sprite g_Opendoorswitch;
        float g_Playerhealth = 100f;
        float g_barsize = 1;
        float g_damage = 0;
        public c_Healthbarmanager g_Playerhealthbar;
        public AudioClip[] g_Audioclips;
        public AudioSource g_Audiosource;
        bool g_isAlive;
        void Start()
        {
         
            g_PlayerRigidbody2D = this.gameObject.GetComponent<Rigidbody2D>();
            g_Playeranimator = this.gameObject.GetComponent<Animator>();
            g_Playercollider2D = this.gameObject.GetComponent<BoxCollider2D>();
            g_Playerbodycollider = this.gameObject.GetComponent<CapsuleCollider2D>();
            g_movespeed = 5;
            g_jumpspeed = 10;
            m_spawnPlayerrightweapons();
            m_spawnPlayerleftweapons();
            g_isjumpmove = false;
            g_damage = g_barsize / g_Playerhealth;
            g_isAlive = true;
           


        }

        
        void Update()
        {

            m_Playermanager();
            m_Playerhazards();
            m_movekinfe();
            
        }
       
       void m_Playermanager()
        {
            if (g_isAlive)
            {
                m_leftmove();
                m_rightmove();
                m_jump();
                m_jumpAnimationmanager();
                m_stopjump();
                m_AttackbuttonDown();
                m_AttackbuttonUP();
                m_ThrowbuttonDown();
                m_Throwbuttonup();


            }
            
        }
        void m_spawnPlayerrightweapons()
        {
            g_Playerrightweaponprefebs = new GameObject[30];
            for(int i=0; i<g_Playerrightweaponprefebs.Length; i++)
            {
                
                g_Playerrightweaponprefebs[i] = Instantiate(g_Playerweapon, g_Playerweaponspawnpointright.position, Quaternion.identity);
                g_Playerrightweaponprefebs[i].SetActive(false);
            }
        }
        void m_spawnPlayerleftweapons()
        {
            g_Playerleftweaponprefebs = new GameObject[30];
            for (int i = 0; i < g_Playerleftweaponprefebs.Length; i++)
            {

                g_Playerleftweaponprefebs[i] = Instantiate(g_Playerweapon, g_Playerweaponspawnpointleft.position, Quaternion.identity);
              
                g_Playerleftweaponprefebs[i].SetActive(false);
            }
        }



        void m_Thorwknife()
        {
             if(!g_PlayerSpriteRenderer.flipX)
            {
                for (int i = 0; i < g_Playerrightweaponprefebs.Length; i++)
                {
                    if (!g_Playerrightweaponprefebs[i].activeInHierarchy)
                    {
                        g_Playerrightweaponprefebs[i].transform.position = g_Playerweaponspawnpointright.position;
                        g_Playerrightweaponprefebs[i].SetActive(true);
                        break;
                    }
                }
            }
            if (g_PlayerSpriteRenderer.flipX)
            {
                for (int i = 0; i < g_Playerleftweaponprefebs.Length; i++)
                {
                    if (!g_Playerleftweaponprefebs[i].activeInHierarchy)
                    {
                        g_Playerleftweaponprefebs[i].transform.position = g_Playerweaponspawnpointleft.position;
                        g_Playerleftweaponprefebs[i].SetActive(true);
                        break;
                    }
                }
            }

        }
       void m_movekinfe()
       {

          
                for (int i = 0; i < g_Playerrightweaponprefebs.Length; i++)
                {
                    if (g_Playerrightweaponprefebs[i].activeInHierarchy)
                    {

                    
                    g_Playerweaponmovedirction = Vector2.right;
                    g_Playerrightweaponprefebs[i].transform.Translate(g_Playerweaponmovedirction * g_movespeed * Time.deltaTime);

                    }

                }
            
            
                for (int i = 0; i < g_Playerleftweaponprefebs.Length; i++)
                {
                    if (g_Playerleftweaponprefebs[i].activeInHierarchy)
                    {
                    
                        g_WeaponspriteRenderer = g_Playerleftweaponprefebs[i].GetComponent<SpriteRenderer>();
                       
                       g_WeaponspriteRenderer.flipX = true;
                        g_Playerweaponmovedirction = Vector2.left;
                        g_Playerleftweaponprefebs[i].transform.Translate(g_Playerweaponmovedirction * g_movespeed * Time.deltaTime);

                    }

                }
            






        }

        void m_rightmove()
        {
            if(Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
            {
               
                if (g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
                {
                    g_moverightflg = true;
                    g_moveleftflg = false;
                    g_jumprightmoveflg = false;
                }
                if (!g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
                {
                    g_jumprightmoveflg = true;
                }
            }
            if (Input.GetKeyUp(KeyCode.D) || Input.GetKeyUp(KeyCode.RightArrow))
            {
                g_moverightflg = false;
                g_PlayerRigidbody2D.velocity = Vector2.zero;
                g_Playeranimator.SetBool("Run", false);
            }
            if (g_moverightflg)
            {
                if (!g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
                {
                    return;
                }
               
                g_movedirection = Vector2.right;
                g_PlayerRigidbody2D.velocity = g_movedirection * g_movespeed;
                g_PlayerSpriteRenderer.flipX = false;
                g_jumprightmoveflg = true;



            }
          
        }
        void m_leftmove()
        {
            if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
            {
                
                if (g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
                {
                    g_moveleftflg = true;
                    g_moverightflg = false;
                    g_jumpleftmoveflg = false;
                }
                if (!g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
                {
                    g_jumpleftmoveflg = true;
                }
            }
            if (Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow))
            {
                g_moveleftflg = false;
                g_PlayerRigidbody2D.velocity = Vector2.zero;
                g_Playeranimator.SetBool("Run", false);
            }
            
            if (g_moveleftflg)
            {
                if (!g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
                {

                    return;
                   
                }
                g_movedirection = -Vector2.right;
                g_PlayerRigidbody2D.velocity = g_movedirection * g_movespeed;
                g_PlayerSpriteRenderer.flipX = true;
                g_jumpleftmoveflg = true;


            }
           
          
            
        }
        public void m_boolrightmove()
        {

            if (g_isjumpmove && !g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
            {
                g_jumprightmoveflg = true;
            }

            if (!g_isjumpmove && !g_jumping)
            {
                if (!g_isAttacking)
                {

                    g_moverightflg = true;
                }
            }

           
           

        }
        public void m_boolleftmove()
        {

            if (g_isjumpmove && !g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
            {
                g_jumpleftmoveflg = true;
            }

            if (!g_isjumpmove && !g_jumping)
            {

                if (!g_isAttacking)
                {
                    //g_moveleftflg = true;
                }
            }

            

        }
        public void m_booljump()
        {
            
            if (!g_isthrowknife && g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
            {
                g_jumping = true;
                g_Audiosource.clip = g_Audioclips[1];
                g_Audiosource.Play();
            }
            
           
        }
        
         void m_jumpAnimationmanager()
        {
            
          
            if (!g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
            {
                g_Playeranimator.SetBool("jump", true);
                g_Playeranimator.SetBool("Run", false);
                g_isjumpmove = true;
                if (g_isjumpmove)
                {

                }

            }
            if (g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
            {
             
                g_Playeranimator.SetBool("jump", false);
                g_isjumpmove = false;
                if (!g_isjumpmove && g_jumping)
                {
                    g_jumprightmoveflg = false;
                    g_jumpleftmoveflg = false;
                }
               if(g_moverightflg || g_moveleftflg)
                {
                    g_Playeranimator.SetBool("Run", true);
                }

            }
           
                  
            
           
        }
        public void m_stopjump()
        {
            g_jumping = false;
            g_jumprightmoveflg = false;
            g_jumpleftmoveflg = false;
           

        }
       
         void m_jump()
        {

            if (Input.GetKeyDown(KeyCode.Space))
            {
                g_jumping = true;
            }
            if (Input.GetKeyUp(KeyCode.Space))
            {
                g_jumping = false;
            }

            if (g_jumping)
            {
                

                if (!g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
                {
                    return;
                    
                }
                g_PlayerRigidbody2D.velocity = Vector2.up * g_jumpspeed;
               

            }
            

                if (g_jumprightmoveflg)
                {
                    g_PlayerRigidbody2D.velocity = new Vector2(g_movespeed, g_PlayerRigidbody2D.velocity.y);
                    g_PlayerSpriteRenderer.flipX = false;
                }
                if (g_jumpleftmoveflg)
                {
                    g_PlayerRigidbody2D.velocity = new Vector2(-g_movespeed, g_PlayerRigidbody2D.velocity.y);
                    g_PlayerSpriteRenderer.flipX = true;
                }
            else
            {
                g_PlayerRigidbody2D.velocity = new Vector2(g_PlayerRigidbody2D.velocity.x, g_PlayerRigidbody2D.velocity.y);
            }
            

        }
        public void m_stopmoveing()
        {
            g_moverightflg = false;
            g_moveleftflg = false;
            g_PlayerRigidbody2D.velocity = Vector2.zero;
            g_Playeranimator.SetBool("Run", false);
        
        }
       
        public void m_AttackbuttonDown()
        {
            if (Input.GetKeyDown(KeyCode.X))
            {
                g_isAttacking = true;

            }
            if (!g_jumping && g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Ground")))
            {
               
             
                if (g_isAttacking)
                {
                       g_Playeranimator.SetBool("Attack", true);
                    g_Audiosource.clip = g_Audioclips[0];
                    g_Audiosource.Play();
                }
              

            }
            if (g_jumping)
            {
                g_Playeranimator.SetBool("Attack", false);

            }
           
        }
        public void m_AttackbuttonUP()
        {
            
            if (Input.GetKeyUp(KeyCode.X))
            {
                g_isAttacking = false;
                g_Playeranimator.SetBool("Attack", false);
            }
          
            
        }
        public void m_ThrowbuttonDown()
        {
            if (Input.GetKeyDown(KeyCode.K))
            {
               
                g_isthrowknife = true;
            }
            g_Playeranimator.SetBool("throwknife", g_isthrowknife);
            if (!g_jumping && g_isthrowknife)
            {
                m_Thorwknife();
                g_Audiosource.clip = g_Audioclips[2];
                g_Audiosource.Play();

            }
             
        }
        public void m_Throwbuttonup()
        {
            if (Input.GetKeyUp(KeyCode.K))
            {
                g_isthrowknife = false;
            }
            g_Playeranimator.SetBool("throwknife", g_isthrowknife);
            
        }
        private void OnTriggerEnter2D(Collider2D collision)
        {
            if (collision.gameObject.tag == "Switch")
            {
                g_closedoorswitch.GetComponent<SpriteRenderer>().sprite = g_Opendoorswitch;
               
               
            }
            if(collision.gameObject.tag == "Door")
            {
                g_closeDoor.GetComponent<SpriteRenderer>().sprite = g_openDoor;
                StartCoroutine(m_Levelload());
                g_Audiosource.clip = g_Audioclips[3];
                g_Audiosource.Play();

            }
            if(collision.gameObject.tag == "bullet")
            {
                m_Playerhealthbarmanager();
                
            }
            
        }
      
        void m_Playerhazards()
        {
            if (g_Playercollider2D.IsTouchingLayers(LayerMask.GetMask("Hazards")))
            {
              
                g_isAlive = false;
               g_Playeranimator.SetBool("dead", true);
                g_Audiosource.clip = g_Audioclips[4];
                g_Audiosource.Play();
                StartCoroutine(m_Gameovermanager());
                g_Playerhealthbar.m_setsize(0);
                

            }
        }
      public void m_Playerhealthbarmanager()
        {
            if (g_Playerhealth > 0)
            {
                g_Playerhealth -=0.1f;
                g_barsize = g_barsize - g_damage;
                g_Playerhealthbar.m_setsize(g_barsize);
                if (g_barsize <= 0.0009f)
                {
                    g_Playerhealth = 0;
                }
            }
            
            if (g_Playerhealth <= 0)
            {
                g_isAlive = false;
                g_Playeranimator.SetBool("dead", true);
                StartCoroutine(m_Gameovermanager());
                g_Audiosource.clip = g_Audioclips[4];
                g_Audiosource.Play();

            }
        }
        IEnumerator m_Gameovermanager()
        {
            yield return new WaitForSeconds(1f);
            SceneManager.LoadScene("Gameover");
          
        }
        IEnumerator m_Levelload()
        {
            yield return new WaitForSeconds(1f);
            int l_currentscene = SceneManager.GetActiveScene().buildIndex;
            SceneManager.LoadScene(l_currentscene + 1);
        }
    }
}
