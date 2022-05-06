using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ninjatheagent
{
    public class c_Healthbarmanager : MonoBehaviour
    {
        public Transform g_bar;
        void Start()
        {

        }

        
        void Update()
        {

        }
        public void m_setsize(float l_size)
        {
            g_bar.localScale = new Vector2(l_size, 1f);
        }
    }

}