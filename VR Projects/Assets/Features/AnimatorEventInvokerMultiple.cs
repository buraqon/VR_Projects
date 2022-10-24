using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorEventInvokerMultiple : StateMachineBehaviour
{
    public List<AnimationEventTrigger> triggerList;
    private AnimatorHandler handler;

    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        handler = animator.GetComponent<AnimatorHandler>();
        foreach (var trigger in triggerList)
        {
            trigger.IsDone = false;
        }
    }

    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        if (!handler) return;

        var progress = stateInfo.normalizedTime;
        foreach (var trigger in triggerList)
        {
            if (!trigger.IsDone && progress > trigger.Time)
            {
                trigger.IsDone = true;
                handler.AnimationEvent();
            }
        }
    }
}

[System.Serializable]
public class AnimationEventTrigger
{
    [Range(0, 1f)]
    public float Time;
    public bool IsDone { get; set; }
}