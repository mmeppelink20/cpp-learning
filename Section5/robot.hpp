#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot {
    public:
        Robot(string name, string version_number, double temperature);
    
        Robot();

        string getName();

        string getVersionNumber();

        double getTemperature();

        void setName(string name);

        void setVersionNumber(string version_number);

        void setTemperature(double temperature);

        void hello_world();

        string toString();
    private:
        string name;
        string version_number;
        double temperature;
};

class RoboticArm : public Robot {
    public:
        RoboticArm(string name, string version_number, double reach);

        RoboticArm();

        void pick_object(double x, double y);

        void place_object(double x, double y);

        string toString();
        
    private:
        double reach;
};

#endif