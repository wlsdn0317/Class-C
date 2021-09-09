#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myTree.h"


int main() {
	myTree min;

	while (1)
	{
		int select;
		printf("동작을 선택하세요.\n");
		printf("1)push 2)print 3)serch 0)종료\n");
		scanf(" %d", &select);
		if (select == 1) {
			min.Push();
		}
		else if (select == 2) {
			min.Printf();
		}
		else if (select == 3) {
			min.Serch();
		}
		
		else if (select == 0) {
			break;
		}
		else {
			printf("숫자를 잘못 입력하셨습니다.\n");
			break;
		}
		printf("\n");
	}
	return 0;
}