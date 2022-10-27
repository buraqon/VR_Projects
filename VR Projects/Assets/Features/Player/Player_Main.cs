using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Main : MonoBehaviour
{
    public Avatar_IK AvatarIK;
    private void Start()    
    {
        AvatarIK.Initialize(Controller_Aliases.GetAliases());
    }
}
