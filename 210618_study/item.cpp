#include "item.h"
#include "myPlayer.h"

item::item()
{
	strcpy(item_name, "�׽�Ʈ������");
	cost = 100;
	strcpy(item_story, "���丮�׽�Ʈ");
	count = 1;

	weight = 0.5f;
	rarelity = 1;

}

item::~item()
{
}

void item::info()
{
	printf("�����۸�\t:%s\n", item_name);
	printf("���\t\t:%d\n", rarelity);
	printf("����\t\t:%d\n", cost);
	printf("����\t\t:%f\n", weight);
	printf("������\t\t:%d\n", count);
	printf("����\t\t:%s\n\n", item_story);
}

void item::item_use(myPlayer* target)
{
	printf("%s���� �������� ����߽��ϴ�.\n",target->name);
}

void item::rare_item(int i)
{
}
