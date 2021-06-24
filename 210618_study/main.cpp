#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "class1.h"
#include "item.h"
#include "potion.h"
#include "hpPotion.h"
#include "myPlayer.h"
#include <stdlib.h>
#include <time.h>
#include "CHero.h"
#include "Cmage.h"
#include "CWarrior.h"
#include "CMonster.h"
void amstudy() {
	myPlayer player1;
	myPlayer player2;

	int input;
	int i;
	while (1) {

		printf("����� �κ��丮 ��ȣ�� �Է��ϼ��� : ");
		scanf(" %d", &input);
		player1.useMyitem(input);
		printf("\n");
		printf("2���� ü���� %d\n", player2.hp);

	}

	/*
		1.���׹̳� ������ ����� �÷��̾��� �κ��丮�� �߰��ؼ�
		���׹̳� ������ ����Ͽ� ȿ���� ����Ǵ��� Ȯ���غ���.

		2.ü��/���������� ������ �ø���.
		�ű� Ŭ������ ������ �ʰ� ���� Ŭ��������
		��ġ���� �ٸ��� ������ �� �ֵ��� ������ ���ĺ���.
		hint. �Լ��� Ȱ���غ���.

	*/
}



void battle(CHero* hero, CMonster* mob) {
	while (1) {
		printf("������ �Ͻðڽ��ϱ�?\n");
		printf("1)���� 2)��ų 3)������\n");
		int input;
		scanf(" %d", &input);

		switch (input)
		{
		case 1: {
			int dam = hero->attack();
			mob->damage(dam);
			break; }
		case 2: {
			int dam = hero->skill(1);
			mob->damage(dam);
			break;
		}
		case 3:
			break;
		default:
			break;
		}
		//hero �� ����
		
		printf("\n\n");
		if (mob->hp <= 0) {
			hero->levelUp(mob->exp);
			return;
		}
		//���Ͱ� ��������� ������ ���� ������� �ʰ�
		//��Ʋ�� ����ȴ�.

		int m_dam = mob->attack();
		hero->damaged(m_dam);
		//���� �� ����

		if (hero->hp <= 0)
			return;
		printf("\n\n");
	}
}













int main() {
	srand(time(0));
	//seed random;
	//������ ���ڸ� ���鶧 ������ �Ǵ� ����
	//�ٲ��ִ� �Լ�
	//�Ϲ������δ� ���ذ��� ���� �ð����� ��´�.

	//srand�� �ݺ��ؼ� ����ϸ�
	//�Ź� ������ �ٽ� 

	char c[256];
	printf("�÷��̾��� �̸��� �Է��ϼ���.\n");
	scanf(" %s", &c);

	printf("�÷��̾��� ������ �����ϼ���. \n1)���� 2)������\n");
	int job;
	scanf(" %d", &job);

	CHero* hero;
	if (job == 1) {
		hero = new CWarrior(c);
	}
	else if (job == 2) {
		hero = new CMage(c);
	}
	else {
		hero = new CHero();
	}
	
	CMonster* mob[5];
	for (int i = 0; i < 5; i++) {
		mob[i] = new CMonster();
	}

	for (int i = 0; (i < 5)&&(hero->hp>0);i++) {
		battle(hero, mob[i]);
	}
	
	//�Ű������� �Է��� �� ����� �ϳ���
	//���������� ������ �ݺ��ȴ�.

			
}