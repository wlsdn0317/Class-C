#include "hpPotion.h"
#include "myPlayer.h"
hpPotion::hpPotion()
{
	strcpy(item_name, "체력포션");
	strcpy(item_story, "체력을 회복시키는 포션");
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
	
	printf("%s을/를 마셨습니다.\n", item_name);
	printf("%s 의 체력이 %d 회복되었습니다.\n",target->name, heal_point);
	count--;
	target->hp += heal_point;
	printf("현재 %s 의 체력은 %d입니다.\n", target->name, target->hp);

}

void hpPotion::rare_item(int i)
{
	
	if (i == 1) {
		strcpy(item_name, "체력포션");
		strcpy(item_story, "체력을 회복시키는 포션");
	}
	else if (i == 2) {
		strcpy(item_name, "고급체력포션");
		strcpy(item_story, "체력을 많이 회복시키는 포션");
	}
	else if (i == 3) {
		strcpy(item_name, "최고급체력포션");
		strcpy(item_story, "체력을 아주 많이 회복시키는 포션");
	}
	else {
		printf("없는 함수입니다.\n");
	}
	heal_point = 15*i;
	cost = 150*i;
	rarelity = 1*i;
	weight = 0.1f*i;
	count = 1*i;
}
