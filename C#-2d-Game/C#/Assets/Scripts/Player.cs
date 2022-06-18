using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed = 1;
    float x = 0;
    float y = 0;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    void Update() {
        x = Input.GetAxis("Horizontal");
        y = Input.GetAxis("Vertical");
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        transform.Translate(new Vector3(x * speed * Time.deltaTime, y * speed * Time.deltaTime, 0));
    }
}
