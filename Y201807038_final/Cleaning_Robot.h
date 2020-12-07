#ifndef CLEANING_ROBOT_H
#define CLEANING_ROBOT_H
#include "Household_Robot.h"

class Cleaning_Robot:public Household_Robot {
protected:
	virtual void Skill_1();
	virtual void Skill_2();
	virtual void Skill_3();

};


#endif
