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
        private Vector3 TipPosition = new Vector3(0, 1, 0);
        public TextMeshProUGUI NotificationText;
        public List<Wand_Spell_Data> SpellList;
        private bool isRecording;

        public Wand_LineRenderer LineRenderer;
        public Wand_LineSaver LineSaver;
        public Transform Wand;

        private void Start()
        {
            LineRenderer.Initialize();
            Controller_Manager.Right.PressedDict[Pressed.Primary].ActivationStateChanged.AddListener((bool b) =>
            {
                if (b == false) return;
                isRecording = !isRecording;
            });
        }


        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.G))
            {
                LineSaver.Save(LineRenderer);
            }

            if (Input.GetKeyDown(KeyCode.A))
                isRecording = !isRecording;

            if (isRecording)
                LineRenderer.Record();
            else
                CheckRecordingPoints();

            Wand.up = transform.root.up;
            Vector3 temp = Wand.rotation.eulerAngles;
            temp.x = 0;
            Wand.rotation = Quaternion.Euler(temp);
            // Wand.localPosition = Vector3.zero;
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
                    ActivateSpell(spell.Prefab, spell.IsChild);
                    NotificationText.text = "kaboom";
                    break;
                }
            }
        }

        private void ActivateSpell(GameObject SpellPrefab, bool IsChild)
        {
            var tipTransform = LineRenderer.transform;
            StartCoroutine(SpawnSpell(tipTransform, SpellPrefab, IsChild));
        }

        IEnumerator SpawnSpell(Transform trans, GameObject prefab, bool IsChild)
        {
            var time = 1f;
            while (time > 0)
            {
                time -= Time.deltaTime;
                yield return new WaitForEndOfFrame();
            }
            GameObject obj;

            if (IsChild)
                obj = Instantiate(prefab, trans.position, Quaternion.identity, trans);
            else
                obj = Instantiate(prefab, trans.position, Quaternion.identity);

            obj.transform.forward = transform.root.up;
            Destroy(obj, 5f);
            yield return null;
        }
    }
}
