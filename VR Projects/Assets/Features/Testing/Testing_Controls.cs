using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HippoGamez
{
    public class Testing_Controls : MonoBehaviour
    {
        MeshRenderer meshRenderer;

        private void Awake()
        {
            meshRenderer = GetComponent<MeshRenderer>();
        }

        private void Update()
        {
            var press = Controller_InputManager.GetRight(Pressed.Primary);
            var touch = Controller_InputManager.GetRight(Touched.Secondary);
            var axis = Controller_InputManager.GetRight(Axis.ThumbstickHorizontal);

            var Color = new Color(Convert.ToInt32(press), Convert.ToInt32(touch), axis);

            meshRenderer.materials[0].color = Color;
        }
    }
}
