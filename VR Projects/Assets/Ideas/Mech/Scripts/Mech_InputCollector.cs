using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HippoGamez
{
    public class Mech_InputCollector : MonoBehaviour
    {
        public Joystick LeftJoystick;
        public Joystick RightJoystick;

        private Mech_InputData data = new Mech_InputData();

        public Mech_InputData GetInput()
        {
            data.MoveDirection = LeftJoystick.GetValues();
            data.LookDirection = RightJoystick.GetValues();
            data.IsShootRight = Controller_InputManager.GetRight(Pressed.Trigger); // 
            data.IsShootLeft = Controller_InputManager.GetRight(Pressed.Trigger); // 
            return data;
        }
    }
}

