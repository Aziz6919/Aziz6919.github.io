using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment5a
{
    public class c_Sphererotatetion : MonoBehaviour
    {
        // Start is called before the first frame update
        Vector3 g_Rotatedirecton = Vector3.zero;
        float g_intervaltime = 0;
        float g_ElapsedTime = 0;
        float g_Rotatespeed = 0;
        void Start()
        {

            g_Rotatedirecton = Vector3.up;
            g_intervaltime = 20;
            g_ElapsedTime = 0;
            g_Rotatespeed = 20;
            
        }

        // Update is called once per frame
        void Update()
        {
            m_managerotation();
            m_rotation();
        }
       
        void m_rotation()
        {
            this.transform.Rotate(g_Rotatedirecton*g_Rotatespeed * Time.deltaTime);
        }
        void m_managerotation()
        {
            g_ElapsedTime += Time.deltaTime;
            if (g_ElapsedTime >= g_intervaltime)
            {
                g_ElapsedTime = 0;
                if (g_intervaltime == 20)
                {
                    g_Rotatedirecton = Vector3.zero;
                    g_intervaltime = 5;
                    
                }
                else if (g_intervaltime == 5)
                {
                    g_Rotatedirecton = Vector3.up;
                    g_intervaltime = 20;
                    
                }

            }
           
        }
    }
}
