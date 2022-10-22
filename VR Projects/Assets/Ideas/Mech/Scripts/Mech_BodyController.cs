using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mech_BodyController : MonoBehaviour
{
    public Transform Body;
    public Transform BodyLook;

    public Transform Head;
    public Transform HeadLook;

    public float MaxHorizontal;
    public float MaxVertical;
    public float RotationSpeed = 0.03f;

    private void Update()
    {
        Head.LookAt(HeadLook);
        Body.LookAt(BodyLook);
    }

    public void SetValues(Mech_InputData input)
    {
        var lookdir = input.LookDirection;
        // var lookdir = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
        // Debug.Log(lookdir);
        Debug.Log(lookdir);
        MoveByInput(lookdir.x, HeadLook, Vector3.right, MaxHorizontal);
        MoveByInput(lookdir.y, BodyLook, Vector3.up, MaxVertical);
    }

    private void MoveByInput(float inputValue, Transform trans, Vector3 direction, float maxValue)
    {
        if (Mathf.Abs(inputValue) > 0.2f)
        {
            var nextPos = trans.localPosition + RotationSpeed * inputValue * direction * Time.deltaTime;
            var pureVect = Vector3.Scale(nextPos, direction);
            if (pureVect.magnitude < maxValue / 1000)
            {
                trans.localPosition = nextPos;
            }
        }
    }
}
