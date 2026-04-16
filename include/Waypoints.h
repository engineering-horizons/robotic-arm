#ifndef WAYPOINTS_H
#define WAYPOINTS_H

// Data structure to hold the 4-DOF joint angles
struct Waypoint {
    int base;     // Horizontal movement
    int shoulder; // Raising/lowering
    int elbow;    // Reach
    int wrist;    // Vertical orientation
    int gripper;  // Open/Close
};

const Waypoint posRest    = {90, 90, 90, 90, 10}; 
const Waypoint posPickUp  = {45, 120, 60, 90, 80}; 
const Waypoint posDropOff = {135, 110, 70, 90, 10};

#endif