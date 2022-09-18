using System;
using UnityEngine;

namespace HippoGamez
{
    public class LineDrawer : MonoBehaviour
    {
        public Transform FollowObject;

        private bool record;
        private Vector3 oldPosition;
        private LineRenderer lineRenderer;

        private void Start()
        {
            lineRenderer = FollowObject.GetComponent<LineRenderer>();
            lineRenderer.enabled = true;
        }

        private void Update()
        {
            if (Controller_Manager.Right.PressedDict[Pressed.Primary].IsActivated || Input.GetKeyDown(KeyCode.A))
                record = !record;

            Record();
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

        void Record()
        {
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
                return;
            }
            if (lineRenderer.positionCount > 2)
            {
                Vector3[] lineBuffer = new Vector3[] { };
                Array.Resize(ref lineBuffer, lineRenderer.positionCount);
                lineRenderer.GetPositions(lineBuffer);

                
            }
            lineRenderer.enabled = false;
            lineRenderer.positionCount = 2;
        }

    }
}

