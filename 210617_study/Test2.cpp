#include "Test2.h"
#include "Test1.h"
#include <stdio.h>

Test2::Test2()
{
	t = new Test1;
	//c언어의 malloc과 동일
	i = 2;
}

void Test2::print()
{
	printf("test 1의 값은 %d", t->i);
}
