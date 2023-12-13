using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
public class Player : MonoBehaviour
{
    Vector2 MoveInput;
    Vector2 MinBounds;
    Vector2 MaxBounds;
    [SerializeField] float MoveSpeed;
    [SerializeField] float PaddingRight;
    [SerializeField] float PaddingLeft;
    [SerializeField] float PaddingTop;
    [SerializeField] float PaddingButtom;
    Shooter PlayerShooter;
    private void Awake()
    {
        PlayerShooter = FindObjectOfType<Shooter>();
    }
    private void Start()
    {
        InstialationBounds();
    }
    void Update()
    {
        move();
    }

    void InstialationBounds()
    {
        Camera Cam = Camera.main;
        MinBounds = Cam.ViewportToWorldPoint(new Vector2(0, 0));
        MaxBounds = Cam.ViewportToWorldPoint(new Vector2(1, 1));
    }
    void OnMove(InputValue value)
    {
        MoveInput = value.Get<Vector2>();
    }

    void move()
    {
        Vector3 delta = MoveInput * MoveSpeed * Time.deltaTime;
        Vector2 newPos = new Vector2();
        newPos.x = Mathf.Clamp(transform.position.x + delta.x, MinBounds.x + PaddingLeft, MaxBounds.x - PaddingRight);
        newPos.y = Mathf.Clamp(transform.position.y + delta.y, MinBounds.y + PaddingButtom, MaxBounds.y - PaddingTop);
        transform.position = newPos;
    }
    void OnFire(InputValue Value)
    {
        if (PlayerShooter != null)
        {
            PlayerShooter.IsFiring = Value.isPressed;
        }
    }
}
