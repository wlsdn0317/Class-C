#pragma once
#include <stdio.h>

class CUser
{
public:

	//Ŭ������ �����ڿ� �Ҹ��ڴ�
	//�ش� Ŭ������ ������ �Ҹ�ܰ迡��
	//������ ������ ������ ���ٸ�
	//������ �����ϴ�.
	CUser();
	int hp;
	int mp;
	void printInfo();



	void useItem(int i);

};

