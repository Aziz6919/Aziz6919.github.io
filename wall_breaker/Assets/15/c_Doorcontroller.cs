using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assigment15
{
    public class c_Doorcontroller : MonoBehaviour
    {
        public Animator g_DoorAnimator;
        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }
        public void m_Dooropen()
        {
            g_DoorAnimator.SetTrigger("Doorpen");
        }
        public void m_Doorclose()
        {
            g_DoorAnimator.SetTrigger("Doorclose");
        }
        private void OnTriggerEnter(Collider other)
        {
            m_Dooropen();
        }
        private void OnTriggerExit(Collider other)
        {
            m_Doorclose();
            
        }
    }
}
