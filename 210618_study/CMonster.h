#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma once

class CMonster
{
public:
	CMonster();

	int str;
	int hp;
	float exp;

	int attack();
	void damage(int dam);
	void die();
};

