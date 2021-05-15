
class trafficLight: public Light{

private:
	Light lighttouse;
	int totaltimelight;
    string lightplace;
public:
    trafficLight(Light lighttouse);
    void info();



};
