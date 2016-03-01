using UnityEngine;
using System.Collections;

public class PlayerController2 : MonoBehaviour {

	void OnCollisionEnter(Collision coll){
		if(coll.gameObject.tag == "Boulder"){
		//	Destroy(this.gameObject);
		}
	}
}
