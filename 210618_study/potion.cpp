#include "potion.h"

potion::potion()
{
	strcpy(item_name, "포션");
	strcpy(item_story, "정체를 알 수 없는 포션");
	heal_point = 10; //회복량 초깃값
}

potion::~potion()
{
}

void potion::item_use(myPlayer* target)
{
	printf("포션을 마셨습니다.\n");
	count--;
}

void potion::rare_item(int i)
{
}
