/*
 * XboxController.hpp
 *
 *  Created on: Nov 22, 2015
 *      Author: nick
 */

#ifndef SRC_XBOXCONTROLLER_HPP_
#define SRC_XBOXCONTROLLER_HPP_

#include <Joystick.h>
class XboxController: public Joystick {
public:
// Axes
	static const int AXIS_LEFT_X = 0;
	static const int AXIS_LEFT_Y = 1;
	static const int AXIS_RIGHT_X = 4;
	static const int AXIS_RIGHT_Y = 5;
	static const int TRIGGER_LEFT = 2;
	static const int TRIGGER_RIGHT = 3;
// Buttons
	static const int BUTTON_A = 1;
	static const int BUTTON_B = 2;
	static const int BUTTON_X = 3;
	static const int BUTTON_Y = 4;
	static const int BUMPER_LEFT = 5;
	static const int BUMPER_RIGHT = 6;
	static const int BUTTON_BACK = 7;
	static const int BUTTON_START = 8;
//Functions
	XboxController(int port): Joystick(port){}
	//WARNING: Do not inherit from this, or MS will be unhappy
	~XboxController(){}
	//Axis Readers - the inlining is intentional
	double GetLeftX(){
		return GetRawAxis(AXIS_LEFT_X);
	}
	double GetLeftY(){
		return GetRawAxis(AXIS_LEFT_Y);
	}
	double GetRightX(){
		return GetRawAxis(AXIS_RIGHT_X);
	}
	double GetRightY(){
		return GetRawAxis(AXIS_RIGHT_Y);
	}
	double GetRightTrigger(){
		return GetRawAxis(TRIGGER_RIGHT);
	}
	double GetLeftTrigger(){
		return GetRawAxis(TRIGGER_LEFT);
	}
	//button readers
	bool IsAPressed(){
		return GetRawButton(BUTTON_A);
	}
	bool IsBPressed(){
		return GetRawButton(BUTTON_B);
	}
	bool IsXPressed(){
		return GetRawButton(BUTTON_X);
	}
	bool IsYPressed(){
		return GetRawButton(BUTTON_Y);
	}
	bool IsBackPressed(){
		return GetRawButton(BUTTON_BACK);
	}
	bool IsStartPressed(){
		return GetRawButton(BUTTON_START);
	}
	bool IsLeftBumperPressed(){
		return GetRawButton(BUMPER_LEFT);
	}
	bool IsRightBumperPressed(){
		return GetRawButton(BUMPER_RIGHT);
	}
};

#endif /* SRC_XBOXCONTROLLER_HPP_ */
