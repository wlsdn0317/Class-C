#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>

class myList
{
public: //���� ����Ʈ
	void push();
	void front(); //ťó�� �տ��� �����͸� ������ �Լ�
	void back(); //����ó�� �ڿ��� �����͸� ������ �Լ�

	void insert(); // �߰��� �����ϴ� �Լ�
	void remove(); //�߰����� �����ϴ� �Լ�
	void print();
	int ary[10];
	int top = -1;
};

