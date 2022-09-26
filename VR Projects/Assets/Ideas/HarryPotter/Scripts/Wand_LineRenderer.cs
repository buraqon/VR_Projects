using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wand_LineRenderer : MonoBehaviour
{
    public LineRenderer Line;
    public TrailRenderer Trail;

    private Vector3 oldPosition;

    public void Initialize()
    {
        Line.enabled = true;
    }

    public bool IsAvailable()
    {
        return Line.positionCount > 2;
    }

    public void Record()
    {
        if (Line.enabled == false)
        {
            CreateLine();
            Line.enabled = true;
            Trail.emitting = true;
        }
        else if (Vector2.Distance(transform.position, oldPosition) > .1f)
        {
            UpdateLine(transform.position);
            oldPosition = transform.position;
        }
        return;
    }

    public Vector3[] GetLineBuffer()
    {
        Vector3[] lineBuffer = new Vector3[] { };
        Array.Resize(ref lineBuffer, Line.positionCount);
        Line.GetPositions(lineBuffer);

        for (int i = 0; i < lineBuffer.Length; i++)
        {
            lineBuffer[i] = transform.InverseTransformPoint(lineBuffer[i]);
        }

        return lineBuffer;
    }

    public void Disable()
    {
        Trail.emitting = false;
        Line.enabled = false;
        Line.positionCount = 2;
    }

    void CreateLine()
    {
        Line.SetPosition(0, transform.position);
        Line.SetPosition(1, transform.position);
        oldPosition = transform.position;
    }

    void UpdateLine(Vector3 pos)
    {
        Line.positionCount++;
        Line.SetPosition(Line.positionCount - 1, pos);
    }
}
