#include "item.h"
#pragma once


class potion : public item
{
public:
	potion();
	
	~potion();


	int heal_point; //������ ȸ����
	virtual void item_use(myPlayer* target);
	virtual void rare_item(int i); //������ ������ �ٲ��ִ� �Լ�




};

