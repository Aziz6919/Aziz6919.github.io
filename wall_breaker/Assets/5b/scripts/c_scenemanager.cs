using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment5b
{
    public class c_scenemanager : MonoBehaviour
    {
        // Start is called before the first frame update
        public Transform g_Sunobj;
        public Transform g_Earthobj;
        float rotationangle;
        float rotatespeed;
        void Start()
        {
            rotationangle = 30;
            rotatespeed = 60;
            
        }

        // Update is called once per frame
        void Update()
        {
            m_rotationmanager();
        }
        void m_rotationmanager()
        {
            g_Earthobj.RotateAround(g_Sunobj.transform.position, g_Sunobj.transform.up, rotationangle * Time.deltaTime);
            g_Earthobj.Rotate(0, rotatespeed * Time.deltaTime, 0);
        }
    }

}