using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bowling_Set : MonoBehaviour
{
    public List<Bowling_Pin> Pins;
    private List<Bowling_Pin> destoryedPins;

    private void Start()
    {
        foreach (var pin in Pins)
        {
            pin.Initialize(this);
        }
    }

    public void OnPinFall(Bowling_Pin dead_pin)
    {
        Pins.Remove(dead_pin);
        destoryedPins.Add(dead_pin);
        UpdatePinCount(destoryedPins.Count);
    }

    private void UpdatePinCount(int count)
    {

    }
}
