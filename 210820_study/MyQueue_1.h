#pragma once
#include "headers.h"

class MyQueue_1
{
public:
	int ary[10];
	int front = 0; //맨앞의데이터
	int rear = 0; //맨뒤의데이터
	void push();
	void pop();
	void print();

	//데이터가 하나도 없을때 
	// ==처음 시작할때와
	// ==데이터를 모두 pop했을때 두가지 경우
	// 두 값이 같기때문에
	//두 값의 초기값은 같ㅇ느 값을 주기만 하면된다.
};

