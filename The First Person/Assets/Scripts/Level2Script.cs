using UnityEngine;
using System.Collections;

public class Level2Script : MonoBehaviour {


	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = new Vector3(16, Mathf.Sin(Time.time) + 71.7f, 39);
		transform.Rotate(0,90*Time.deltaTime,0);
	}
}
