#include "myStatic.h"

int myStatic::i2 = 1;

void myStatic::myFunc()
{
	cout << "일반함수 입니다" << endl;
}

void myStatic::myFunc2()
{
	cout << "정적함수 입니다" << endl;
}
