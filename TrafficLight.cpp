#include <iostream>
#include <string>
#include "trafficLight.h"
#include "Light.h"

using namespace std;

trafficLight::trafficLight(Light lighttouse):Light{
		this-> lighttouse = lighttouse;

	      if(lighttouse.getcolour() == "Red"){
	          lightplace = "Up";
	          totaltimelight = 70;

	      }
	      else if(lighttouse.getcolour() == "Yellow"){
	    	  lightplace = "Middle";
	    	  totaltimelight = 40;
	      }
	      else if(lighttouse.getcolour() == "Green"){
	    	  lightplace = "Down";
	    	  totaltimelight = 30;
	      }


	}
