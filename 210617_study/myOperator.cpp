#include "myOperator.h"

myOperator::myOperator()
{
	x = 500;
}

int myOperator::operator+(int i)
{
	x = x + i;
	return x;
}
