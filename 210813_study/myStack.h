#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma once
class myStack
{
public:
	myStack();

	int myData[10];//데이터를 저장할 배열
	int index =0;
	int num;
	void push();
	void pop();
	void check();
	
};

