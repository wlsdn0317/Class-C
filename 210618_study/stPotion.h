#include "potion.h"

#pragma once
class stPotion : public potion
{
public:
	stPotion();
	~stPotion();

	virtual void item_use(myPlayer* target);
};

