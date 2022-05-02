using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class c_Tables : MonoBehaviour
{
    int g_multificationvalue;
    int g_multificationfactor;
    int g_ouput;
    // Start is called before the first frame update
    void Start()
    {
        g_multificationvalue = 5;
        g_multificationfactor = 1;
    }

    // Update is called once per frame
    void Update()
    {
        m_multification();
    }
    void m_multification()
    {
        if (g_multificationfactor <= 10)
        {
            g_ouput = g_multificationvalue * g_multificationfactor;
            print(g_multificationvalue + "X" + g_multificationfactor + "=" + g_ouput);
            g_multificationfactor++;
        }
    }
}
