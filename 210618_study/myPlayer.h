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


	item* inventory[5];//�������� �����ϴ� ������ �迭


	virtual void useMyitem(int index);
	//��� �κ��丮�� �ִ� �������� �������
	//�Ű������� �޴� ������ ��� �Լ�
};

