using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
namespace Assignment10
{
    public class c_wallcreater : MonoBehaviour
    {
        // Start is called before the first frame update
       public GameObject g_brick;
       Vector3 g_brickpos = Vector3.zero;
        public int g_cloumn = 0;
        public int g_rows = 0;
        int g_countbickgrounded = 0;
        c_brickermanager[] g_brickclonescript;
        
        void Start()
        {
           
         
            m_wallcreate();
            
        }
        
        // Update is called once per frame
        void FixedUpdate()
        {
            m_wallmanager();
        }
        void m_wallcreate()
        {
            g_brickclonescript = new c_brickermanager[g_rows * g_cloumn];
            GameObject l_BrickClone;
            int index = 0;
            for(int i=1; i<=g_rows; i++)
            {
               for(int j=1; j<=g_cloumn; j++)
                {
                    g_brickpos = new Vector3(i * g_brick.transform.localScale.x, j *g_brick.transform.localScale.y, 0);
                    l_BrickClone =Instantiate(g_brick, g_brickpos,Quaternion.identity);
                    g_brickclonescript[index] = l_BrickClone.GetComponent<c_brickermanager>();
                    index++;

                }
            }

            
        }
       public void m_wallmanager()
        {
            for(int i=0; i < g_brickclonescript.Length; i++)
            {
                if (g_brickclonescript[i].g_isGrounded)
                {

                    g_countbickgrounded++;
                   
                }
                
            }
            if (g_countbickgrounded == g_brickclonescript.Length)
            {
                SceneManager.LoadScene(2);
            }
            if (g_countbickgrounded != g_brickclonescript.Length)
            {
                g_countbickgrounded = 0;
            }

        }
        
    }
   
}