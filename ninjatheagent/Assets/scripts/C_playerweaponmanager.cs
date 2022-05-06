using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ninjatheagent
{
    public class C_playerweaponmanager : MonoBehaviour
    {
     
        void Start()
        {
           
        }

        // Update is called once per frame
        void Update()
        {
            
        }
        private void OnTriggerExit2D(Collider2D collision)
        {
            if(collision.gameObject.tag=="Ground" || collision.gameObject.tag == "Enemy")
            {
                this.gameObject.SetActive(false);
            }
            
            
        }
    }
}
