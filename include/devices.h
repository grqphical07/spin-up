#include "main.h"
using namespace okapi;

// Header file for all motors, controller buttons, sensors and, the chassis class

// List of ports for the primary drivetrain
inline int FrontLeft = 7;
inline int FrontRight = 10;
inline int BackLeft = -12;
inline int BackRight = -11;

// Chassis class for the drivetrain as well as an instance of the controller
inline Controller controller;
inline std::shared_ptr<OdomChassisController> drive = ChassisControllerBuilder()
.withMotors(
    FrontLeft, 
    BackLeft, 
    FrontRight, 
    BackRight)
.withDimensions(
    AbstractMotor::gearset::green, 
    {
        {4_in, 11.5_in}, imev5GreenTPR
        })
.withOdometry()
.buildOdometry();
