using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Flappybirdgame
{
    public class c_gamemanager : MonoBehaviour
    {
       public GameObject g_playbutton;
       public GameObject g_gameplayinstructions;
       public c_birdcontroller g_birdscript;
       public GameObject g_scoretext;
       public GameObject g_gameinstructions;
      
        public void m_Playgame()
        {
            g_playbutton.SetActive(false);
            g_birdscript.g_startbirdfly = true;
            g_gameplayinstructions.SetActive(true);
            g_scoretext.SetActive(true);
        }
        public void m_clickonokbutton()
        {
           
            SceneManager.LoadScene(0);
           
        }
        public void m_Quitgame()
        {
            Application.Quit();
        }
      
    }

}