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

    private Vector3 rotVel;
    private bool isActive = true;

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
    }

    private Transform GetTarget()
    {
        if (Interactable.IsGrabbed)
            return Interactable.GrabbingInteractors[0].transform;

        return null;
    }
    private void FollowTarget(Vector3 targetPos)
    {
        transform.up = Vector3.SmoothDamp(transform.up, targetPos, ref rotVel, SmoothFactor);
    }
}
