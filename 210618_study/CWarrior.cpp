#include "CWarrior.h"
#include"hpPotion.h"

CWarrior::CWarrior()
{
	level = 1;
	str = 15;
	dex = 5;
	wis = 3;
	hp = 40;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;

	inventory[1] = new hpPotion();
}

CWarrior::CWarrior(char insert_name[256])
{
	strcpy(name, insert_name);
	level = 1;
	str = 15;
	dex = 5;
	wis = 3;
	hp = 40;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;

	inventory[1] = new hpPotion();

	printf("���� %s�� ����������ϴ�.\n",insert_name);
}

int CWarrior::attack()
{
	int i = rand() % 100;
		
	int myDamage = str;
	if (i < 20) {
		myDamage *= 2;
		printf("ũ��Ƽ��! ���簡 Į�� ũ�� �ֵθ��ϴ�.!\n");
	}
	else {
		printf("���簡 Į�� �����մϴ�.\n");
	}


	return myDamage;
}

int CWarrior::skill(int i)
{
	int j = rand() % 100;
	int myDamage = str;
	if (i == 1) {
		if (mp >= 10) {
			mp -= 10;
			if (j < 20) {
				myDamage *= 2;
				printf("ũ��Ƽ��!\n");
			}			
			printf("������ ��Ʈ����ũ!\n");
			printf("���� ����:%d\n", mp);
			return myDamage * 3;
		}
		else {
			printf("������ �����Ͽ� ��ų�� �ҹߵ˴ϴ�.\n");
			return 0;
		}
		
	}
	else {
		printf("�ش� ��ų�� �������� �ʽ��ϴ�.\n");
		return 0;
	}

}
