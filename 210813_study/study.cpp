#include "myStack.h"

void main() {

	myStack myStack_1;
	while (true)
	{
		int select;
		printf("������ �����ϼ���.\n");
		printf("1)push 2)pop 3)��������üȮ�� 4)����\n");
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
			printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
			return;
		}
		printf("\n");
	}
}