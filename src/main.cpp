#include <Arduino.h>
#include "Waypoints.h"

void setup() {
    Serial.begin(115200);
    // initMotors(); 
}

void loop() {
    // 1. Move to Pick Up position
    // 2. Actuate Gripper
    // 3. Move to Drop Off position
    // 4. Return to Rest
    
    delay(5000); // Wait before repeating the autonomous cycle
}