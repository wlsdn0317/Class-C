#include "myStack.h"

myStack::myStack()
{


}

void myStack::push()
{
	//저장할 숫자를 받아서 제일 뒤에있는 배열에 저장
	if (index < 10) {
		printf("스택에 넣을 숫자를 입력하세요.\n");
		scanf(" %d", &num);
		myData[index] = num;
		printf("%d번에 %d을/를 저장했습니다.\n", index, num);
		index++;
	}
	else if (index == 10) {
		printf("스택이 꽉 찼습니다.\n");
	}
}



void myStack::pop()
{
	//제일 뒤에있는 배열에서 숫자를 프린트하고 그배열 데이터 삭제

	if (index >0) {
		index--;
		printf("%d번 스택에 저장된 %d를 꺼냈습니다.\n", index, myData[index]);
	}
	else if (index == 0) {
		printf("저장된 데이터가 없습니다.\n");
		
	}

}

void myStack::check()
{
	for (int i = 0; i < 10; i++) {
		if (index > i) {
			printf("myData[%d] : %d\n", i, myData[i]);

		}
		else if (index == 0) {
			printf("저장된 데이터가 없습니다.\n");
			break;
		}
	}
}
