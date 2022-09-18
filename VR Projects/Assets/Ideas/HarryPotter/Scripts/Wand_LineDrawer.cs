using System;
using UnityEngine;
using System.Collections.Generic;
namespace HippoGamez
{
    public class Wand_LineDrawer : MonoBehaviour
    {
        private const float Threshold = 2f;
        public Transform FollowObject;
        public List<Wand_Spell_Data> SpellList;
        private bool isRecording;
        private Vector3 oldPosition;
        private LineRenderer lineRenderer;
        private Vector3 direction;

        private void Start()
        {
            lineRenderer = FollowObject.GetComponent<LineRenderer>();
            lineRenderer.enabled = true;
        }

        private void Update()
        {
            if (Controller_Manager.Right.PressedDict[Pressed.Primary].IsActivated || Input.GetKeyDown(KeyCode.A))
                isRecording = !isRecording;

            if (isRecording)
                Record();
            else
                CheckRecordingPoints();
        }

        private void Record()
        {
            if (lineRenderer.enabled == false)
            {
                lineRenderer.enabled = true;
                CreateLine();
                direction = FollowObject.forward;
            }
            else if (Vector2.Distance(FollowObject.position, oldPosition) > .1f)
            {
                UpdateLine(FollowObject.position);
                oldPosition = FollowObject.position;
            }
            return;
        }

        private void CheckRecordingPoints()
        {
            if (lineRenderer.positionCount > 2)
            {
                Vector3[] lineBuffer = new Vector3[] { };
                Array.Resize(ref lineBuffer, lineRenderer.positionCount);
                lineRenderer.GetPositions(lineBuffer);
                Matrix4x4 martix = lineRenderer.worldToLocalMatrix;
                print(martix);

                foreach (var spell in SpellList)
                {
                    var isSame = Wand_LineComparer.CompareLines(lineBuffer, spell.GetRecordedPoints(), Threshold);

                    if (isSame)
                    {
                        ActivateSpell(spell.Prefab);
                        break;
                    }
                }

            }
            lineRenderer.enabled = false;
            lineRenderer.positionCount = 2;
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

        public void ActivateSpell(GameObject SpellPrefab)
        {
            Instantiate(SpellPrefab, FollowObject.position, FollowObject.rotation);
        }
    }
}
