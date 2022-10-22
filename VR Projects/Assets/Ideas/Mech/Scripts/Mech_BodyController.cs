using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mech_BodyController : MonoBehaviour
{
    [Header("Body")]
    public Transform Body;
    public Transform BodyLook;
    public float BodySmooth = 0.1f;
    private Vector3 bodyTarget;
    private Vector3 bodyVel;
    public float MaxVertical;


    [Header("Head")]
    public Transform Head;
    public Transform HeadLook;
    public float HeadSmooth = 0.1f;
    private Vector3 headTarget;
    private Vector3 headVel;
    public float MaxHorizontal;

    [Header("Other")]
    public float RotationSpeed = 0.03f;

    private void Update()
    {
        Head.LookAt(HeadLook);
        Body.LookAt(BodyLook);
    }

    public void SetValues(Mech_InputData input)
    {
        var lookdir = input.LookDirection;
        headTarget = GetTargetPosition(lookdir.x, HeadLook, Vector3.right, MaxHorizontal);
        bodyTarget = GetTargetPosition(lookdir.y, BodyLook, Vector3.down, MaxVertical);

        HeadLook.localPosition = Vector3.SmoothDamp(HeadLook.localPosition, headTarget, ref headVel, HeadSmooth);
        BodyLook.localPosition = Vector3.SmoothDamp(BodyLook.localPosition, bodyTarget, ref bodyVel, BodySmooth);
    }

    private Vector3 GetTargetPosition(float inputValue, Transform trans, Vector3 direction, float maxValue)
    {
        if (Mathf.Abs(inputValue) > 0.2f)
        {
            var nextPos = trans.localPosition + RotationSpeed / 1000 * inputValue * direction * Time.deltaTime;
            var pureVect = Vector3.Scale(nextPos, direction);
            if (pureVect.magnitude < maxValue / 1000)
            {
                // trans.localPosition = nextPos;
                return nextPos;
            }
        }
        return trans.localPosition;
    }
}
