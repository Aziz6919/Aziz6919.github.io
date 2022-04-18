using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

    
namespace FPSGame
{
    public class c_uImanager : MonoBehaviour
    {
        public GameObject g_minemenu;
        public GameObject g_instructionmenu;
        private void Start()
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }
        public void m_Gamereset()
        {
            SceneManager.LoadScene(1);
        }
        public void m_PlayGame()
        {
            SceneManager.LoadScene(1);
        }
        public void m_QuitGame()
        {
            Application.Quit();
        }
        public void m_Instructions()
        {
            g_instructionmenu.SetActive(true);
            g_minemenu.SetActive(false);
        }
        public void m_pressokbutton()
        {
            g_instructionmenu.SetActive(false);
            g_minemenu.SetActive(true);
        }
    }
}
