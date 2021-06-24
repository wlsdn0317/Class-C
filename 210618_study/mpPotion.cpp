#include "mpPotion.h"
#include "myPlayer.h"

mpPotion::mpPotion()
{
	strcpy(item_name, "��������");
	strcpy(item_story, "������ ȸ����Ű�� ����");
	heal_point = 10;
	cost = 250;
	rarelity = 1;
	weight = 0.1f;
	count = 1;
}

mpPotion::mpPotion(int i)
{
	if (i == 1) {
		strcpy(item_name, "��������");
		strcpy(item_story, "������ ȸ����Ű�� ����");
	}
	else if(i == 2) {
		strcpy(item_name, "��޸�������");
		strcpy(item_story, "������ ���� ȸ����Ű�� ����");
	}
	else if (i == 3) {
		strcpy(item_name, "�ְ�޸�������");
		strcpy(item_story, "������ ���� ���� ȸ����Ű�� ����");
	}
	heal_point = 10*i;
	cost = 250 * i;
	rarelity = 1 * i;
	weight = 0.1f * i;
	count = 1 * i;
}

mpPotion::~mpPotion()
{
}

void mpPotion::item_use(myPlayer* target)
{
	printf("%s��/�� ���̽��ϴ�.\n", item_name);
	printf("%s �� ������ %d ȸ���Ǿ����ϴ�.\n", target->name, heal_point);
	count--;
	target->mp += heal_point;
	printf("���� %s �� ������ %d�Դϴ�.\n", target->name, target->mp);

}

