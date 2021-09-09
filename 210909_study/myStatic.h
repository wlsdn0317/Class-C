#pragma once
#include <iostream>
using namespace std;

class myStatic
{


public:
	int i;
	//동적변수

	static int i2;
	//변수를 생성할때 변수 앞에 static을 붙이면
	//해당 변수는 '정적변수'가 된다.
	//static변수는 일반적인 변수와 다르게
	//오직 하나만 존재할 수 있는 변수를 말한다.
	//같은 변수를 다른곳에서 만들려고 하면
	//새로운 변수를 만드는게 아니라 기존의 변수를 가져와서
	//사용하게 된다.
	//정적변수는 프로그램이 동작하는동안 메모리에 상주한다.
	//프로그램이 꺼질때 메모리가 해제된다.

	void myFunc();
	static void myFunc2();
};

