using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Flappybirdgame
{
    public class c_scrollingbackgroundmanager : MonoBehaviour
    {
        Material g_gameobjectmaterial;
        Vector2 g_offset = Vector2.zero;
        [SerializeField]float g_speed = 0;
       public bool g_scrollflg;
        void Start()
        {
            g_gameobjectmaterial = this.gameObject.GetComponent<Renderer>().material;
           
        }

      
        void Update()
        {
            m_scrollmanager();
        }
        void m_scrollmanager()
        {
            if (g_scrollflg == true)
            {
                g_offset = new Vector2(g_speed * Time.deltaTime, 0);
                g_gameobjectmaterial.mainTextureOffset += g_offset;
            }
        }
    }

}