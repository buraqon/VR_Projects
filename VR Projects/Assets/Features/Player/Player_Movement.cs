using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Movement : MonoBehaviour
{
    public Transform FollowTarget;
    private Vector3 velocity;
    private const float SmoothTime = 0.1f;

    private void Update()
    {
        transform.position = Vector3.SmoothDamp(transform.position, FollowTarget.position, ref velocity, SmoothTime);
    }
}
