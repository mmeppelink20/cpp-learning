#include "robot.hpp"
Robot::Robot(string name, string version_number, double temperature) {
    this->name = name;
    this->version_number = version_number;
    this->temperature = temperature;
}

Robot::Robot() {
    this->name = "Default";
    this->version_number = "0.0.0";
    this->temperature = 0.0;
}

string Robot::getName() {
    return this->name;
}

string Robot::getVersionNumber() {
    return this->version_number;
}

double Robot::getTemperature() {
    return this->temperature;
}

void Robot::setName(string name) {
    this->name = name;
}

void Robot::setVersionNumber(string version_number) {
    this->version_number = version_number;
}

void Robot::setTemperature(double temperature) {
    this->temperature = temperature;
}

void Robot::hello_world() {
    cout << "Hello, World! I am " << name << endl;
}

string Robot::toString() {
    return "Name: " + this->name + "\nVersion Number: " + this->version_number + "\nTemperature: " + to_string(this->temperature);
}

RoboticArm::RoboticArm(string name, string version_number, double reach) : Robot(name, version_number, 0.0), reach(reach) {

}

void RoboticArm::pick_object(double x, double y)
{
    cout << "Picking object at (" << x << ", " << y << ")" << endl;
}

void RoboticArm::place_object(double x, double y)
{
    cout << "Placing object at (" << x << ", " << y << ")" << endl;
}