#include "CHero.h"
#pragma once
class CWarrior : public CHero

{
public:
	CWarrior();
	CWarrior(char insert_name[256]);

	virtual int attack();
	virtual int skill(int i);
};

