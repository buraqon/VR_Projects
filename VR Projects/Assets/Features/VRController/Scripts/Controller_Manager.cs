using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HippoGamez
{
    public class Controller_Manager : MonoBehaviour
    {
        public static Controller_Manager instance;
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
    }
}
