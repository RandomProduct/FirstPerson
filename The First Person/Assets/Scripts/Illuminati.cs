using UnityEngine;
using System.Collections;

public class Illuminati : MonoBehaviour {

	Vector3 startPos;

	// Use this for initialization
	void Start () {
		startPos = this.gameObject.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = new Vector3(startPos.x, Mathf.Sin(Time.time)/2 + startPos.y, startPos.z);
		if(this.gameObject.name == "Win"){
			transform.Rotate(0,0,90*Time.deltaTime);
		}
		else{
			transform.Rotate(0,90*Time.deltaTime,0);
		}
	}
}
