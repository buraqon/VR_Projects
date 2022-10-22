using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HippoGamez
{
    public class Mech_Movement : MonoBehaviour
    {
        public float Speed = 1f;
        public float RotationSpeed = 2f;
        public float RotationSpeedSmooth = 0.1f;

        public CharacterController CharacterController;
        private Vector2 direction;
        private float linVel;
        private float rotVel;
        private float rotAcc;

        private void Start()
        {

        }

        private void Update()
        {
            rotVel = Mathf.SmoothDamp(rotVel, direction.x * RotationSpeed, ref rotAcc, RotationSpeedSmooth);
            transform.RotateAround(transform.position, transform.up, rotVel);
            linVel = Speed * direction.y;
            CharacterController.Move(linVel * transform.forward);
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

        public float GetSpeed()
        {
            return linVel;
        }
    }
}
