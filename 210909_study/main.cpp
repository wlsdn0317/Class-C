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

	cout << "s1.i�� �ּ�:" << &s1.i << endl
		<< "s2.i�� �ּ�:" << &s2.i << endl;

	cout << "s1.i2�� �ּ�:" << &s1.i2 << endl
		<< "s2.i2�� �ּ�:" << &s2.i2 << endl;


	s1.myFunc();
	myStatic::myFunc2();
	//�Լ��� �����Ҷ� �Լ� �տ� static�� ���̸�
	//Ŭ������ü�� ������ �Լ��� ����� �� �ִ�.

	//���
	//static ���� : ���α׷��� ���� �ϳ��� ������ �� �ִ�
	//������ ���鶧 ���
	//static �Լ� : �Լ��� �����ϴ� ��ü(Ŭ���� ��ü)��
	//������ �Լ��� ������ �� �ְ� ����.
}
