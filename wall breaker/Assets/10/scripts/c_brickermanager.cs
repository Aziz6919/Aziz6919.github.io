using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment10
{
    public class c_brickermanager : MonoBehaviour
    {

        
        // Start is called before the first frame update
        public bool g_isGrounded;
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }
        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.tag == "Ground")
            {
                g_isGrounded = true;
            }
        }
    }
}
