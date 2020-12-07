//추상 클래스의 cpp는 구현부가 없을경우 삭제하였습니다. 

#include "pch.h"
#include "Robot.h"
#include "Service_Robot.h"
#include "Personal_Robot.h"
#include "Household_Robot.h"
#include "Education_Robot.h"
#include "Professional_Robot.h"
#include "PublicService_Robot.h"
#include "ExtremeWorking_Robot.h"
#include "Industrial_Robot.h"
#include "Cleaning_Robot.h"
#include "Dog_Robot.h"
#include "AssistedLearning_Robot.h"
#include "Reader_Robot.h"
#include "Guidance_Robot.h"
#include "Military_Robot.h"
#include "Surgical_Robot.h"
#include <iostream>
using namespace std;

int main()
{
	Robot *pStart = NULL;
	Robot *pLast;

	pStart = new Cleaning_Robot();
	pLast = pStart;

	pLast = pLast->add(new Dog_Robot());
	pLast = pLast->add(new AssistedLearning_Robot());
	pLast = pLast->add(new Reader_Robot());
	pLast = pLast->add(new Guidance_Robot());
	pLast = pLast->add(new Military_Robot());
	pLast = pLast->add(new Surgical_Robot());

	Robot* p = pStart;
	while (p != NULL) {
		p->Skill();
		p = p->getNext();
	}

	p = pStart;
	while (p != NULL)
	{
		Robot* q = p->getNext();
		delete p;
		p = q;
	}


	
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
