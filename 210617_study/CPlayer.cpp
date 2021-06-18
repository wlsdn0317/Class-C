#include "CPlayer.h"

CPlayer::CPlayer()
{
}

CPlayer::~CPlayer()
{
}

void CPlayer::print(int i)
{
	printf("입력하신 정수는 %d입니다.\n", i);
}

void CPlayer::print(float f)
{
	printf("입력하신 실수는 %f입니다.\n", f);
}

void CPlayer::print(char c)
{
	printf("입력하신 문자는 %c입니다.\n", c);
}

void CPlayer::print(int i, int j, int k)
{
	printf("숫자 3개의 평균은 %d입니다.\n", (i + j + k) / 3);
}

void CPlayer::print(int i, int j)
{
	printf("숫자 2개의 합은 %d입니다.\n", i + j);
}

void CPlayer::print(int i, float j, char k)
{
	printf("정수 : %d, 실수 : %0.1f, 문자 : %c\n", i, j, k);
}
