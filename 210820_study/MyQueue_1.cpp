
#include "MyQueue_1.h"

void MyQueue_1::push()
{
	int num;

	if ((rear + 1) % 10 != (front % 10)) {
		rear = (rear + 1) % 10;
		printf("큐에 넣을 숫자를 입력해주세요 : ");
		scanf("%d", &num);
		ary[rear] = num;
		printf("%d번에 %d을/를 저장했습니다.\n", rear, num);
	}
	else {
		printf("데이터가 가득 찾습니다.\n");
	}
}

void MyQueue_1::pop()
{
	if (front != rear) {
		front = (front + 1) % 10;
		printf("%d번 큐에 저장된 %d을/를 꺼냈습니다.\n", front, ary[front]);
	}
	else {
		printf("저장된 데이터가 없습니다.\n");
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
		printf("저장된 데이터가 없습니다.\n");
	}
}
