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
        inputValues.x = NormalizeAngle(euler.x);
        inputValues.y = NormalizeAngle(euler.z);
        return inputValues;
    }

    private float NormalizeAngle(float angle)
    {
        float modifiedAngle;
        if (angle > 180)
            modifiedAngle = angle - 360;
        else
            modifiedAngle = angle;

        modifiedAngle = Mathf.Clamp(modifiedAngle / MaxAngle, -1, 1);
        return modifiedAngle;
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
        // else
        //     FollowTarget(transform.position + Vector3.up);
    }


    private Transform GetTarget()
    {
        if (Interactable.IsGrabbed)
            return Interactable.GrabbingInteractors[0].transform;

        return null;
    }

    private void FollowTarget(Vector3 targetPos)
    {
        transform.up = Vector3.SmoothDamp(transform.up, targetPos - transform.position, ref rotVel, SmoothFactor);
    }
}
