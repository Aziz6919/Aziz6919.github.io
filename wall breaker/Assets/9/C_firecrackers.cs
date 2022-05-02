using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment9
{
    public class C_firecrackers : MonoBehaviour
    {
        // Start is called before the first frame update
        public ParticleSystem g_firecreckers;
        void Start()
        {
            g_firecreckers.Stop();
        }

        // Update is called once per frame
        void Update()
        {
            m_managefirecrackers();
        }
        void m_managefirecrackers()
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                g_firecreckers.Play();
            }

        }
    }

}
