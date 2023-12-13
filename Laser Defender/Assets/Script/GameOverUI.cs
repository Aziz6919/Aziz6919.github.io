using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameOverUI : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI Score;
    void Start()
    {
        DesplayScore();
    }

   
    void DesplayScore()
    {
        Score.text = "your Score:"+"\n" + ScoreKeeper.instance.GetScore().ToString();
    }
}
