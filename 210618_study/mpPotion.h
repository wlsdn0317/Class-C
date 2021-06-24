#include "potion.h"
#pragma once

class mpPotion : public potion
{
public:
	mpPotion();
	mpPotion(int i);
	~mpPotion();
	virtual void item_use(myPlayer* target);
};

