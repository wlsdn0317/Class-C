#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma once

class myPlayer; //��ȣ������ ���� ���ؼ�
				//myPlayer Ŭ������ ���� �ϰ�
				//���� ��Ŭ���� cpp���� ���ش�.


class item
{
public:
	item();
	~item();

	char item_name[256];	//�������̸�
	int cost;				//�����۰���
	char item_story[256];	//�����۽��丮(����)
	int count;				//������ ����

	float weight;			//������ ����
	int rarelity;			//��������͵�

	void info();			//������ ���� ��� �Լ�
	virtual void item_use(myPlayer* target);		//������ ��� �Լ�
	virtual void rare_item(int i); //�������� ������ �ٲ��ִ� �Լ�






};

