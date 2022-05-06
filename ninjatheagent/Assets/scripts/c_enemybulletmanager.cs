using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ninjatheagent
{
    public class c_enemybulletmanager : MonoBehaviour
    {
        c_Playercontroller g_Playerscript;

        void Start()
        {
            g_Playerscript = GameObject.Find("ninja").GetComponent<c_Playercontroller>();
        }

       
        void Update()
        {

        }
        private void OnTriggerEnter2D(Collider2D collision)
        {
            if(collision.gameObject.tag=="Player" || collision.gameObject.tag == "Ground")
            {
                this.gameObject.SetActive(false);
                 

            }
          
        }
    }

}