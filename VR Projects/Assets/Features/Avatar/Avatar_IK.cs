using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Avatar_IK : MonoBehaviour
{
    public Transform LeftHand;
    public Transform RightHand;
    public Transform HeadTarget;
    public Animator Animator;


    private void Update()
    {
        
    }

    private void OnAnimatorIK(int layerIndex)
    {
        IKFollow(AvatarIKGoal.LeftHand, LeftHand, 1);
        IKFollow(AvatarIKGoal.RightHand, RightHand, 1);

        Animator.SetLookAtWeight(1);
        Animator.SetLookAtPosition(HeadTarget.position);
    }

    private void IKFollow(AvatarIKGoal limb, Transform target, float weight)
    {
        Animator.SetIKPositionWeight(limb, weight);
        Animator.SetIKPosition(limb, target.position);

        Animator.SetIKRotationWeight(limb, weight);
        Animator.SetIKRotation(limb, target.rotation);
    }
}
