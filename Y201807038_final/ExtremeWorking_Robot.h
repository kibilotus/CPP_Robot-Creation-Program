#ifndef EXTREMEWORKING_ROBOT_H
#define EXTREMEWORKING_ROBOT_H
#include "Professional_Robot.h"

class ExtremeWorking_Robot :public Professional_Robot {

protected:
	virtual void Skill_1() = 0;
	virtual void Skill_2() = 0;
	virtual void Skill_3() = 0;

};

#endif