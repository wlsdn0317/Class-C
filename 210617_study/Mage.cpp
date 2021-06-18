#include "Mage.h"

Mage::Mage()
{
	str = 5;
	dex = 25;
	wis = 35;
	hp = 20;
	mp = 50;	
	strcpy(name, "마법사");
}

void Mage::attack()
{
	printf("지팡이로 공격합니다.\n");
}

void Mage::skill()
{
	printf("메테오를 사용합니다.\n");
}
