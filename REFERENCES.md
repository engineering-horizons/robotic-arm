# QUICK REFERENCES

    RoboticArm/
    ├── include/
    │   └── Waypoints.h            
    └── src/
    │  ├── Main.cpp                  
    │  └── MotorControl.cpp
    └── platform.ini

testing
sldkfjsl


## Waypoints.h:
*Defines a ‘class’ we can save and use to translate servo angles to usable positions*

> *NOTE: This is also where we will save our waypoints*


    struct Waypoint {
        int base;        // Horizontal movement
        int shoulder;    // Raising/lowering
        int elbow;       // Reach
        int wrist;       // Vertical orientation
        int gripper;     // Open/Close
    };

## MotorControl.cpp:
*Responsible for translating angles and waypoints into signals*
Key Features:
Smooth Angular Movement
Frequency Mapping
Possible Extensions:
Predefined Sequencies that combine multiple waypoints

## main.cpp: 
*Responsible for actually controlling the arm*
Possible Extensions:
- Extending by adding a UI
- State Management (RECORD vs PLAY)

## platform.ini:
*Defines the system rules for working with PlatformIO IDE*


Key Features:
- Defining Board
- Defining Frameworks
- Libraries and Imports <-- Build manager handles this for you **but** you still have to tell it what to download
