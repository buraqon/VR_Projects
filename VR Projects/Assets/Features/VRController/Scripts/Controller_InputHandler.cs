using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zinnia.Action;
using RotaryHeart.Lib.SerializableDictionary;

namespace HippoGamez
{
    public class Controller_InputHandler : MonoBehaviour
    {
        public PressedDictionary PressedDict;
        public TouchedDictionary TouchedDict;
        public AxisDictionary AxisDict;

        public bool GetValue(Pressed pressed)
        {
            if (PressedDict.ContainsKey(pressed))
                return PressedDict[pressed].Value;

            return false;
        }
        public bool GetValue(Touched touched)
        {
            if (TouchedDict.ContainsKey(touched))
                return TouchedDict[touched].Value;

            return false;
        }
        public float GetValue(Axis axis)
        {
            if (AxisDict.ContainsKey(axis))
                return AxisDict[axis].Value;

            return 0f;
        }
    }
}


public enum Pressed
{
    Home,
    Menu,
    Back,
    Primary,
    Secondary,
    Trigger,
    Grip,
    Thumbstick,
    Touchpad
}


public enum Touched
{
    Primary,
    Secondary,
    Thumbstick,
    Touchpad
}

public enum Axis
{
    Trigger,
    Grip,
    ThumbstickHorizontal,
    ThumbstickVertical,
    TouchpadHorizontal,
    TouchpadVertical
}

[System.Serializable]
public class PressedDictionary : SerializableDictionaryBase<Pressed, BooleanAction> { };

[System.Serializable]
public class TouchedDictionary : SerializableDictionaryBase<Touched, BooleanAction> { };

[System.Serializable]
public class AxisDictionary : SerializableDictionaryBase<Axis, FloatAction> { };