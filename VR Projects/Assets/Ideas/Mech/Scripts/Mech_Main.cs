using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HippoGamez
{
    public class Mech_Main : MonoBehaviour
    {
        public Mech_Movement Movement;
        public Mech_InputCollector Input;
        public Mech_BodyController Body;
        public Mech_Animator Animator;
        private void Update()
        {
            var input = Input.GetInput();
            Movement.SetValues(input.MoveDirection);
            Body.SetValues(input);
            Animator.OnUpdate(Movement.GetSpeed());
        }
    }
}
