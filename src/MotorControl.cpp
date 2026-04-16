#include <Adafruit_PWMServoDriver.h>
#include "Waypoints.h"

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void initMotors() {
    pwm.begin();
    pwm.setPWMFreq(50); // Set the 50Hz heartbeat 
}

// Function to move a single servo smoothly to a target angle 
void moveServo(int channel, int currentAngle, int targetAngle) {
    // TODO: Map degrees to pulse lengths (150-600) 
    // TODO: Loop 1 degree at a time with a small delay (e.g., 15ms)
}