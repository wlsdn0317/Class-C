#include "mpPotion.h"
#include "myPlayer.h"

mpPotion::mpPotion()
{
	strcpy(item_name, "마력포션");
	strcpy(item_story, "마력을 회복시키는 포션");
	heal_point = 10;
	cost = 250;
	rarelity = 1;
	weight = 0.1f;
	count = 1;
}

mpPotion::mpPotion(int i)
{
	if (i == 1) {
		strcpy(item_name, "마력포션");
		strcpy(item_story, "마력을 회복시키는 포션");
	}
	else if(i == 2) {
		strcpy(item_name, "고급마력포션");
		strcpy(item_story, "마력을 많이 회복시키는 포션");
	}
	else if (i == 3) {
		strcpy(item_name, "최고급마력포션");
		strcpy(item_story, "마력을 아주 많이 회복시키는 포션");
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
	printf("%s을/를 마셨습니다.\n", item_name);
	printf("%s 의 마력이 %d 회복되었습니다.\n", target->name, heal_point);
	count--;
	target->mp += heal_point;
	printf("현재 %s 의 마력은 %d입니다.\n", target->name, target->mp);

}

