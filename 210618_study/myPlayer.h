#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "item.h"
#pragma once
class myPlayer
{
public:
	myPlayer();
	~myPlayer();

	int hp;
	int mp;
	int st;
	char name[256];


	item* inventory[5];//아이템을 저장하는 아이템 배열


	virtual void useMyitem(int index);
	//몇번 인벤토리에 있는 아이템을 사용할지
	//매개변수로 받는 아이템 사용 함수
};

