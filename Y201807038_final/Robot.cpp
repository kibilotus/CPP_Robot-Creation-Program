#include "pch.h"
#include "Robot.h"
#include<iostream>

using namespace std;

Robot::Robot() {
	next = NULL;
}


Robot::~Robot() {}


void Robot::Skill() {
	Skill_1();
	Skill_2();
	Skill_3();
}

Robot* Robot::add(Robot* p){
	this->next = p;
	return p;
}

Robot* Robot::getNext() {
	return next;
}


