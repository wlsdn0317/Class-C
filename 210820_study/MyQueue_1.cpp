
#include "MyQueue_1.h"

void MyQueue_1::push()
{
	int num;

	if ((rear + 1) % 10 != (front % 10)) {
		rear = (rear + 1) % 10;
		printf("ť�� ���� ���ڸ� �Է����ּ��� : ");
		scanf("%d", &num);
		ary[rear] = num;
		printf("%d���� %d��/�� �����߽��ϴ�.\n", rear, num);
	}
	else {
		printf("�����Ͱ� ���� ã���ϴ�.\n");
	}
}

void MyQueue_1::pop()
{
	if (front != rear) {
		front = (front + 1) % 10;
		printf("%d�� ť�� ����� %d��/�� ���½��ϴ�.\n", front, ary[front]);
	}
	else {
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
}

void MyQueue_1::print()
{
	if (front != rear) {
		for (int i = (front + 1) % 10; i != (rear + 1) % 10; i = (i + 1) % 10) {
			printf("myData[%d] : %d\n", i % 10, ary[i % 10]);
		}
	}
	else {
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
}
