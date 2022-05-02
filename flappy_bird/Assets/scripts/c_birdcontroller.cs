using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Flappybirdgame
{
    public class c_birdcontroller : MonoBehaviour
    {
        public Rigidbody2D g_birdrigibdody2d;
        [SerializeField]float g_flyspeed = 0;
        public bool g_startbirdfly;
        public c_scrollingbackgroundmanager g_scrollingbackgroundscript;
        public c_scrollingbackgroundmanager g_scrollingground;
        public c_obstaclesmanager g_obstaclescript;
        public GameObject g_gameplayinstructions;
        public Text g_scoretext;
        public Text g_scoretextongamepanel;
        public Text g_bestscoretext;
        int g_bestscore;
        public GameObject g_Gameover;
        public AudioClip[] g_Audioclips;
        public AudioSource g_Audiosoure;
        public GameObject g_medal;
        bool g_playflyaudioflg;
        float g_maxypos;
        int g_score;
        bool g_getmedalflg;
        void Start()
        {
            
            g_birdrigibdody2d.isKinematic = true;
            g_score = 0;
            g_bestscore = 0;
            g_playflyaudioflg = true;
            g_maxypos = 2;
            g_getmedalflg = false;
        }

       
        void Update()
        {
            m_flybird();
            m_scoremanager();
        }
        void m_flybird()
        {
            if (g_startbirdfly)
            {
                if (Input.GetMouseButtonDown(0))
                {
                    g_obstaclescript.g_gamestart = true;
                    g_gameplayinstructions.SetActive(false);
                    g_scrollingbackgroundscript.g_scrollflg = true;
                    g_scrollingground.g_scrollflg = true;
                    g_birdrigibdody2d.isKinematic = false;
                    g_birdrigibdody2d.velocity = Vector2.up * g_flyspeed;
                    if (g_playflyaudioflg)
                    {
                        g_Audiosoure.clip = g_Audioclips[0];
                        g_Audiosoure.Play();
                    }
                }
            }
            if (this.transform.position.y > g_maxypos)
            {
                this.transform.position = new Vector2(this.transform.position.x, g_maxypos);
            }
        }
        private void OnTriggerEnter2D(Collider2D collision)
        {
            g_score++;
            g_scoretext.text = g_score.ToString();
            g_Audiosoure.clip = g_Audioclips[1];
            g_playflyaudioflg = false;
            g_Audiosoure.Play();
        }
        private void OnTriggerExit2D(Collider2D collision)
        {
            g_playflyaudioflg = true;
        }
        private void OnCollisionEnter2D(Collision2D collision)
        {
            g_Gameover.SetActive(true);
            g_scoretextongamepanel.text = g_score.ToString();
            g_obstaclescript.g_gamestart = false;
            g_scrollingbackgroundscript.g_scrollflg = false;
            g_startbirdfly = false;
            g_scrollingground.g_scrollflg = false;
            g_Audiosoure.clip = g_Audioclips[2];
            g_Audiosoure.Play();
            if (g_getmedalflg)
            {
                g_medal.SetActive(true);
            }
           
        }
        void m_scoremanager()
        {
            if (g_score > g_bestscore)
            {
                PlayerPrefs.SetInt("g_bestscore", g_score);
                g_getmedalflg = true;
            }
            g_bestscore = PlayerPrefs.GetInt("g_bestscore", g_score);
            g_bestscoretext.text = g_bestscore.ToString();

        }
    }

}