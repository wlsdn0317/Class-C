#include "CPractice.h"

CPractice::CPractice()
{
	printf("\n\n");
}

CPractice::~CPractice()
{
}

void CPractice::practice(int i, int j)
{
	if (j != 0) {
		printf("ù��° ���� �ι�° ���� ���������� ������ : %d\n", i % j);
	}
	else if (j == 0) {
		printf("�и� 0�� ���� �� �����ϴ�.\n");
		return;
	}
}

void CPractice::practice(float i, float j)
{
	if (j != 0) {
		printf("ù��° ���� �ι�° ���� ���������� �� : %0.1f\n", i / j);
	}
	else if (j == 0) {
		printf("�и� 0�� ���� �� �����ϴ�.\n");
		return;
	}
}

void CPractice::practice(float i, float j, float k)
{
	printf("3���� ���ڵ��� ��� : %0.1f\n", (i + j + k) / (float)3);
}

void CPractice::practice(int i, int j, int k)
{
	x = 0;
	if (i>=x) {
		x = i;
		if (j >= x) {
			x = j;
			if (k >= x) {
				x = k;
			}
		}
	}
	printf("3���� ���ڵ� �� ���� ū ���� : %d\n", x);
}

void CPractice::practice(int i, char j)
{
	for (int k = 0; k < i; k++) {
		printf("%c", j);
	}
	printf("\n\n");
}
