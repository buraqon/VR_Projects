using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mech_Animator : MonoBehaviour
{
    public Animator Animator;

    public void OnUpdate(float speed)
    {
        Animator.SetFloat("Speed", speed);
    }
}
