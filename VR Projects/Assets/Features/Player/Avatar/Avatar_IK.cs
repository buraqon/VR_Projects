    using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Avatar_IK : MonoBehaviour
{
    public Animator Animator;

    private bool isActive;
    private Avatar_IK_Aliases aliases;

    public void Initialize(Avatar_IK_Aliases alis)
    {
        aliases = alis;
        Activate();
    }

    public void Activate()
    {
        isActive = true;
    }
    public void Deactivate()
    {
        isActive = false;
    }

    private void OnAnimatorIK(int layerIndex)
    {
        if (!isActive) return;

        IKFollow(AvatarIKGoal.LeftHand, aliases.LeftHand, 1);
        IKFollow(AvatarIKGoal.RightHand, aliases.RightHand, 1);

        Animator.SetLookAtWeight(1);
        Animator.SetLookAtPosition(aliases.HeadTarget.position);
    }

    private void IKFollow(AvatarIKGoal limb, Transform target, float weight)
    {
        Animator.SetIKPositionWeight(limb, weight);
        Animator.SetIKPosition(limb, target.position);

        Animator.SetIKRotationWeight(limb, weight);
        Animator.SetIKRotation(limb, target.rotation);
    }
}
