#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma once
class Hero
{
public:
	int str;
	int dex;
	int wis;
	int hp;
	int mp;
	float exp;
	int gold;
	char name[256];
	void info();
	virtual void attack();
	virtual void skill();
	//가상함수
	//부모 클래스에 자식 클래스를 대입하더라도
	//겉모습이 부모클래스이기 때문에 함수를 실행하면
	//부모클래스를 기준으로 하여 실행이 된다.
	//따라서 겉모습이 아니라 실제 들어 있는 데이터를 기준으로
	//함수가 동작해주도록 하기 위해서 해당 함수를
	//내용물을 기준을 동작하도록'가상함수'를 선언할 수 있다.
	//함수 선언 앞에virtual을 붙여주면 된다.
	
	void damage(int i);

private:
	void die();//사망 함수는 외부에서 부르는게 아니라
	//플레이어의 체력이 0이하가 되면 자동으로 호출되기 때문에
	//private으로 선언해서 외부에서 강제로 실행하지 못하도록 막았다.

public:
	Hero();
};

