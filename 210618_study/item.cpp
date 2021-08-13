#include "item.h"
#include "myPlayer.h"

item::~item()
{
}

void item::info()
{
	printf("아이템명\t:%s\n", item_name);
	printf("레어도\t\t:%d\n", rarelity);
	printf("가격\t\t:%d\n", cost);
	printf("무게\t\t:%f\n", weight);
	printf("보유수\t\t:%d\n", count);
	printf("설명\t\t:%s\n\n", item_story);
}

void item::item_use(myPlayer* target)
{
	printf("%s에게 아이템을 사용했습니다.\n",target->name);
}

void item::rare_item(int i)
{
}
