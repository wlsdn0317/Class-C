#pragma once
#include "headers.h"

class MyQueue_1
{
public:
	int ary[10];
	int front = 0; //�Ǿ��ǵ�����
	int rear = 0; //�ǵ��ǵ�����
	void push();
	void pop();
	void print();

	//�����Ͱ� �ϳ��� ������ 
	// ==ó�� �����Ҷ���
	// ==�����͸� ��� pop������ �ΰ��� ���
	// �� ���� ���⶧����
	//�� ���� �ʱⰪ�� ������ ���� �ֱ⸸ �ϸ�ȴ�.
};

