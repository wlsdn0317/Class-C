#include "myStack.h"

void main() {

	myStack myStack_1;
	while (true)
	{
		int select;
		printf("동작을 선택하세요.\n");
		printf("1)push 2)pop 3)데이터전체확인 4)종료\n");
		scanf(" %d", &select);
		if (select == 1) {
			myStack_1.push();
		}
		else if(select == 2){
			myStack_1.pop();
		}
		else if(select == 3){
			myStack_1.check();
		}
		else if(select == 4){
			return;
		}
		else {
			printf("숫자를 잘못 입력하셨습니다.\n");
			return;
		}
		printf("\n");
	}
}