#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma once
class myStack
{
public:
	myStack();

	int myData[10];//�����͸� ������ �迭
	int index =0;
	int num;
	void push();
	void pop();
	void check();
	
};

