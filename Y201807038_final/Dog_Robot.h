#ifndef DOG_ROBOT_H
#define DOG_ROBOT_H
#include "Household_Robot.h"

class Dog_Robot :public Household_Robot {
protected:
	virtual void Skill_1();
	virtual void Skill_2();
	virtual void Skill_3();

};
#endif

