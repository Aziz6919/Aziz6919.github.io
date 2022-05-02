using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assignment11
{
    public class c_Raycast : MonoBehaviour
    {
        Ray g_Ray;
        RaycastHit g_Reyhitinfo;
        GameObject g_clickedobject;
        bool g_DragFlag;
        Vector3 g_Dragpos, g_movepos = Vector3.zero;
        Rigidbody g_Rigidbodycomponent;
        // Start is called before the first frame update
        void start()
        {
            
        }

        // Update is called once per frame
        void Update()
        {
            m_idenifyobjects();
            m_Dragobjects();
        }
        void m_idenifyobjects()
        {
            if (Input.GetMouseButtonDown(0))
            {
                g_Ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(g_Ray, out g_Reyhitinfo))
                {
                    g_clickedobject = g_Reyhitinfo.transform.gameObject;
                    g_DragFlag = true;
                }
            }
            if (Input.GetMouseButtonUp(0))
            {
                g_clickedobject = null;
                g_DragFlag = false;
                g_Rigidbodycomponent.isKinematic = false;
            }
        }
        void m_Dragobjects()
        {
            if (g_DragFlag == true)
            {
                g_movepos = Input.mousePosition;
                g_movepos.z = g_Reyhitinfo.transform.position.z-Camera.main.transform.position.z;
                g_Dragpos = Camera.main.ScreenToWorldPoint(g_movepos);
                g_Reyhitinfo.transform.position = g_Dragpos;
                g_Rigidbodycomponent = g_clickedobject.GetComponent<Rigidbody>();
                g_Rigidbodycomponent.isKinematic = true;
               
            }
        }
    }
}
