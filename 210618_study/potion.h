#include "item.h"
#pragma once


class potion : public item
{
public:
	potion();
	
	~potion();


	int heal_point; //포션의 회복량
	virtual void item_use(myPlayer* target);
	virtual void rare_item(int i); //포션의 성능을 바꿔주는 함수




};

