#ifndef EDUCATION_ROBOT_H
#define EDUCATION_ROBOT_H
#include "Personal_Robot.h"

class Education_Robot :public Personal_Robot {

protected:
	virtual void Skill_1() = 0;
	virtual void Skill_2() = 0;
	virtual void Skill_3() = 0;

};


#endif