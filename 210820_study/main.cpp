#include "headers.h"
#include "MyQueue_1.h"

void main() {
	MyQueue_1 Queue;
	while (1)
	{
		int select;
		printf("동작을 선택하세요.\n");
		printf("1)push 2)pop 3)데이터전체확인 4)종료\n");
		scanf(" %d", &select);
		if (select == 1) {
			Queue.push();
		}
		else if (select == 2) {
			Queue.pop();
		}
		else if (select == 3) {
			Queue.print();
		}
		else if (select == 4) {
			return;
		}
		else {
			printf("숫자를 잘못 입력하셨습니다.\n");
			return;
		}
		printf("\n");
	}
}