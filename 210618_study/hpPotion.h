#include "potion.h"
#pragma once

class hpPotion : public potion
{
public:
	hpPotion();
	hpPotion(int i);
	~hpPotion();
	
	virtual void item_use(myPlayer* target);
	virtual void rare_item(int i); //������ ������ �ٲ��ִ� �Լ�

};

