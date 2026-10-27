#ifndef WAYPOINTS_H
#define WAYPOINTS_H

#define NUM_SERVOS 5

// Data structure to hold the 4-DOF joint angles
typedef struct Waypoint {
    int angles[NUM_SERVOS];
} Waypoint;


// --- Saved Waypoints --
extern const Waypoint posRest    = { {90, 90, 90, 90, 10} }; 
extern const Waypoint posPickUp  = { {45, 120, 60, 90, 80} }; 
extern const Waypoint posDropOff = { {135, 110, 70, 90, 10} };

#endif  // WAYPOINTS_H
