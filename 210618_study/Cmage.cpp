#include "Cmage.h"
#include "mpPotion.h"
CMage::CMage()
{
	level = 1;
	str = 5;
	dex = 5;
	wis = 30;
	hp = 20;
	mp = 50;
	mHp = hp;
	mMp = mp;
	exp = 0;
	inventory[1] = new mpPotion();
}

CMage::CMage(char insert_name[256])
{
	strcpy(name, insert_name);
	level = 1;
	str = 5;
	dex = 5;
	wis = 30;
	hp = 20;
	mp = 50;
	mHp = hp;
	mMp = mp;
	exp = 0;
	inventory[1] = new mpPotion();

	printf("������ %s�� ����������ϴ�.\n", insert_name);
}

int CMage::attack()
{
	int i = rand () % 100;
	int mydamage = wis;
	if (i < 20) {
		mydamage *= 2;
		printf("ũ��Ƽ��!\n");
	}
	else {
		printf("��������Ʈ�� �����մϴ�.\n");
	}

	return mydamage;
}

int CMage::skill(int i)
{
	int mydamage = wis;
	int j = rand() % 100;
	if (i == 1) {

	}
}

