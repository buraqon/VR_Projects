using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HippoGamez
{
    public class LineDrawer : MonoBehaviour
    {
        public Transform FollowObject;

        private bool record;
        private Vector3 oldPosition;

        private Vector3[] lineBuffer;
        private LineRenderer lineRenderer;

        private void Start()
        {
            lineRenderer = FollowObject.GetComponent<LineRenderer>();
            lineRenderer.enabled = true;
        }

        private void Update()
        {
            if (Controller_Manager.Right.PressedDict[Pressed.Primary].IsActivated)
                record = !record;

            if (record)
            {
                if (lineRenderer.enabled == false)
                {
                    lineRenderer.enabled = true;
                    CreateLine();
                }
                else if (Vector2.Distance(FollowObject.position, oldPosition) > .1f)
                {
                    UpdateLine(FollowObject.position);
                    oldPosition = FollowObject.position;
                }
            }
            else
            {
                if (lineRenderer.positionCount > 2)
                {
                    if (lineBuffer == null)
                    {
                        lineBuffer = new Vector3[] { };
                        Array.Resize(ref lineBuffer, lineRenderer.positionCount);
                        lineRenderer.GetPositions(lineBuffer);
                    }
                    else
                    {
                        Vector3[] lineBuffer2 = new Vector3[] { };
                        Array.Resize(ref lineBuffer2, lineRenderer.positionCount);
                        lineRenderer.GetPositions(lineBuffer2);

                        print(LineComparer.CompareLines(lineBuffer, lineBuffer2, 5));
                    }
                }

                lineRenderer.enabled = false;
                lineRenderer.positionCount = 2;
            }
        }

        void CreateLine()
        {
            lineRenderer.SetPosition(0, FollowObject.position);
            lineRenderer.SetPosition(1, FollowObject.position);
            oldPosition = FollowObject.position;
        }

        void UpdateLine(Vector3 pos)
        {
            lineRenderer.positionCount++;
            lineRenderer.SetPosition(lineRenderer.positionCount - 1, pos);
        }
    }
}

