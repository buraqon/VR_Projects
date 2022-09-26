using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using TMPro;

namespace HippoGamez
{
    public class Wand_Main : MonoBehaviour
    {
        private const float Threshold = 10f;
        public TextMeshProUGUI NotificationText;
        public List<Wand_Spell_Data> SpellList;
        private bool isRecording;

        public Wand_LineRenderer LineRenderer;
        public Wand_LineSaver LineSaver;
        public Transform Wand;

        private void Start()
        {
            LineRenderer.Initialize();
        }


        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.G))
            {
                LineSaver.Save(LineRenderer);
            }

            if (Controller_Manager.Right.PressedDict[Pressed.Primary].IsActivated || Input.GetKeyDown(KeyCode.A))
                isRecording = !isRecording;

            if (isRecording)
                LineRenderer.Record();
            else
                CheckRecordingPoints();

            Vector3 temp = Wand.rotation.eulerAngles;
            temp.x = 0;
            Wand.rotation = Quaternion.Euler(temp);
        }

        private void CheckRecordingPoints()
        {
            if (LineRenderer.IsAvailable())
            {
                Vector3[] lineBuffer = LineRenderer.GetLineBuffer();
                CheckSpells(lineBuffer);
            }
            LineRenderer.Disable();
        }

        private void CheckSpells(Vector3[] lineBuffer)
        {
            foreach (var spell in SpellList)
            {
                var isSame = Wand_LineComparer.CompareLines(lineBuffer, spell.GetRecordedPoints(), Threshold);
                NotificationText.text = Wand_LineComparer.CompareLines(lineBuffer, spell.GetRecordedPoints()).ToString();

                if (isSame)
                {
                    ActivateSpell(spell.Prefab);
                    NotificationText.text = "kaboom";
                    break;
                }
            }
        }

        private void ActivateSpell(GameObject SpellPrefab)
        {
            var tipTransform = LineRenderer.transform;
            StartCoroutine(SpawnSpell(tipTransform, SpellPrefab));
        }

        IEnumerator SpawnSpell(Transform trans, GameObject prefab)
        {
            var time = 1f;
            while (time > 0)
            {
                time -= Time.deltaTime;
                yield return new WaitForEndOfFrame();
            }
            var obj = Instantiate(prefab, trans.position, Quaternion.identity, trans);
            obj.transform.forward = trans.up;
            Destroy(obj, 5f);
            yield return null;
        }
    }
}
