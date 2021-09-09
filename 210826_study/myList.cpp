#define _CRT_SECURE_NO_WARNINGS
#include "myList.h"


void myList::push()
{
	if (top < 9) {
		int num;
		top++;
		printf("리스트에 넣을 숫자를 입력해주세요 : ");
		scanf("%d", &num);
		ary[top] = num;
		printf("%d번에 %d을/를 저장했습니다.\n", top, num);
	}
	else if (top == 9) {
		printf("리스트가 꽉 찾습니다.\n");
	}
}

void myList::front()
{
	if (top > -1) {
		top--;
		printf("%d번 리스트에 저장된 %d을/를 꺼냈습니다.\n", 0, ary[0]);
		for (int i = 0; i < top + 1; i++) {
			ary[i] = ary[i + 1];
		}
	}
	else {
		printf("저장된 데이터가 없습니다.\n");
	}
}

void myList::back()
{
	if (top > -1) {
		top--;
		printf("%d 리스트에 저장된 %d를 꺼냈습니다.\n", top + 1, ary[top + 1]);
	}
	else {
		printf("저장된 데이터가 없습니다.\n");
	}
}

void myList::insert()
{
	int insert_num;
	int num;
	printf("저장할 리스트 번호를 입력해주세요(0~8) : ");
	scanf("%d", &insert_num);
	
	if (insert_num > -1 && insert_num < 9) {
		if (insert_num <= top+1) {
			if (top <9) {
				top++;
				printf("리스트에 넣을 숫자를 입력해주세요 : ");
				scanf("%d", &num);
				for (int i = top - 1; i > insert_num - 1; i--) {
					ary[i + 1] = ary[i];
				}
				ary[insert_num] = num;
				printf("%d번에 %d을/를 저장했습니다.\n", insert_num, num);
			}
		}
		else {
			printf("잘못된 인덱스 정보입니다.\n");
		}
	}
	else if (insert_num == 9) {
		printf("리스트가 가득 찾습니다.\n");
	}
	else {
		printf("리스트 번호를 잘 못 입력하셨습니다.\n");
	}



}

void myList::remove()
{
	int remove_num;
	printf("삭제할 리스트 번호를 입력해주세요.(0~9) : ");
	scanf("%d", &remove_num);
	if (remove_num > -1 && remove_num < 10) {
		if (top > -1) {
			if (remove_num <= top) {
				top--;
				printf("%d번 리스트에 저장된 %d을/를 꺼냈습니다.\n", remove_num, ary[remove_num]);
				for (int i = remove_num; i < top + 1; i++) {
					ary[i] = ary[i + 1];
				}
			}
			else {
				printf("해당 인덱스에 자료가 없습니다.\n");
			}
		}
		else {
			printf("저장된 데이터가 없습니다.\n");
		}
	}
	else {
		printf("리스트 번호를 잘 못 입력하셨습니다.\n");
	}


}

void myList::print()
{
	for (int i = 0; i < top+1; i++) {
		if (top > i-1) {
			printf("ary[%d] : %d\n", i, ary[i]);
		}
		else {
			printf("저장된 데이터가 없습니다.\n");
			break;
		}
	}
}
