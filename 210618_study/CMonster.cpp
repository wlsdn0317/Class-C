#include "CMonster.h"

CMonster::CMonster()
{
	str = 5;
	hp = 30;
	exp = 12;
}

int CMonster::attack()
{
	printf("���Ͱ� �����մϴ�.\n");

	return str;
}

void CMonster::damage(int dam)
{
	printf("���Ͱ� %d��ŭ ���ظ� �Խ��ϴ�.\n",dam);
	hp -= dam;
	if (hp >= dam) {
		printf("���� hp:%d\n", hp);
	}
	else {
		printf("���� hp:0\n");
	}
	if (hp <= 0)
		die();
}

void CMonster::die()
{
	printf("���Ͱ� ���������ϴ�.\n");
}
