using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class c_UImanager : MonoBehaviour
{
    public GameObject g_instructionmenu;
    public GameObject g_minemenu;
    public void  m_Play()
    {
        SceneManager.LoadScene(1);
    }
    public void m_instructions()
    {
        g_instructionmenu.SetActive(true);
        g_minemenu.SetActive(false);
    }
    public void m_OKbutton()
    {
        g_instructionmenu.SetActive(false);
        g_minemenu.SetActive(true);
    }
}
