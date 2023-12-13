using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteScorlling : MonoBehaviour
{
    [SerializeField] Vector2 MoveSpeed;
    Vector2 offset;
    Material material;
    private void Awake()
    {
        material = GetComponent<SpriteRenderer>().material;
    }
    void Update()
    {
        Scorller();
    }
    void Scorller()
    {
        offset = MoveSpeed * Time.deltaTime;
        material.mainTextureOffset += offset;
    }
}
