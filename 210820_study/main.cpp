#include "headers.h"
#include "MyQueue_1.h"

void main() {
	MyQueue_1 Queue;
	while (1)
	{
		int select;
		printf("������ �����ϼ���.\n");
		printf("1)push 2)pop 3)��������üȮ�� 4)����\n");
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
			printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
			return;
		}
		printf("\n");
	}
}