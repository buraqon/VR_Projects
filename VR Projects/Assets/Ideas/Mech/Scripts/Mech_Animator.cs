using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mech_Animator : AnimatorHandler
{
    public Animator Animator;
    public float SpeedFactor = 30f;
    public void OnUpdate(float speed)
    {
        Animator.SetFloat("Speed", SpeedFactor * speed);
    }

    public override void AnimationEvent()
    {

    }
}
