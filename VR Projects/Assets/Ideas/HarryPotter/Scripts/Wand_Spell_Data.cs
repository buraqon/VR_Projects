using UnityEngine;

namespace HippoGamez
{
    [CreateAssetMenu(menuName = "Spell")]
    public class Wand_Spell_Data : ScriptableObject
    {
        public GameObject Prefab;
        [SerializeField] private TextAsset recordedPoints;

        public Vector3[] GetRecordedPoints()
        {
            return Wand_LineSaver.DeserializeVector3Array(recordedPoints.text);
        }

    }
}
