using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment10
{
    public class c_cameramanager : MonoBehaviour
    {
        Vector3 g_movedirection = Vector3.zero;
        float g_movespeed = 0;
        public float g_minx=0;
        public float g_maxX=0;
        // Start is called before the first frame update
        void Start()
        {
            
            g_movespeed = 5;
            
        }

        // Update is called once per frame
        void Update()
        {
            m_Cameramanager();
        }
        void m_Cameramanager()
        {
            if (Input.GetKey(KeyCode.RightArrow))
            {
                g_movedirection = Vector3.right;
                this.transform.Translate(g_movedirection * g_movespeed * Time.deltaTime);

            }
            if (Input.GetKey(KeyCode.LeftArrow))
            {
                g_movedirection = Vector3.left;
                this.transform.Translate( g_movedirection* g_movespeed * Time.deltaTime);
            }
            if (this.transform.position.x < g_minx)
            {
                this.transform.position = new Vector3(g_minx, this.transform.position.y, this.transform.position.z);
               
            }
            if (this.transform.position.x > g_maxX)
            {
                this.transform.position = new Vector3(g_maxX, this.transform.position.y, this.transform.position.z);
            }
        }
    }

}