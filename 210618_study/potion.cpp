#include "potion.h"

potion::potion()
{
	strcpy(item_name, "����");
	strcpy(item_story, "��ü�� �� �� ���� ����");
	heal_point = 10; //ȸ���� �ʱ갪
}

potion::~potion()
{
}

void potion::item_use(myPlayer* target)
{
	printf("������ ���̽��ϴ�.\n");
	count--;
}

void potion::rare_item(int i)
{
}
