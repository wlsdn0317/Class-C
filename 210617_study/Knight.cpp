#include "Knight.h"

Knight::Knight()
{
	str = 25;
	dex = 15;
	wis = 5;
	hp = 50;
	mp = 10;	
	strcpy(name, "���");
}

void Knight::attack()
{
	printf("����� �ֵѷ� �����մϴ�.\n");
}

void Knight::skill()
{
	printf("�Ŀ��������� ����մϴ�.\n");
}
