#include"CHero.h"
#pragma once
class CMage : public CHero
{
public:
	CMage();
	CMage(char insert_name[256]);

	int attack();
	int skill(int i);
};
