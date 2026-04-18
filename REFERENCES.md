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


## Adafruit_PWMServoDriver:
1. **Initialization: `begin()` and `setPWMFreq()`**
    Before you can move any joints, you must initialize the board and set the "heartbeat" of the servos.
    - `pwm.begin()`: This starts the I2C communication between the ESP32 and the PCA9685 driver.
    - `pwm.setPWMFreq(50)`: This is critical because standard hobby servos expect a signal exactly 50 times per second (50Hz)
    > **Warning:** If this frequency is set incorrectly (e.g., to 1000Hz) the servos will likely buzz, heat up, and may sustain permanent damage.

2. **The Movement Command: `setPWM()`**
    This is the function that actually moves the motors. It takes three specific arguments that can be confusing:
    ```
    pwm.setPWM(channel, on, off);
    ```
    `channel`: The physical pin on the PCA9685 board (0 through 15) where the servo is plugged in.

    `on`: The point in the 4096-step PWM cycle when the pulse starts. For servos, you almost always set this to 0.

    `off`: The point in the cycle when the pulse stops. This value determines the physical angle of the arm.

3. **Angle Translation: The `map()` Function**
    The library does not understand degrees (0°–180°); it only understands pulse lengths (0–4095). To move your arm to a specific angle, you must use the standard Arduino `map()` function to translate human-readable degrees into machine-readable pulses.
    
    **The Formula**: int pulse = map(targetAngle, 0, 180, MIN_PULSE, MAX_PULSE);

    > *Typical Ranges*: Usually, 0° corresponds to a pulse of roughly 150, and 180° corresponds to roughly 600.
