#include <iostream>
#include <string>
using namespace std;

class Light{
public:
	string colour;
	int timeLight;
public:
	Light(string colour);
	void info();
	int gettimelight();
	string getcolour();
	Light();


};
