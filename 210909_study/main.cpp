#include "myStatic.h"
#include <iostream>
using namespace std;

int main() {
	myStatic s1;
	myStatic s2;

	s1.i = 10;
	s1.i2 = 20;
	s2.i = 30;
	s2.i2 = 40;



	cout << "s1.i:" << s1.i << endl
		<< "s1.i2:" << s1.i2 << endl;

	cout << "s2.i:" << s2.i << endl
		<< "s2.i2:" << s2.i2 << endl;

	cout << "s1.i의 주소:" << &s1.i << endl
		<< "s2.i의 주소:" << &s2.i << endl;

	cout << "s1.i2의 주소:" << &s1.i2 << endl
		<< "s2.i2의 주소:" << &s2.i2 << endl;


	s1.myFunc();
	myStatic::myFunc2();
	//함수를 생성할때 함수 앞에 static을 붙이면
	//클래스객체가 없더라도 함수를 사용할 수 있다.

	//요약
	//static 변수 : 프로그램상에 오직 하나만 존재할 수 있는
	//변수를 만들때 사용
	//static 함수 : 함수를 실행하는 주체(클래스 객체)가
	//없더라도 함수를 실행할 수 있게 해줌.
}
