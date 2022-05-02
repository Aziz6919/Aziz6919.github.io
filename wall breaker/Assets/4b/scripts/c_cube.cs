using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment4b
{
    public class c_cube : MonoBehaviour
    {
        // Start is called before the first frame update
        c_extra g_myextra;

        void Start()
        {
            g_myextra = this.gameObject.AddComponent<c_extra>();

            print(g_myextra.age);
            g_myextra.m_Printbla();
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}

