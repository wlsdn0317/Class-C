#include "Hero.h"



Hero::Hero()
{
	str = 5;
	dex = 5;
	wis = 5;
	hp = 10;
	mp = 10;
	exp = 0;
	gold = 100;
	strcpy(name, "���");


}

void Hero::info()
{
	printf("ĳ���͸�:%s\n", name);
	printf("ü��:%d\n����:%d\n",hp,mp);
	printf("��:%d\n��:%d\n��:%d\n",str,dex,wis);
	printf("����ġ:%f\n�����ݾ�:%d\n",exp,gold);
	
}

void Hero::attack()
{
	printf("�ָ����� �����մϴ�.\n");
}

void Hero::skill()
{
	printf("��ġ�⸦ �մϴ�.\n");
}

void Hero::damage(int i)
{
	printf("%d�� ���ظ� �Ծ����ϴ�.\n");
	hp -= i;
	printf("���� ���� ü���� %d�Դϴ�.\n", hp);
	
	if (hp <= 0)
		die(); //�������� �Ծ� ü���� 0�� �Ǹ� �ڵ����� die�Լ��� ȣ���.
}

void Hero::die()
{
	printf("�÷��̾ ����߽��ϴ�.\n");
}

