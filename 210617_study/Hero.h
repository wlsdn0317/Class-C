#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma once
class Hero
{
public:
	int str;
	int dex;
	int wis;
	int hp;
	int mp;
	float exp;
	int gold;
	char name[256];
	void info();
	virtual void attack();
	virtual void skill();
	//�����Լ�
	//�θ� Ŭ������ �ڽ� Ŭ������ �����ϴ���
	//�Ѹ���� �θ�Ŭ�����̱� ������ �Լ��� �����ϸ�
	//�θ�Ŭ������ �������� �Ͽ� ������ �ȴ�.
	//���� �Ѹ���� �ƴ϶� ���� ��� �ִ� �����͸� ��������
	//�Լ��� �������ֵ��� �ϱ� ���ؼ� �ش� �Լ���
	//���빰�� ������ �����ϵ���'�����Լ�'�� ������ �� �ִ�.
	//�Լ� ���� �տ�virtual�� �ٿ��ָ� �ȴ�.
	
	void damage(int i);

private:
	void die();//��� �Լ��� �ܺο��� �θ��°� �ƴ϶�
	//�÷��̾��� ü���� 0���ϰ� �Ǹ� �ڵ����� ȣ��Ǳ� ������
	//private���� �����ؼ� �ܺο��� ������ �������� ���ϵ��� ���Ҵ�.

public:
	Hero();
};

