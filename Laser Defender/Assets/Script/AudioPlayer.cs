using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioPlayer : MonoBehaviour
{
    [Header("ShootingClips")]
    [SerializeField] AudioClip ShootingClip;
    [SerializeField] [Range(0,1)]float  ShootingVolume;
    [Header("DamageClip")]
    [SerializeField] AudioClip DamageClip;
    [SerializeField] [Range(0, 1)] float DamageVolume;
  
    
    void Start()
    {
        
    }
   
    void Update()
    {
        
    }
    public void PlayShootingClip()
    {
        Play(ShootingClip,ShootingVolume);
    }
    public void PlayDamageClip()
    {
        Play(DamageClip, DamageVolume);
    }
    void Play(AudioClip Clip,float Volume)
    {
        if (Clip != null)
        {
            AudioSource.PlayClipAtPoint(Clip, Camera.main.transform.position, Volume);
        }
    }
}
