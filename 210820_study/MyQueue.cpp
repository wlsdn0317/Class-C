#include "MyQueue.h"

void MyQueue::push()
{
	if (top < 9) {
		int num;
		top++;
		printf("ť�� ���� ���ڸ� �Է����ּ��� : ");
		scanf("%d", &num);
		ary[top] = num;
		printf("%d���� %d��/�� �����߽��ϴ�.\n", top, num);
	}
	else if(top == 9){
		printf("ť�� �� ã���ϴ�.\n");
	}
}

void MyQueue::pop()
{
	if (top > -1) {
		top--;
		printf("%d�� ť�� ����� %d��/�� ���½��ϴ�.\n",0,ary[0]);
		for (int i = 0; i < top + 1; i++) {
			ary[i] = ary[i + 1];
		}
	}
	//else if (top == 0 ) {
		//top--;
		//printf("%d�� ť�� ����� %d��/�� ���½��ϴ�.\n", 0, ary[0]);
	//}
	else {
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
}


void MyQueue::print()
{
	if (top > -1) {
		for (int i = 0; i < top + 1; i++) {
			printf("myData[%d] : %d\n", i, ary[i]);
		}
	}
	else {
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
}
