#include "lemlib/pose.hpp"
#include "main.h"
#include "pros/rtos.hpp"
#define delay(x) pros::delay(x);

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
    // chassis.moveToPoint(0, 0, 5000, {.forwards = false});
    // chassis.moveToPoint(2.096, -31.817, 5000, {.forwards = false});
    // chassis.moveToPoint(28.769, -48.202, 5000, {.forwards = false});
    // chassis.moveToPoint(14.842, -38.786, 5000, {.forwards = false});
    // chassis.moveToPoint(29.304, -18.265, 5000, {.forwards = false});
    // chassis.moveToPoint(48.848, -6.734, 5000, {.forwards = false});
    verticalFlap.set_value(true);
    delay(500);
    verticalFlap.set_value(false);

    intake.move(127);
    delay(500);

    chassis.moveToPoint(45.154, -50.363, 5000, {.forwards = false});

    // ram in "matchload"
    chassis.moveToPose(63.382, -26.22, 180, 5000, {.forwards = false, .minSpeed = 110});
    chassis.moveToPose(63.382, -20.22, 180, 5000, {.forwards = false, .minSpeed = 127});
    // second push
    chassis.moveToPose(63.382, -26.22, 180, 5000, {.forwards = true, .minSpeed = 110});
    chassis.moveToPose(63.382, -20.22, 180, 5000, {.forwards = false, .minSpeed = 127});

    // chassis.moveToPose(66.382, -22.22, 180, 5000, {.forwards = false});

    // chassis.moveToPoint(75.617, -34.636, 1000, {.maxSpeed = 50});

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

void jerryton() {
    // curve to goal
    chassis.setPose(88.048, -59.784, -90);
    chassis.moveToPoint(41.955, -59.625, 5000, {.forwards = false, .minSpeed = 80});
    chassis.moveToPose(56.919, -43.706, 180, 5000, {.forwards = false, .minSpeed = 80});

    // Ram goal
    chassis.moveToPose(58.988, -25.877, 180, 2000, {.forwards = false, .minSpeed = 127});
    chassis.moveToPoint(59.147, -36.384, 5000, {.forwards = true, .minSpeed = 110});
    chassis.moveToPoint(59.147, -26.833, 5000, {.forwards = false, .minSpeed = 127});

    // lineup for middle stuff
    chassis.moveToPoint(35.429, -39.567, 5000, {.forwards = false, .minSpeed = 100});
    chassis.moveToPoint(23, -25, 5000, {.forwards = false, .minSpeed = 100});

    // outake alliance triball to center
    chassis.turnToHeading(45, 5000);
    intake.move(-127);
    delay(500);
    intake.move(0);

    chassis.moveToPose(11.2, -24.5, -8, 5000, {.forwards = false, .minSpeed = 80});
}
