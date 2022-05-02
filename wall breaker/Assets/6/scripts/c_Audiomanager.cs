using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment6
{
    public class c_Audiomanager : MonoBehaviour
    {
        public AudioClip[] g_Audioclips;
        public AudioSource g_audioSource;
        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            m_PlayAudio();
        }
        void m_PlayAudio()
        {
            if (Input.GetKeyDown(KeyCode.Q))
            {
                g_audioSource.clip = g_Audioclips[0];
                g_audioSource.Play();
            }
            if (Input.GetKeyDown(KeyCode.W))
            {
                g_audioSource.clip = g_Audioclips[1];
                g_audioSource.Play();
            }
            if (Input.GetKeyDown(KeyCode.E))
            {
                g_audioSource.clip = g_Audioclips[2];
                g_audioSource.Play();
            }
            if (Input.GetKeyDown(KeyCode.R))
            {
                g_audioSource.clip = g_Audioclips[3];
                g_audioSource.Play();
            }
            if (Input.GetKeyDown(KeyCode.T))
            {
                g_audioSource.clip = g_Audioclips[4];
                g_audioSource.Play();
            }
            if (Input.GetKeyDown(KeyCode.Y))
            {
                g_audioSource.clip = g_Audioclips[5];
                g_audioSource.Play();
            }
            if (Input.GetKeyDown(KeyCode.U))
            {
                g_audioSource.clip = g_Audioclips[6];
                g_audioSource.Play();
            }
        }
    }
}
