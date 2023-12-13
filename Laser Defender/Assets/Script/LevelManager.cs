using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    float ScenceDeliyTime = 2f;
   public void LoadGame()
   {
        SceneManager.LoadScene("Game");
   }

    public void LoadGameOver()
    {
        StartCoroutine(WaitScenceLoad("GameOVer", ScenceDeliyTime));
    }

    public void LoadMainMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void Quit()
    {
        Application.Quit();
    }
    IEnumerator WaitScenceLoad(string Scencename,float ScenceDaliy)
    {
        yield return new WaitForSeconds(ScenceDaliy);
        SceneManager.LoadScene(Scencename);
    }
}
