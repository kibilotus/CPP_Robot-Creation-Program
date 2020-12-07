#ifndef GUIDANCE_ROBOT_H
#define GUIDANCE_ROBOT_H
#include "PublicService_Robot.h"

class Guidance_Robot:public PublicService_Robot {
protected:
	virtual void Skill_1();
	virtual void Skill_2();
	virtual void Skill_3();
};


#endif
