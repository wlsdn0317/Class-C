#pragma once
#include <stdio.h>
class monster
{
public:

	monster();

	int atk; //���ݷ�
	int def; //����
	int hp; //ü��
	float exp; //�׿�������� ����ġ
	int gold; //�׿����� ��� ���
	
	void attack(); //���Ͱ� �����ϴ� �Լ�
	void damage(int i); //���Ͱ� ���ݹ޾����� ����Ǵ� �Լ�
	void die();  //���Ͱ� �׾����� ����Ǵ� �Լ�


private:
	//private : �ܺο��� ������ �� ����
	//���� �ڱ��ڽŸ� ����� �� �ִ� �����͵��� ����

	float rare_drop;//���� ��� Ȯ��
	void rareGet();//��������� ��� �Լ�


protected:
	//protected: �ܺο����� ������ �� ����
	//�ڱ��ڽŰ� �ڱ��ڽ��� ��ӹ��� �ڽĵ鸸 ����� �� �ִ�
	//�����͵��� ����
	float deadTime; //������ ����ð� (���� �������� �ʿ��� �ð�)




};

