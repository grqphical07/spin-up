#include "main.h"
#include "okapi/api.hpp"
#include "odommath.h"
#include "devices.h"

using namespace okapi;

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() 
{
    pros::lcd::initialize();
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
 void autonomous(){
    
 }
void opcontrol() {
	
    while (true) {
        // Arcade drive with the left stick on the controller.
        drive->getModel()->arcade(controller.getAnalog(ControllerAnalog::leftY),
                                controller.getAnalog(ControllerAnalog::leftX));
        // Gets current position of the robot and prints it to the LCD
        OdomState state = drive->getState();
        pros::lcd::print(0, "X: %f, Y: %f, Theta: %f", state.x.convert(inch), state.y.convert(inch), state.theta.convert(degree));


        pros::delay(10);
    }
}
