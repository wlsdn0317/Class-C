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
	strcpy(name, "백수");


}

void Hero::info()
{
	printf("캐릭터명:%s\n", name);
	printf("체력:%d\n마력:%d\n",hp,mp);
	printf("힘:%d\n민:%d\n지:%d\n",str,dex,wis);
	printf("경험치:%f\n보유금액:%d\n",exp,gold);
	
}

void Hero::attack()
{
	printf("주먹으로 공격합니다.\n");
}

void Hero::skill()
{
	printf("박치기를 합니다.\n");
}

void Hero::damage(int i)
{
	printf("%d의 피해를 입었습니다.\n");
	hp -= i;
	printf("현재 남은 체력은 %d입니다.\n", hp);
	
	if (hp <= 0)
		die(); //데미지를 입어 체력이 0이 되면 자동으로 die함수가 호출됨.
}

void Hero::die()
{
	printf("플레이어가 사망했습니다.\n");
}

