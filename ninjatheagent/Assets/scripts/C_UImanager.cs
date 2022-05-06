using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class C_UImanager : MonoBehaviour
{
     public GameObject g_Instructionspanel;
     public GameObject g_menu;
    public GameObject g_gamethememenu;
    void Start()
    {
        
    }

   
    void Update()
    {
        
    }
   public void m_onclickOk()
    {
        SceneManager.LoadScene(1);
    }
    public void m_clickonhomebutton()
    {
        SceneManager.LoadScene(0);
    }
    public void m_PlayGame()
    {
       
        g_gamethememenu.SetActive(true);
        g_menu.SetActive(false);
    }
    
    public void m_Quit()
    {
        Application.Quit();
    }
    public void m_Instructions()
    {
        g_Instructionspanel.SetActive(true);
        g_menu.SetActive(false);
    }
    public void m_Onclickokbutton()
    {
        g_Instructionspanel.SetActive(false);
        g_menu.SetActive(true);
    }
}
