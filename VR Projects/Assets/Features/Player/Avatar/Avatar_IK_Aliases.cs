using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Avatar_IK_Aliases
{
    public Transform LeftHand;
    public Transform RightHand;
    public Transform HeadTarget;

    public void Set(Transform left, Transform right, Transform head)
    {
        LeftHand = left;
        RightHand = right;
        HeadTarget = head;
    }
}