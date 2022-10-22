using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HippoGamez
{
    public class Mech_Movement : MonoBehaviour
    {
        public float Speed = 1f;
        private CharacterController characterController;
        private Vector2 direction;

        private void Start()
        {
            characterController = GetComponent<CharacterController>();
        }

        private void Update()
        {
            var moveDir = GetInput(direction);
            characterController.Move(moveDir * Speed);
            // characterController.
        }

        private Vector3 GetInput()
        {
            float x = Input.GetAxisRaw("Horizontal");
            float z = Input.GetAxisRaw("Vertical");
            return new Vector3(x, 0, z);
        }

        private Vector3 GetInput(Vector2 dir)
        {
            return new Vector3(dir.x, 0, dir.y);
        }

        public void SetValues(Vector2 dir)
        {
            direction = dir;
        }
    }
}
