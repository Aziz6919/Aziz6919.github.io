using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreKeeper : MonoBehaviour
{
    // Start is called before the first frame update
    int Score;
    public static ScoreKeeper instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }
    void Start()
    {
        Score = 0;
    }
    public int GetScore()
    {
        return Score;
    }

    public void ModifyScore(int Value)
    {
        Score += Value;
        Mathf.Clamp(Score, 0, int.MaxValue);
    }

   
}
