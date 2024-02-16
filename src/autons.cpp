#include "main.h"

void ProgrammingSkills() {
    chassis.moveToPoint(0, 0, 5000);
    chassis.moveToPoint(35.339, 37.409, 5000);
    chassis.moveToPoint(17.192, 109.202, 5000, {.forwards = false});
    chassis.moveToPoint(54.601, 113.659, 5000, {.forwards = false});
    chassis.moveToPoint(93.761, 112.386, 5000, {.forwards = false});
    chassis.moveToPoint(114.137, 81.822, 5000, {.forwards = false});
}

void autonTest() {
    chassis.setPose(23.967, -24.604, 0);
    chassis.moveToPoint(23.967, -24.604, 5000);
    chassis.moveToPose(23.649, 22.515, 180, 5000);
}