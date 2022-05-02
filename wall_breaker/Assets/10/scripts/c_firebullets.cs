using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment10
{
    public class c_firebullets : MonoBehaviour
    {
        
        Rigidbody   g_bulletprefebRigidbody;
        public GameObject g_bullet;
        public AudioSource g_firebulletAudiosoucre;
        public AudioClip g_firebulletAudioclip;
        float g_force = 0;
       
        // Start is called before the first frame update
        void Start()
        {
            g_bulletprefebRigidbody = g_bullet.GetComponent<Rigidbody>();
            g_force = 50;
            


        }

        // Update is called once per frame
        void Update()
        {
            m_firebullet();
        }
        void m_firebullet()
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                
                Rigidbody l_bullet =Instantiate(g_bulletprefebRigidbody, this.transform.position, Quaternion.identity);
                l_bullet.AddForce(Vector3.forward * g_force,ForceMode.VelocityChange);
                m_Audiomanager();
               
            }
        }
        void m_Audiomanager()
        {
            g_firebulletAudiosoucre.clip = g_firebulletAudioclip;
            g_firebulletAudiosoucre.Play();
        }
    }
}