#include "potion.h"
#pragma once

class hpPotion : public potion
{
public:
	hpPotion();
	hpPotion(int i);
	~hpPotion();
	
	virtual void item_use(myPlayer* target);
	virtual void rare_item(int i); //포션의 성능을 바꿔주는 함수

};

