using System;
using System.Collections;
using System.Collections.Generic;
using Tilia.Interactions.Interactables.Interactables;
using Tilia.Interactions.Interactables.Interactors;
using UnityEngine;
using UnityEngine.Events;

public class Joystick : MonoBehaviour
{
    public InteractableFacade Interactable;
    public float SmoothFactor = 0.2f;
    public float MaxAngle = 120f;

    private Vector3 rotVel;
    private bool isActive = true;
    private Vector2 inputValues;

    public Vector2 GetValues()
    {
        var euler = transform.localEulerAngles;
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
        transform.up = (targetPos - transform.position).normalized;
        transform.Rotate(transform.up, 90);
    }
}
