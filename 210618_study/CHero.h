#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "item.h"
#include <stdlib.h>
#pragma once
class CHero
{
public:
	CHero();
	CHero(char insert_name[256]);
	

	char name[256];
	int level;
	int str;
	int dex;
	int wis;
	int hp;
	int mp;
	int mHp, mMp;//최대체력,마력
	float exp;
	item* inventory[5];

	void info();
	virtual int attack();
	void damaged(int damage);
	void die();
	void levelUp(float i);
	virtual int skill(int i);
};

