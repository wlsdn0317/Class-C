#define _CRT_SECURE_NO_WARNINGS
#include "myList.h"


void myList::push()
{
	if (top < 9) {
		int num;
		top++;
		printf("����Ʈ�� ���� ���ڸ� �Է����ּ��� : ");
		scanf("%d", &num);
		ary[top] = num;
		printf("%d���� %d��/�� �����߽��ϴ�.\n", top, num);
	}
	else if (top == 9) {
		printf("����Ʈ�� �� ã���ϴ�.\n");
	}
}

void myList::front()
{
	if (top > -1) {
		top--;
		printf("%d�� ����Ʈ�� ����� %d��/�� ���½��ϴ�.\n", 0, ary[0]);
		for (int i = 0; i < top + 1; i++) {
			ary[i] = ary[i + 1];
		}
	}
	else {
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
}

void myList::back()
{
	if (top > -1) {
		top--;
		printf("%d ����Ʈ�� ����� %d�� ���½��ϴ�.\n", top + 1, ary[top + 1]);
	}
	else {
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
}

void myList::insert()
{
	int insert_num;
	int num;
	printf("������ ����Ʈ ��ȣ�� �Է����ּ���(0~8) : ");
	scanf("%d", &insert_num);
	
	if (insert_num > -1 && insert_num < 9) {
		if (insert_num <= top+1) {
			if (top <9) {
				top++;
				printf("����Ʈ�� ���� ���ڸ� �Է����ּ��� : ");
				scanf("%d", &num);
				for (int i = top - 1; i > insert_num - 1; i--) {
					ary[i + 1] = ary[i];
				}
				ary[insert_num] = num;
				printf("%d���� %d��/�� �����߽��ϴ�.\n", insert_num, num);
			}
		}
		else {
			printf("�߸��� �ε��� �����Դϴ�.\n");
		}
	}
	else if (insert_num == 9) {
		printf("����Ʈ�� ���� ã���ϴ�.\n");
	}
	else {
		printf("����Ʈ ��ȣ�� �� �� �Է��ϼ̽��ϴ�.\n");
	}



}

void myList::remove()
{
	int remove_num;
	printf("������ ����Ʈ ��ȣ�� �Է����ּ���.(0~9) : ");
	scanf("%d", &remove_num);
	if (remove_num > -1 && remove_num < 10) {
		if (top > -1) {
			if (remove_num <= top) {
				top--;
				printf("%d�� ����Ʈ�� ����� %d��/�� ���½��ϴ�.\n", remove_num, ary[remove_num]);
				for (int i = remove_num; i < top + 1; i++) {
					ary[i] = ary[i + 1];
				}
			}
			else {
				printf("�ش� �ε����� �ڷᰡ �����ϴ�.\n");
			}
		}
		else {
			printf("����� �����Ͱ� �����ϴ�.\n");
		}
	}
	else {
		printf("����Ʈ ��ȣ�� �� �� �Է��ϼ̽��ϴ�.\n");
	}


}

void myList::print()
{
	for (int i = 0; i < top+1; i++) {
		if (top > i-1) {
			printf("ary[%d] : %d\n", i, ary[i]);
		}
		else {
			printf("����� �����Ͱ� �����ϴ�.\n");
			break;
		}
	}
}
