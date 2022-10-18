using UnityEngine;
using System.Collections;

public class csParticleMove : MonoBehaviour
{
    public float speed = 0.1f;
    public float waitTime = 1f;
    private bool move = false;
    void Start()
    {
        Invoke(nameof(StartMoving), waitTime);
    }
    void Update()
    {
        if (move)
            transform.Translate(Vector3.forward * speed);
    }

    private void StartMoving()
    {
        move = true;
    }
}
