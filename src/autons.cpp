#include "lemlib/pose.hpp"
#include "main.h"
#include "pros/rtos.hpp"

void ProgrammingSkills() {
    chassis.moveToPoint(0, 0, 5000);
    chassis.moveToPoint(35.339, 37.409, 5000);
    chassis.moveToPoint(17.192, 109.202, 5000, {.forwards = false});
    chassis.moveToPoint(54.601, 113.659, 5000, {.forwards = false});
    chassis.moveToPoint(93.761, 112.386, 5000, {.forwards = false});
    chassis.moveToPoint(114.137, 81.822, 5000, {.forwards = false});
}

void autonTest() {
    lemlib::Pose pose(8.216, -58.249, -90);
    chassis.setPose(pose);
    //chassis.moveToPoint(0, 0, 5000, {.forwards = false});
    //chassis.moveToPoint(2.096, -31.817, 5000, {.forwards = false});
    //chassis.moveToPoint(28.769, -48.202, 5000, {.forwards = false});
    //chassis.moveToPoint(14.842, -38.786, 5000, {.forwards = false});
    //chassis.moveToPoint(29.304, -18.265, 5000, {.forwards = false});
    //chassis.moveToPoint(48.848, -6.734, 5000, {.forwards = false});
    verticalFlap.set_value(true);
    pros::delay(500);
    verticalFlap.set_value(false);

    intake.move(127);
    pros::delay(500);

    chassis.moveToPoint(45.154, -50.363, 5000, {.forwards = false});

    // ram in "matchload"
    chassis.moveToPose(63.382, -26.22, 180, 5000, {.forwards = false, .minSpeed = 110});
    chassis.moveToPose(63.382, -20.22, 180, 5000, {.forwards = false, .minSpeed = 127});


    //chassis.moveToPose(66.382, -22.22, 180, 5000, {.forwards = false});


    //chassis.moveToPoint(75.617, -34.636, 1000, {.maxSpeed = 50});
    
    // outtake matchload to center
    // chassis.moveToPose(22.861, -28.978, 45, 1000);
    // intake.move(-127);
    // pros::delay(1000);

    // // grab our side neutral triball
    // chassis.moveToPose(8.803, -25.219, 20, 1000);
    // intake.move(127);
    // pros::delay(500);

    // // deposit it in center
    // chassis.turnToHeading(135, 1000);
    // intake.move(-127);
    // pros::delay(1000);

}
