#ifndef WAYPOINTS_H
#define WAYPOINTS_H

// Data structure to hold the 4-DOF joint angles
typedef struct Waypoint {
    int base;     // Horizontal movement
    int shoulder; // Raising/lowering
    int elbow;    // Reach
    int wrist;    // Vertical orientation
    int gripper;  // Open/Close
} Waypoint;


// --- Saved Waypoints --
extern const Waypoint posRest    = {90, 90, 90, 90, 10}; 
extern const Waypoint posPickUp  = {45, 120, 60, 90, 80}; 
extern const Waypoint posDropOff = {135, 110, 70, 90, 10};

#endif  // WAYPOINTS_H
