using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraShake : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] float ShakeDuration = 0.2f;
    [SerializeField] float Shakemagnitude=0.1f;
    Vector3 InstialPosition;
    void Start()
    {
        InstialPosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Play()
    {
        StartCoroutine(Shake());
    }
    IEnumerator Shake()
    {
        float elatedTime = 0;
        while (elatedTime < ShakeDuration)
        {
            transform.position = InstialPosition + (Vector3)Random.insideUnitCircle * Shakemagnitude;
            elatedTime += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        transform.position = InstialPosition;
    }
}
