using UnityEngine;

namespace HippoGamez
{
    [CreateAssetMenu(menuName = "Spell")]
    public class SpellSave : ScriptableObject
    {
        public GameObject Spell;

        [SerializeField]
        private TextAsset movement;

        public Vector3[] Movement()
        {
            return LineSaver.DeserializeVector3Array(movement.text);
        }

        public void ActivateSpell(Transform Spawnpt)
        {
            Instantiate(Spell, Spawnpt.position, Spawnpt.rotation);
        }
    }
}
