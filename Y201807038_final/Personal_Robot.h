#ifndef PERSONAL_ROBOT_H
#define PERSONAL_ROBOT_H
#include "Service_Robot.h"
class Personal_Robot :public Service_Robot {

protected:
	virtual void Skill_1() = 0;
	virtual void Skill_2() = 0;
	virtual void Skill_3() = 0;

};


#endif