using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment12
{
    public class c_playermanager : MonoBehaviour
    {
        // Start is called before the first frame update
        CharacterController g_characterControllercomponent;
        Vector3 g_movedirection = Vector3.zero;
        float g_movespeed = 0;
        void Start()
        {
            g_characterControllercomponent = this.GetComponent<CharacterController>();
            g_movespeed = 5;
        }

        // Update is called once per frame
        void Update()
        {
            m_movemanager();
        }
        void m_movemanager()
        {
            g_movedirection.x =  Input.GetAxis("Horizontal");
            g_movedirection.z =  Input.GetAxis("Vertical");
            if (g_characterControllercomponent.isGrounded == true)
            {
                g_movedirection.y = 0;
            }
            if (g_characterControllercomponent.isGrounded == false)
            {
                g_movedirection.y -= 1*Time.deltaTime;
            }
            
            g_characterControllercomponent.Move(g_movedirection*g_movespeed*Time.deltaTime);
           
        }
    }
}
