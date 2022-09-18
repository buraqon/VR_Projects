using System;
using System.IO;
using System.Text;
using UnityEngine;
using TMPro;

namespace HippoGamez
{
    public class Wand_LineSaver : MonoBehaviour
    {
        public Wand_LineDrawer LineDrawer;
        public TMP_InputField SaveName;

        private Vector3[] savedPoints;
        private const string SavePath = "Ideas/HarryPotter";

        private void Start()
        {
            SaveName.gameObject.SetActive(true);
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.G))
            {
                Save(LineDrawer.FollowObject.GetComponent<LineRenderer>());
            }
        }

        void Save(LineRenderer lineRenderer)
        {
            var movement = new Vector3[] { };
            Array.Resize(ref savedPoints, lineRenderer.positionCount);
            lineRenderer.GetPositions(savedPoints);
            

            var path = Application.dataPath + "/" + SavePath + "/Saves/Text/" + SaveName.text + ".txt";
            File.WriteAllText(path, SerializeVector3Array(savedPoints));
            SaveName.text = "";
        }

        public static string SerializeVector3Array(Vector3[] aVectors)
        {
            StringBuilder sb = new StringBuilder();
            foreach (Vector3 v in aVectors)
            {
                sb.Append(v.x).Append(" ").Append(v.y).Append(" ").Append(v.z).Append("|");
            }
            if (sb.Length > 0) // remove last "|"
                sb.Remove(sb.Length - 1, 1);
            return sb.ToString();
        }
        public static Vector3[] DeserializeVector3Array(string aData)
        {
            string[] vectors = aData.Split('|');
            Vector3[] result = new Vector3[vectors.Length];
            for (int i = 0; i < vectors.Length; i++)
            {
                string[] values = vectors[i].Split(' ');
                if (values.Length != 3)
                    throw new System.FormatException("component count mismatch. Expected 3 components but got " + values.Length);
                result[i] = new Vector3(float.Parse(values[0]), float.Parse(values[1]), float.Parse(values[2]));
            }
            return result;
        }
    }
}
