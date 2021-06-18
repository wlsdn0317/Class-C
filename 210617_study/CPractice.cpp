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
		printf("첫번째 수를 두번째 수로 나눴을때의 나머지 : %d\n", i % j);
	}
	else if (j == 0) {
		printf("분모에 0을 넣을 수 없습니다.\n");
		return;
	}
}

void CPractice::practice(float i, float j)
{
	if (j != 0) {
		printf("첫번째 수를 두번째 수로 나눴을때의 몫 : %0.1f\n", i / j);
	}
	else if (j == 0) {
		printf("분모에 0을 넣을 수 없습니다.\n");
		return;
	}
}

void CPractice::practice(float i, float j, float k)
{
	printf("3개의 숫자들의 평균 : %0.1f\n", (i + j + k) / (float)3);
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
	printf("3개의 숫자들 중 가장 큰 수는 : %d\n", x);
}

void CPractice::practice(int i, char j)
{
	for (int k = 0; k < i; k++) {
		printf("%c", j);
	}
	printf("\n\n");
}
