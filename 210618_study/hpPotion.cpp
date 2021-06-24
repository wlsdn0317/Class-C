#include "hpPotion.h"
#include "myPlayer.h"
hpPotion::hpPotion()
{
	strcpy(item_name, "ü������");
	strcpy(item_story, "ü���� ȸ����Ű�� ����");
	heal_point = 15 ;
	cost = 150 ;
	rarelity = 1;
	weight = 0.1f;
	count = 1 ;
	
}

hpPotion::hpPotion(int i)
{

}

hpPotion::~hpPotion()
{
}

void hpPotion::item_use(myPlayer* target)
{
	
	printf("%s��/�� ���̽��ϴ�.\n", item_name);
	printf("%s �� ü���� %d ȸ���Ǿ����ϴ�.\n",target->name, heal_point);
	count--;
	target->hp += heal_point;
	printf("���� %s �� ü���� %d�Դϴ�.\n", target->name, target->hp);

}

void hpPotion::rare_item(int i)
{
	
	if (i == 1) {
		strcpy(item_name, "ü������");
		strcpy(item_story, "ü���� ȸ����Ű�� ����");
	}
	else if (i == 2) {
		strcpy(item_name, "���ü������");
		strcpy(item_story, "ü���� ���� ȸ����Ű�� ����");
	}
	else if (i == 3) {
		strcpy(item_name, "�ְ��ü������");
		strcpy(item_story, "ü���� ���� ���� ȸ����Ű�� ����");
	}
	else {
		printf("���� �Լ��Դϴ�.\n");
	}
	heal_point = 15*i;
	cost = 150*i;
	rarelity = 1*i;
	weight = 0.1f*i;
	count = 1*i;
}
