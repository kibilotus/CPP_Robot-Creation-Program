#ifndef ROBOT_H
#define ROBOT_H


class Robot {
	Robot* next;
protected:
	
	virtual void Skill_1() = 0;
	virtual void Skill_2() = 0;
	virtual void Skill_3() = 0;

public:
	Robot();
	virtual ~Robot();
	void Skill();
	Robot* add(Robot* p);
	Robot* getNext();

};


#endif