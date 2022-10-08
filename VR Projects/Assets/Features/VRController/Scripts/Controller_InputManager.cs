using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HippoGamez
{
    public class Controller_InputManager : MonoBehaviour
    {
        public static Controller_InputManager instance;
        private void Awake()
        {
            instance = this;
        }
        [SerializeField] Controller_InputHandler leftController;
        [SerializeField] Controller_InputHandler rightController;

        public static Controller_InputHandler Right
        {
            get
            {
                return instance.rightController;
            }
        }

        public static Controller_InputHandler Left
        {
            get
            {
                return instance.leftController;
            }
        }

        public static bool GetRight(Pressed pressed)
        {
            return Right.GetValue(pressed);
        }
        public static bool GetRight(Touched touched)
        {
            return Right.GetValue(touched);
        }
        public static float GetRight(Axis axis)
        {
            return Right.GetValue(axis);
        }

        public static bool GetLeft(Pressed pressed)
        {
            return Left.GetValue(pressed);
        }
        public static bool GetLeft(Touched touched)
        {
            return Left.GetValue(touched);
        }
        public static float GetLeft(Axis axis)
        {
            return Left.GetValue(axis);
        }
    }
}
