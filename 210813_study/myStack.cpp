#include "myStack.h"

myStack::myStack()
{


}

void myStack::push()
{
	//������ ���ڸ� �޾Ƽ� ���� �ڿ��ִ� �迭�� ����
	if (index < 10) {
		printf("���ÿ� ���� ���ڸ� �Է��ϼ���.\n");
		scanf(" %d", &num);
		myData[index] = num;
		printf("%d���� %d��/�� �����߽��ϴ�.\n", index, num);
		index++;
	}
	else if (index == 10) {
		printf("������ �� á���ϴ�.\n");
	}
}



void myStack::pop()
{
	//���� �ڿ��ִ� �迭���� ���ڸ� ����Ʈ�ϰ� �׹迭 ������ ����

	if (index >0) {
		index--;
		printf("%d�� ���ÿ� ����� %d�� ���½��ϴ�.\n", index, myData[index]);
	}
	else if (index == 0) {
		printf("����� �����Ͱ� �����ϴ�.\n");
		
	}

}

void myStack::check()
{
	for (int i = 0; i < 10; i++) {
		if (index > i) {
			printf("myData[%d] : %d\n", i, myData[i]);

		}
		else if (index == 0) {
			printf("����� �����Ͱ� �����ϴ�.\n");
			break;
		}
	}
}
