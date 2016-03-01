using UnityEngine;
using System.Collections;

public class InventoryController : MonoBehaviour {

	// Update is called once per frame
	void Update () {
		transform.Rotate(0,90*Time.deltaTime,0);
	}
}
