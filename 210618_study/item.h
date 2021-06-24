#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma once

class myPlayer; //상호참조를 막기 위해서
				//myPlayer 클래스를 선언만 하고
				//실제 인클루드는 cpp에서 해준다.


class item
{
public:
	item();
	~item();

	char item_name[256];	//아이템이름
	int cost;				//아이템가격
	char item_story[256];	//아이템스토리(설명)
	int count;				//아이템 갯수

	float weight;			//아이템 무게
	int rarelity;			//아이템희귀도

	void info();			//아이템 정보 출력 함수
	virtual void item_use(myPlayer* target);		//아이템 사용 함수
	virtual void rare_item(int i); //아이템의 성능을 바꿔주는 함수






};

