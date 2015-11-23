/*
 * Titan Robotics (Team 2022) FRC 2016-C++ code
 *
 * Robot.cpp
 *
 *  Created on: Nov 22, 2015
 *      Author: nick
 */
#include "WPILib.h"
#include "Robot.hpp"
#include "XboxController.hpp"
#include "Attack3.hpp"
#include <math.h>
class Robot: public IterativeRobot
{
public:
	//this makes writing the drive code trivial
	RobotDrive drive;
	XboxController xbox;
	Attack3 attack3, attack4;
private:
	//DON'T Mess with the live window
	LiveWindow *lw;

	void RobotInit()
	{
		lw = LiveWindow::GetInstance();
		//this probably is not valid, but I'd rather avoid pointers
		drive = RobotDrive(front_left_motor, back_left_motor, front_right_motor, back_right_motor);
		xbox = XboxController(xbox_port);
		attack3 = Attack3(attack3_port);
		attack4 = Attack3(attack4_port);
	}

	void AutonomousInit()
	{
		//
	}

	void AutonomousPeriodic()
	{

	}

	void TeleopInit()
	{

	}

	void TeleopPeriodic()
	{
		//this function is periodically called during the teleop period
		//put repeated actions in here
		/** DRIVE **/
		//drive example
		drive.TankDrive(xbox.GetLeftY(), xbox.GetRightY());
		//alternate example drive
 		float direction = (float)atan2(attack3.GetX(), attack3.GetY());
		float rotation = (float)atan2(attack4.GetX(), attack4.GetY());
		drive.HolonomicDrive(xbox.GetLeftY(), direction, rotation);
	}

	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);
