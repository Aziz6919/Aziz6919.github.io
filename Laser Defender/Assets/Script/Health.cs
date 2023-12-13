using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : MonoBehaviour
{
    [SerializeField] int health;
    [SerializeField] ParticleSystem HitEffect;
    [SerializeField] bool StartShakeCamera;
    [SerializeField] CameraShake CameraShake;
    [SerializeField] bool IsPlayer;
    [SerializeField] int Score=50;
    [SerializeField] LevelManager levelManager;
    AudioPlayer audioPlayer;
    ScoreKeeper scoreKeeper;
    private void Awake()
    {
        CameraShake = Camera.main.GetComponent<CameraShake>();
        audioPlayer = FindObjectOfType<AudioPlayer>();
        scoreKeeper = FindObjectOfType<ScoreKeeper>();
        levelManager = FindObjectOfType<LevelManager>();
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        DamageDealer damagedealer = collision.GetComponent<DamageDealer>();

        if (damagedealer != null)
        {
            TakeDamage(damagedealer.GetDamage());
            ShakeCamera();
            Playhiteffect();
            audioPlayer.PlayDamageClip();
            damagedealer.Hit();
        }
    }
    public int GetHealth()
    {
        return health;
    }
    void TakeDamage(int damage)
    {
        health -=damage;
        if (health <= 0)
        {
            Die();
        }
    }
    void Die()
    {
        if (!IsPlayer)
        {
            scoreKeeper.ModifyScore(Score);
        }
        else
        {
            levelManager.LoadGameOver();
        }
        Destroy(gameObject);
    }
    void Playhiteffect()
    {
        ParticleSystem instance = Instantiate(HitEffect, transform.position, Quaternion.identity);
        Destroy(instance.gameObject, instance.main.duration + instance.main.startLifetime.constantMax);
    }
    void ShakeCamera()
    {
        if (CameraShake != null)
        {
            if (StartShakeCamera)
            {
                CameraShake.Play();
            }
            
        }
    }
}
