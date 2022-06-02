#include "main.h"
#include "devices.h"

// Used to initalize devices/buttons
int8_t FrontLeft = 1;
int8_t FrontRight = 2;
int8_t BackLeft = -3;
int8_t BackRight = -4;
okapi::Motor Lift (5);
okapi::ControllerButton upButton (ControllerDigital::R1);
okapi::ControllerButton downButton (ControllerDigital::R2);
std::shared_ptr<ChassisController> drive = ChassisControllerBuilder().withMotors({FrontLeft, BackLeft}, {FrontRight, BackRight}).withDimensions(AbstractMotor::gearset::green, {{4_in, 11.5_in}, imev5GreenTPR}).build();