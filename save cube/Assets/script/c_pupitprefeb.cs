using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace savecude
{
    public class c_pupitprefeb : MonoBehaviour
    {
        // Start is called before the first frame update
        public Transform[] g_pupitpos;
        c_Playercontroler g_Playerscript;

        void Start()
        {
            g_Playerscript = GameObject.Find("Player").GetComponent<c_Playercontroler>();
        }

        // Update is called once per frame
        void Update()
        {

        }
        private void OnCollisionExit(Collision collision)
        {
            if (collision.gameObject.tag == "Player")
            {
                g_Playerscript.g_PlayerRigidbody.isKinematic = false;
                
            }
        }
        
        
    }
}
