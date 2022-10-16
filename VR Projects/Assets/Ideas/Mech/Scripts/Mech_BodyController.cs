using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mech_BodyController : MonoBehaviour
{
    public Transform Head;
    public Transform Body;

    public float MaxHorizontalAngle;
    public float MaxVerticalAngle;

    public void SetValues(Mech_InputData input)
    {
        var euler = Body.eulerAngles;
        euler.x = input.LookDirection.x * MaxVerticalAngle - 90;
        Body.eulerAngles = euler;

        euler = Head.eulerAngles;
        euler.z = input.LookDirection.y * MaxHorizontalAngle;
        Head.eulerAngles = euler;
    }
}
