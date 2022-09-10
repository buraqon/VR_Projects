using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Iphone_Cameras : MonoBehaviour
{
    public MeshRenderer ScreenRenderer;

    public Camera[] Cameras;
    private int currentCamIndex;


    public void SwichCamera()
    {
        currentCamIndex = (currentCamIndex + 1) % Cameras.Length;
        ScreenRenderer.materials[0].mainTexture = Cameras[currentCamIndex].targetTexture;
    }
}
