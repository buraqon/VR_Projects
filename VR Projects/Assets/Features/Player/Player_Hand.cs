using System;
using System.Collections;
using System.Collections.Generic;
using Tilia.Interactions.Interactables.Interactables;
using Tilia.Interactions.Interactables.Interactors;
using UnityEngine;
using UnityEngine.Events;

public class Player_Hand : MonoBehaviour
{
    public Transform Visual;
    public InteractorFacade Interactor;

    private InteractableFacade currentInteractable;
    private bool isGrabbing = false;

    private void Start()
    {
        Interactor.Grabbed.AddListener(OnGrab);
        Interactor.Ungrabbed.AddListener(OnRelease);
    }

    private void Update()
    {
        Debug.Log("CheckGrabbing: " + isGrabbing);
        Visual.gameObject.SetActive(!isGrabbing);
    }

    private void OnGrab(InteractableFacade interactable)
    {
        Debug.Log("IsGrabbing");
        currentInteractable = interactable;
        isGrabbing = true;
    }

    private void OnRelease(InteractableFacade interactable)
    {
        Debug.Log("IsReleasing");
        currentInteractable = null;
        isGrabbing = false;
    }
}
