using UnityEngine;
using System.Collections;

public class TeleportController : MonoBehaviour {

	GameObject player;
	bool readyToFloat;
	bool notDone = true;
	public Material finished;

	// Use this for initialization
	void Start () {
		player = GameObject.Find("Player");
	}
	
	//170 distance in x

	// Update is called once per frame
	void Update () {
		float distance = Mathf.Abs(player.transform.position.x - this.gameObject.transform.position.x);

		if(notDone){
			if(distance > 170){
				readyToFloat = false;
				transform.position = new Vector3(413.99f, 0, 200);
			}
			else if(distance >= 130 && distance <= 170){
				transform.position = new Vector3(413.99f, (Mathf.Abs(distance - 170))/4, 200);
			}
			else{
				if(Mathf.Sin(Time.time) >= 0 && Mathf.Sin(Time.time) <= 0.3){
					readyToFloat = true;
				}
				if(readyToFloat){
					transform.position = new Vector3(413.99f, Mathf.Sin(Time.time) + 10, 200);
				}
			}
			transform.Rotate(0,180*Time.deltaTime,0);		
		}
	}

	public void doneLevel1(){
		notDone = false; //Double negative. Player is done with level 1.
		this.gameObject.GetComponent<MeshRenderer>().material = finished;
		transform.position = new Vector3(413.99f, 10, 200);
		transform.Rotate(0,180,0);	
	}
}