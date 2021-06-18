#pragma once
#include <stdio.h>

class myOperator
{
public:
	myOperator();

	int x;                                                                                                                                            

	int operator + (int i);
	//연산자 오버로딩
	//기존에 존재하던 연산자에
	//새로운 연산기능을 추가하는 방법
	 
	//해당 연산자 오버로딩과 작성된 클래스와 매개변수간에
	//오버로딩된 연산자로 연산이 가능하도록 만들어줌
};

