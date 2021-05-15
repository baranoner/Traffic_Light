#include <iostream>
#include <string>
#include "Light.h"

using namespace std;

  Light::Light(){
	  
  }
	Light::Light(string colour) {
		// TODO Auto-generated constructor stub
		this->colour = colour;
	     if(colour == "red" || colour == "RED" || colour == "Red" || colour == "green" || colour == "GREEN" || colour == "Green"){
	        timeLight = 30;
	     }
	     else if (colour == "Yellow"){
	    	 timeLight = 10;
	     }
	}


	string Light::getcolour(){
		return colour;
	}
	int Light::gettimelight(){
		return timeLight;
	}
	void Light::info(){
      cout<<"Light colour is  "<< colour<<"light timer is  "<< timeLight<<endl;
	}
