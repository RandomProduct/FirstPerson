using UnityEngine;
using System.Collections;

public class BoulderController : MonoBehaviour {

	Vector3 startPos;

	void Awake(){
		startPos = this.gameObject.transform.position;
	}

	// Use this for initialization
	void FixedUpdate(){
		if(this.gameObject.transform.position.y < -50){
			Instantiate(this, startPos, Quaternion.identity);
			Destroy(this.gameObject);
		}
	}
}
