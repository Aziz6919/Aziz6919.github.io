using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment4a
{
    public class c_cube : MonoBehaviour
    {
        //public GameObject g_light;
        //public c_extra g_myextra;
        GameObject g_light;
        c_extra g_myextra;
        // Start is called before the first frame update
        void Start()
        {
            g_light = GameObject.Find("myFavLight");
            g_myextra = this.gameObject.GetComponent<c_extra>();
        }

        // Update is called once per frame
        void Update()
        {
            m_ToggleActive();
        }
        void m_ToggleActive()
        {

            if (Input.GetKeyDown(KeyCode.Space))
            {
                if (g_light.activeInHierarchy == true)
                {
                    g_light.SetActive(false);
                }
                else
                {
                    g_light.SetActive(true);
                }
                if (g_myextra.enabled == true)
                {
                    g_myextra.enabled = false;
                }
                else
                {
                    g_myextra.enabled = true;
                }
            }

        }
    }
}
