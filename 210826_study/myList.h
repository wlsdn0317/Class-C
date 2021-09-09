#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>

class myList
{
public: //선형 리스트
	void push();
	void front(); //큐처럼 앞에서 데이터를 꺼내는 함수
	void back(); //스택처럼 뒤에서 데이터를 꺼내는 함수

	void insert(); // 중간에 삽입하는 함수
	void remove(); //중간에서 삭제하는 함수
	void print();
	int ary[10];
	int top = -1;
};

