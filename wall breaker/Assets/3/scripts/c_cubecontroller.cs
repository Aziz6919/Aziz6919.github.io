using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class c_cubecontroller : MonoBehaviour
{
    Vector3 g_movedirection =  Vector3.zero;
    Vector3 g_Rotatedireaction = Vector3.zero;
    float g_movespeed = 0;
    float g_Rotatespeed = 0;
    // Start is called before the first frame update
    void Start()
    {
        g_movespeed = 3;
        g_Rotatespeed = 50;
    }

    // Update is called once per frame
    void Update()
    {
        m_move();
        m_rotate();
        m_cubesize();
    }
    void m_move()
    {
        g_movedirection.x = Input.GetAxis("Horizontal");
        g_movedirection.z = Input.GetAxis("Vertical");
        this.transform.Translate(g_movedirection * g_movespeed*Time.deltaTime, Space.World);
    }
    void m_rotate()
    {
        g_Rotatedireaction = Vector3.zero;
        if (Input.GetKey(KeyCode.A))
        {
            g_Rotatedireaction.y = 1;
        }
        if (Input.GetKey(KeyCode.D))
        {
            g_Rotatedireaction.y = -1;
        }
        if (Input.GetKey(KeyCode.W))
        {
            g_Rotatedireaction.x = 1;
        }
        if (Input.GetKey(KeyCode.S))
        {
            g_Rotatedireaction.x = -1;
        }
        this.transform.Rotate(g_Rotatedireaction * g_Rotatespeed * Time.deltaTime);
    }
    void m_cubesize()
    {
        if (Input.GetKey(KeyCode.I))
        {
            this.transform.localScale += Vector3.one*Time.deltaTime;
        }
        if (Input.GetKey(KeyCode.O))
        {
            this.transform.localScale -= Vector3.one*Time.deltaTime;
        }
    }
}
