#include "stPotion.h"
#include "myPlayer.h"


stPotion::stPotion()
{
	strcpy(item_name, "스테미너포션");
	strcpy(item_story, "스테미너를 회복시키는 포션");
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
	printf("%s을/를 마셨습니다\n", item_name);
	printf("%s 의 스테미너가 %d 회복되었습니다.\n", target->name, heal_point);
	count--;
	target->st += heal_point;
	printf("현재 %s 의 스테미너는 %d 입니다.\n", target->name, target->st);
	printf("%d번 사용 횟수가 남았습니다.\n", count);

}
