#include "robot.hpp"

int main() {
    Robot robot = Robot("Robbie", "1.0.0", 98.6);
    Robot robot2 = Robot();

    robot.hello_world();

    cout << robot.toString() << endl << endl;

    cout << robot2.toString() << endl;

    RoboticArm arm = RoboticArm("Robbie", "1.0.0", 10.0);
    arm.place_object(1.0, 2.0);
    arm.pick_object(3.0, 4.0);
    arm.hello_world();
    
    return 0;
}