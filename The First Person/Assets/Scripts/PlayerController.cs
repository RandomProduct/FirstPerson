using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {

	Vector3 saveMe;
	GameController controller; //Who knew you could save scripts as variables?
	string[] inv = new string[2];
	GameObject ring;
	GameObject key;

	// Use this for initialization
	void Awake () {
		controller = GameObject.Find("GameController").GetComponent<GameController>();
		saveMe = controller.saveMe;
	}

	void Start(){
		if(controller.hasKey){
			GameObject.Find("CoveTeleporter").GetComponent<TeleportController>().doneLevel1();
			GameObject.Find("CaveTeleporter").GetComponent<CaveTeleporterController>().gotReady();
		}
		ring = this.gameObject.transform.GetChild(0).GetChild(0).GetChild(0).gameObject;
		key = this.gameObject.transform.GetChild(0).GetChild(0).GetChild(2).gameObject;
	}
	
	// Update is called once per frame
	void Update () {
		if(inv != controller.inv){
			inv = controller.inv;
		}
		if(inv[0] != "ring" && ring.activeSelf == true){
			ring.SetActive(false);
		}
		else if(ring.activeSelf == false && inv[0] == "ring"){
			ring.SetActive(true);
		}
		if(inv[1] != "key" && key.activeSelf == true){
			key.SetActive(false);
		}
		else if(key.activeSelf == false && inv[1] == "key"){
			key.SetActive(true);
		}
		if(Input.GetKeyDown(KeyCode.H)){
			this.gameObject.transform.position = saveMe;
		}
	}

	void OnCollisionEnter(Collision col){
		if(col.gameObject.tag == "Boulder"){
			Application.LoadLevel(2);
		}
	}

	void OnTriggerEnter(Collider coll){
		if(coll.tag == "Cloud" || coll.tag == "Checkpoint"){
			saveMe = coll.gameObject.transform.position;
		}
		else if(coll.tag == "Ocean"){
			if(controller.hasKey == true){
				Application.LoadLevel(0);
				saveMe = new Vector3(403.3f,8.24f,198.5f);
			}
			this.gameObject.transform.position = saveMe;
		}
		else if(coll.name == "CoveTeleporter" || coll.name == "CaveTeleporter"){
			if(!controller.hasKey){
				Application.LoadLevel(1);
			}
			else{
				Application.LoadLevel(2);
			}
		}
		else if(coll.name == "Key"){
			Destroy(coll.gameObject);
			controller.hasKey = true;
		}
		else if(coll.name == "Win"){
			Application.LoadLevel(3);
		}
		else if(coll.name == "key" || coll.name == "ring"){
			controller.addInv(coll.name);
			Destroy(coll.gameObject);
		}
		//else if()
	}
}
