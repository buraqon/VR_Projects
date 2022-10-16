using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mech_Movement : MonoBehaviour
{
    public float Speed = 1f;

    private CharacterController characterController;

    private void Start()
    {
        characterController = GetComponent<CharacterController>();
    }

    private void Update()
    {
        var input = GetInput();
        characterController.Move(input * Speed);
    }

    private Vector2 GetInput()
    {
        float x = Input.GetAxisRaw("Horizontal");
        float z = Input.GetAxisRaw("Vertical");
        return new Vector3(x, 0, z);
    }
}
