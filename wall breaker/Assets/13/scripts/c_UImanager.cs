using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment13
{
    public class c_UImanager : MonoBehaviour
    {
        // Start is called before the first frame update
        public GameObject g_minemenu;
        public GameObject g_settingmenu;
        public GameObject g_Text;
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }
        public void m_nostartbuttonclick()
        {
            g_Text.SetActive(true);
            g_minemenu.SetActive(false);
        }
        public void m_nosettingbuttonclick()
        {
            g_settingmenu.SetActive(true);
            g_minemenu.SetActive(false);
        }
        public void m_noHomebuttonclick()
        {
            g_minemenu.SetActive(true);
            g_settingmenu.SetActive(false);
            g_Text.SetActive(false);
        }
    }

}