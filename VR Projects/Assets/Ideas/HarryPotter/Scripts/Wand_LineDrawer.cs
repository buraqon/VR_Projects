using System;
using UnityEngine;
using System.Collections.Generic;
using TMPro;

namespace HippoGamez
{
    public class Wand_LineDrawer : MonoBehaviour
    {
        private const float Threshold = 10f;
        public TextMeshProUGUI text;
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

            Vector3 temp = transform.rotation.eulerAngles;
            temp.x = 0;
            transform.rotation = Quaternion.Euler(temp);
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

                for (int i = 0; i < lineBuffer.Length; i++)
                {
                    lineBuffer[i] = FollowObject.InverseTransformPoint(lineBuffer[i]);
                }

                foreach (var spell in SpellList)
                {
                    var isSame = Wand_LineComparer.CompareLines(lineBuffer, spell.GetRecordedPoints(), Threshold);
                    text.text = Wand_LineComparer.CompareLines(lineBuffer, spell.GetRecordedPoints()).ToString();

                    if (isSame)
                    {
                        ActivateSpell(spell.Prefab);
                        text.text = "kaboom";
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
