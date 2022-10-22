using System;
using System.Collections;
using System.Collections.Generic;
using Tilia.Interactions.Interactables.Interactables;
using UnityEngine;

public class Joystick : MonoBehaviour
{
    public InteractableFacade Interactable;
    public Transform Visual;
    public float MaxAngle = 120f;

    private bool isActive = true;
    private Vector2 inputValues;

    public Vector2 GetValues()
    {
        var euler = Visual.localEulerAngles;
        inputValues.x = GetNormalValue(euler.x);
        inputValues.y = GetNormalValue(euler.z);
        return inputValues;
    }

    private float GetNormalValue(float angle)
    {
        float modifiedAngle = NormalAngle(angle);
        return Mathf.Clamp(modifiedAngle / MaxAngle, -1, 1);
    }

    private float NormalAngle(float angle)
    {
        if (angle > 180)
            return angle - 360;

        return angle;
    }

    private void Update()
    {
        if (isActive)
            OnUpdate();
    }

    private void OnUpdate()
    {
        var target = GetTarget();
        if (target)
            FollowTarget(target.position);
        else
            FollowTarget(transform.position + Vector3.up);
    }

    private Transform GetTarget()
    {
        if (Interactable.IsGrabbed)
            return Interactable.GrabbingInteractors[0].transform;

        return null;
    }

    private void FollowTarget(Vector3 targetPos)
    {
        Quaternion quat = Quaternion.FromToRotation(targetPos - transform.position, transform.up);
        Vector3 euler = new Vector3(quat.eulerAngles.z, 0, -quat.eulerAngles.x);
        Visual.localEulerAngles = euler;
    }
}
