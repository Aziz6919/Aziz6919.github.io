using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment5a
{
    public class c_cubecontroller : MonoBehaviour
    {
        // Start is called before the first frame update
        Vector3 g_movedirection = Vector3.zero;
        float g_intervaltime;
        float g_ElapsedTime;
        float g_movedirectioncounter;
        void Start()
        {
            g_movedirection = Vector3.right;
            g_intervaltime = 5;
            g_ElapsedTime = 0;
            g_movedirectioncounter = 0;
        }

        // Update is called once per frame
        void Update()
        {
            m_managedirction();
            m_move();
        }
        void m_move()
        {
            this.transform.Translate(g_movedirection * Time.deltaTime);
        }
        void m_managedirction()
        {
            g_ElapsedTime += Time.deltaTime;
            if (g_ElapsedTime >= g_intervaltime)
            {
                g_movedirection = Vector3.zero;
                g_movedirectioncounter++;
                g_ElapsedTime = 0;
            }
            if (g_movedirectioncounter == 2)
            {
                g_movedirection = Vector3.left;
            }
            if (g_movedirectioncounter == 4)
            {
                g_movedirection = Vector3.right;
                g_movedirectioncounter = 0;
            }
        }

    }
}
