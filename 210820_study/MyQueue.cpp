#include "MyQueue.h"

void MyQueue::push()
{
	if (top < 9) {
		int num;
		top++;
		printf("큐에 넣을 숫자를 입력해주세요 : ");
		scanf("%d", &num);
		ary[top] = num;
		printf("%d번에 %d을/를 저장했습니다.\n", top, num);
	}
	else if(top == 9){
		printf("큐가 꽉 찾습니다.\n");
	}
}

void MyQueue::pop()
{
	if (top > -1) {
		top--;
		printf("%d번 큐에 저장된 %d을/를 꺼냈습니다.\n",0,ary[0]);
		for (int i = 0; i < top + 1; i++) {
			ary[i] = ary[i + 1];
		}
	}
	//else if (top == 0 ) {
		//top--;
		//printf("%d번 큐에 저장된 %d을/를 꺼냈습니다.\n", 0, ary[0]);
	//}
	else {
		printf("저장된 데이터가 없습니다.\n");
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
		printf("저장된 데이터가 없습니다.\n");
	}
}
