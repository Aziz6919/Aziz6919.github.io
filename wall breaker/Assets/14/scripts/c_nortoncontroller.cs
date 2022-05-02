using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment14
{
    public class c_nortoncontroller : MonoBehaviour
    {
        public Animator g_norton;
        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
           
        }
        public void m_run()
        {
            g_norton.SetBool("run", true);
            g_norton.SetBool("yawn", false);
            g_norton.SetBool("crouch", false);
            g_norton.SetBool("shoot", false);
            g_norton.SetBool("jump", false);
            g_norton.SetBool("die", false);
        }
        public void m_die()
        {
            g_norton.SetBool("die", true);
            g_norton.SetBool("run", true);
            g_norton.SetBool("yawn", false);
            g_norton.SetBool("crouch", false);
            g_norton.SetBool("shoot", false);
            g_norton.SetBool("jump", false);
        }
        public void m_yawn()
        {
            g_norton.SetBool("yawn", true);
            g_norton.SetBool("run", false);
            g_norton.SetBool("crouch", false);
            g_norton.SetBool("shoot", false);
            g_norton.SetBool("jump", false);
            g_norton.SetBool("die", false);
        }
        public void m_crouch()
        {
            g_norton.SetBool("crouch", true);
            g_norton.SetBool("yawn", false);
            g_norton.SetBool("run", false);
            g_norton.SetBool("shoot", false);
            g_norton.SetBool("jump", false);
            g_norton.SetBool("die", false);
        }
        public void m_shoot()
        {
            g_norton.SetBool("shoot", true);
            g_norton.SetBool("crouch", false);
            g_norton.SetBool("yawn", false);
            g_norton.SetBool("run", false);
            g_norton.SetBool("jump", false);
            g_norton.SetBool("die", false);
        }
        public void m_jump()
        {
            g_norton.SetBool("jump", true);
            g_norton.SetBool("shoot", false);
            g_norton.SetBool("crouch", false);
            g_norton.SetBool("yawn", false);
            g_norton.SetBool("run", false);
            g_norton.SetBool("die", false);
        }
    }

}