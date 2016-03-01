using UnityEngine;
using System.Collections;

public class CaveTeleporterController : MonoBehaviour {

	bool isReady = false;
	bool reset = false;
	public Material activated;

	public void gotReady(){
		isReady = true;
	}
	
	// Update is called once per frame
	void Update () {
		//print(isReady);
		if(isReady){
			if(!reset){
				transform.rotation = new Quaternion(0,0,0,0);
				this.gameObject.GetComponent<MeshRenderer>().material = activated;
				reset = true;
			}
			transform.position = new Vector3(80, Mathf.Sin(Time.time) + 3, 275);
			transform.Rotate(0,90*Time.deltaTime,0);
		}
	}
}
