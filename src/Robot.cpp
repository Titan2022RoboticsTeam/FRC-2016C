#include "WPILib.h"
#include "Robot.hpp"
class Robot: public IterativeRobot
{
public:
	RobotDrive drive;
private:
	//DON'T Mess with the live window
	LiveWindow *lw;

	void RobotInit()
	{
		lw = LiveWindow::GetInstance();
		drive = RobotDrive(front_left_motor, back_left_motor, front_right_motor, back_right_motor);
	}

	void AutonomousInit()
	{

	}

	void AutonomousPeriodic()
	{

	}

	void TeleopInit()
	{

	}

	void TeleopPeriodic()
	{

	}

	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);
