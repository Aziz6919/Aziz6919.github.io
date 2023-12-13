using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooter : MonoBehaviour
{
    [Header("General")]
    [SerializeField] GameObject ProjectilePrefeb;
    [SerializeField] float ProjectileSpeed = 10f;
    [SerializeField] float ProjectileLifeTime = 5f;
    [SerializeField] float baseFiringRate = 0.2f;
    [Header("AI")]
    [SerializeField] bool useAI;
    [SerializeField] float firingRateVarince=0;
    [SerializeField] float minimumFiringRate = 0.1f;
    [SerializeField] public bool IsFiring;
    Coroutine firingCoroutine;
    AudioPlayer audioPlayer;
    private void Awake()
    {
        audioPlayer = FindObjectOfType<AudioPlayer>();
    }
    void Start()
    {
        if (useAI)
        {
            IsFiring = true;
        }
    }

    void Update()
    {
        Fire();
    }

    void Fire()
    {
        if(IsFiring && firingCoroutine == null)
        {
           firingCoroutine  = StartCoroutine(FiringContinuousy());
        }
        else if(!IsFiring && firingCoroutine != null)
        {
            StopCoroutine(firingCoroutine);
            firingCoroutine = null;
        }
    }

    IEnumerator FiringContinuousy()
    {
        while (true)
        {
            GameObject Projectile = Instantiate(ProjectilePrefeb, transform.position, Quaternion.identity);
            Rigidbody2D rb = Projectile.GetComponent<Rigidbody2D>();
            if (rb != null)
            {
                if (!useAI)
                {
                    rb.velocity = Projectile.transform.up * ProjectileSpeed;
                }
                else
                {
                    rb.velocity =-Projectile.transform.up * ProjectileSpeed;
                }
               
            }
            Destroy(Projectile, ProjectileLifeTime);
            float timeofnextProjectile = Random.Range(baseFiringRate - firingRateVarince, baseFiringRate + firingRateVarince);
            timeofnextProjectile = Mathf.Clamp(timeofnextProjectile, minimumFiringRate, float.MaxValue);
            audioPlayer.PlayShootingClip();
           yield return new WaitForSeconds(timeofnextProjectile);
        }
       

    }
}
