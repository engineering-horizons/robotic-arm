#pragma once
#include <Adafruit_PWMServoDriver.h>

#include "Waypoints.h"

extern Adafruit_PWMServoDriver pwm;

class MotorControl {
    public: 
        // Set up the motor controller
        void initMotors();

        // Move servo from current position to the next waypoint
        void moveServo(int channel, Waypoint WayPoint);

        // Overloads the previous function - move a single servo smoothly to a target angle 
        void moveServo(int channel, int currentAngle, int targetAngle);
};

// (optional) TODO: Implement functions to move the arm to specific waypoints 
//      Can define key sequencies like wave(), pickUpAndDrop() etc.
