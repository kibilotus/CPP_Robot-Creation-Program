#ifndef SERVICE_ROBOT_H
#define SERVICE_ROBOT_H
#include "Robot.h"

class Service_Robot :public Robot{

protected:
	virtual void Skill_1() = 0;
	virtual void Skill_2() = 0;
	virtual void Skill_3() = 0;

};

#endif // !SERVICE_ROBOT
