using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {

	//Distance for clouds should be, at most, 15 units

	public bool hasKey = false;
	public Vector3 saveMe;
	public string[] inv = new string[2];

	public void addInv(string name){
		if(name == "ring"){
			inv[0] = "ring";
		}
		else if(name == "key"){
			inv[1] = "key";
		}
	}

	// Use this for initialization
	void Start () {
		GameObject[] controllers = GameObject.FindGameObjectsWithTag ("GameController");
		if(controllers.Length > 1){
			if(controllers[0].GetComponent<GameController>().hasKey == true){
				Destroy(controllers[1].gameObject);
			}
			else if(controllers[1].GetComponent<GameController>().hasKey == true){
				Destroy(controllers[0].gameObject);
			}
			else{
				Destroy(controllers[0].gameObject);
			}
		}
		saveMe = GameObject.Find("Player").transform.position;
		DontDestroyOnLoad(this.gameObject);
	}
}
