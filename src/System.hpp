/*
 * System.hpp
 *
 *  Created on: Nov 22, 2015
 *      Author: nick
 */

#ifndef SRC_SYSTEM_HPP_
#define SRC_SYSTEM_HPP_

class System {
public:
	System();
	virtual ~System();
	virtual void init() = 0;
	virtual void periodic() = 0;
};

#endif /* SRC_SYSTEM_HPP_ */
