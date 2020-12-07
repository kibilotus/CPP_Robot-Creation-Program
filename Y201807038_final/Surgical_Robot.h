#ifndef SURGICAL_ROBOT_H
#define SURGICAL_ROBOT_H
#include "Industrial_Robot.h"

class Surgical_Robot : public Industrial_Robot {
protected:
	virtual void Skill_1();
	virtual void Skill_2();
	virtual void Skill_3();
};
#endif
