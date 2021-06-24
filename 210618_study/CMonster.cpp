#include "CMonster.h"

CMonster::CMonster()
{
	str = 5;
	hp = 30;
	exp = 12;
}

int CMonster::attack()
{
	printf("몬스터가 공격합니다.\n");

	return str;
}

void CMonster::damage(int dam)
{
	printf("몬스터가 %d만큼 피해를 입습니다.\n",dam);
	hp -= dam;
	if (hp >= dam) {
		printf("남은 hp:%d\n", hp);
	}
	else {
		printf("남은 hp:0\n");
	}
	if (hp <= 0)
		die();
}

void CMonster::die()
{
	printf("몬스터가 쓰러졌습니다.\n");
}
