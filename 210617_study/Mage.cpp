#include "Mage.h"

Mage::Mage()
{
	str = 5;
	dex = 25;
	wis = 35;
	hp = 20;
	mp = 50;	
	strcpy(name, "������");
}

void Mage::attack()
{
	printf("�����̷� �����մϴ�.\n");
}

void Mage::skill()
{
	printf("���׿��� ����մϴ�.\n");
}
