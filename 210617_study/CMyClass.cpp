#include "CMyClass.h"

CMyClass::CMyClass()
{
	printf("���� ���� Ŭ������ �����Ǿ����ϴ�. \n");
	x = 999;
	//�Ϲ������� ������� ������ ������ �ʱ�ȭ��
	//�����ڿ��� ���� ���ش�.
	 
	//����Ƽ start,awake�Լ��� ����� ����.
}

CMyClass::~CMyClass()
{
	printf("���� ���� Ŭ������ �����Ǿ����ϴ�. \n");
}

void CMyClass::printX(int a)
{
	printf("���� x�� %d�Դϴ�.\n", x);
	printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.\n", a);
	x = a;
	printf("x���� �Է��ϴ� ���ڷ� ������ �Ǿ����ϴ�.\n");

}
