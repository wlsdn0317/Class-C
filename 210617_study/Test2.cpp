#include "Test2.h"
#include "Test1.h"
#include <stdio.h>

Test2::Test2()
{
	t = new Test1;
	//c����� malloc�� ����
	i = 2;
}

void Test2::print()
{
	printf("test 1�� ���� %d", t->i);
}
