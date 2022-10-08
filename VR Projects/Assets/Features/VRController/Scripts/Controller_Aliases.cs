using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controller_Aliases : MonoBehaviour
{
    public static Controller_Aliases instance;

    public Transform LeftHand;
    public Transform RightHand;
    public Transform HeadTarget;

    private Avatar_IK_Aliases alias = new Avatar_IK_Aliases();

    private void Awake()
    {
        instance = this;
    }

    public static Avatar_IK_Aliases GetAliases()
    {
        instance.alias.Set(instance.LeftHand, instance.RightHand, instance.HeadTarget);
        return instance.alias;
    }
}
