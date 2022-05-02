using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment10
{
    public class c_bulletcollision : MonoBehaviour
    {
        public GameObject g_dustprefebeffect;
       
        // Start is called before the first frame update
        void Start()
        {
           
        }

        // Update is called once per frame
        void Update()
        {

        }
        void m_spawingparticlesystem()
        {
            GameObject l_dusteffect = Instantiate(g_dustprefebeffect, this.transform.position, Quaternion.identity);
            Destroy(l_dusteffect, 2f);
        }
        private void OnCollisionEnter(Collision collision)
        {
            m_spawingparticlesystem();
            Destroy(this.gameObject, 2f);
           
        }
    }

}