using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIDisplay : MonoBehaviour
{
    [Header("Health")]
    [SerializeField] Slider HealthSlider;
    [SerializeField] Health PlayerHealth;
    [Header("Score")]
    ScoreKeeper scorekeeper;
    [SerializeField] TextMeshProUGUI Score;
    private void Awake()
    {
        scorekeeper = FindObjectOfType<ScoreKeeper>();
    }
    void Start()
    {
        HealthSlider.maxValue = PlayerHealth.GetHealth();
    }

    void Update()
    {
        PlayerHealthandScoreManager();
    }
    void PlayerHealthandScoreManager()
    {
        HealthSlider.value = PlayerHealth.GetHealth();
        Score.text = scorekeeper.GetScore().ToString("000000000");
    }
}
