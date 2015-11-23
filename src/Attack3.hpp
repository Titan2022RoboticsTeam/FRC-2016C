/*
 * Attack3.h
 *
 *  Created on: Nov 22, 2015
 *      Author: nick
 */
#include "Robot.hpp"
#include <Joystick.h>
#ifndef SRC_ATTACK3_HPP_
#define SRC_ATTACK3_HPP_

class Attack3: public Joystick{
public:
	Attack3(int port): Joystick(port) {};
	virtual ~Attack3() {};
	float GetXAxis(){
		return GetAxis(kXAxis);
	}
	float GetYAxis(){
		return GetAxis(kYAxis);
	}
	float GetZAxis(){
		return GetAxis(kZAxis);
	}
	float GetTwistAxis(){
		return 0;//Attack 3 has no twist//return GetAxis(kTwistAxis);
	}
};

#endif /* SRC_ATTACK3_HPP_ */
