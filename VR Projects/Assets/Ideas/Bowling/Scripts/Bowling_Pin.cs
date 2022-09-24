using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bowling_Pin : MonoBehaviour
{
    Bowling_Set Set;
    bool fell = false;
    public void Initialize(Bowling_Set BS)
    {
        Set = BS;
    }

    public void OnFall()
    {
        Set.OnPinFall(this);
    }
}
