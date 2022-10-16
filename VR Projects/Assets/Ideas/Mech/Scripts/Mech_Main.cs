using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HippoGamez
{
    public class Mech_Main : MonoBehaviour
    {
        public Mech_Movement Movement;
        public Mech_InputCollector Input;
        private void Update()
        {
            var input = Input.GetInput();
            Movement.SetValues(input.MoveDirection);
        }
    }
}
