using System.Collections;
using System.Collections.Generic;
using Tilia.Interactions.Interactables.Interactors;
using UnityEngine;

public class Player_Hand : MonoBehaviour
{
    public Transform Visual;
    public InteractorFacade Interactor;

    private void Update()
    {
        Debug.Log(gameObject + "  " + Interactor.GrabbedObjects.Count);
        if (Interactor.GrabbedObjects.Count > 0)
        {
            var firstGrabbed = Interactor.GrabbedObjects[0].transform;
            Visual.SetPositionAndRotation(firstGrabbed.position, firstGrabbed.rotation);
        }
    }
}
