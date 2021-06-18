#include "Knight.h"

Knight::Knight()
{
	str = 25;
	dex = 15;
	wis = 5;
	hp = 50;
	mp = 10;	
	strcpy(name, "기사");
}

void Knight::attack()
{
	printf("대검을 휘둘러 공격합니다.\n");
}

void Knight::skill()
{
	printf("파워슬래쉬를 사용합니다.\n");
}
