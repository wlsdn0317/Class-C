#include "stPotion.h"
#include "myPlayer.h"


stPotion::stPotion()
{
	strcpy(item_name, "���׹̳�����");
	strcpy(item_story, "���׹̳ʸ� ȸ����Ű�� ����");
	heal_point = 70;
	cost = 200;
	rarelity = 1;
	weight = 0.1f;
	count = 3;
}

stPotion::~stPotion()
{
}

void stPotion::item_use(myPlayer* target)
{
	printf("%s��/�� ���̽��ϴ�\n", item_name);
	printf("%s �� ���׹̳ʰ� %d ȸ���Ǿ����ϴ�.\n", target->name, heal_point);
	count--;
	target->st += heal_point;
	printf("���� %s �� ���׹̳ʴ� %d �Դϴ�.\n", target->name, target->st);
	printf("%d�� ��� Ƚ���� ���ҽ��ϴ�.\n", count);

}
