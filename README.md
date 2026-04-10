# 4-DOF Autonomous Robotic Arm

Welcome to the official software repository for the **Engineering-Horizons Robotic Arm Project**. This build is intendent to document our progress as a club in learning the fundamentals of robotics, microcontrollers, and embedded software.


## Project Objective
Our goal is to design and build an autonomous robotic arm from scratch that can move a **LEGO piece** from a designated pickup spot into a cup.


## The Tech Stack
* **Microcontroller**: ESP32 (Affordability and Arduino-compatibility).
* **Actuators**: 4x DS3218 MG Servos (Arm joints) + 1x SG90 (Gripper).
* **Driver**: PCA9685 16-Channel 12-bit PWM Controller.
* **Power**: 7.4V 2S LiPo Battery with 5V/6V voltage regulation.


## System Architecture (4 DOF)
The arm is designed with the minimum DOF required to complete our pick-and-place task:

1. **Base Rotation**: Horizontal movement in the X-Y plane.
2. **Shoulder**: Raising and lowering the arm.
3. **Elbow**: Extending and retracting reach.
4. **Wrist Pitch**: Keeping the gripper vertical.
5. **Gripper**: The end effector used to grab the LEGO piece.


## 8-Week Roadmap
| Week | Focus | Key Deliverables |
| :--- | :--- | :--- |
| **2** | **Setup** | IDE configuration, GitHub repository creation, and library research. |
| **3** | **Integration** | Wiring the ESP32 to the PCA9685 and testing the first servo motor. |
| **4** | **Movement** | Implementing smooth, 1-degree-at-a-time stepping functions to prevent jitter. |
| **5** | **Calibration** | Recording specific "Rest," "Pick Up," and "Drop Off" waypoints. |
| **6** | **Logic** | Programming the main autonomous loop and gripper sequencing. |
| **7-8** | **Testing** | Final tuning, bug fixing, and the project demonstration. |

<!-- ## Features: "Save / Play" Mode
While the arm supports pre-programmed locations, we utilize a **State Machine** to allow manual recording via physical potentiometers:

* **Record Mode**: Use 4 physical knobs (potentiometers) to pose the arm in real-time.
* **Save**: Press the "Save" button to store the current joint angles into a memory array.
* **Play**: Press "Play" to watch the arm autonomously execute the saved sequence smoothly. -->

## License
This project is licensed under the **MIT License** — feel free to use, modify, and share!

---
*Developed for the [horizons] Robotics Program (2026).*