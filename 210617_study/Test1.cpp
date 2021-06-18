#include "Test1.h"
#include "Test2.h"
#include <stdio.h>

Test1::Test1()
{
	tt = new Test2;
	i = 1;
}

void Test1::print()
{
	printf("test 2ÀÇ °ªÀº %d", tt->i);
}

