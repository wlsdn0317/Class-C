#include "CPlayer.h"

CPlayer::CPlayer()
{
}

CPlayer::~CPlayer()
{
}

void CPlayer::print(int i)
{
	printf("�Է��Ͻ� ������ %d�Դϴ�.\n", i);
}

void CPlayer::print(float f)
{
	printf("�Է��Ͻ� �Ǽ��� %f�Դϴ�.\n", f);
}

void CPlayer::print(char c)
{
	printf("�Է��Ͻ� ���ڴ� %c�Դϴ�.\n", c);
}

void CPlayer::print(int i, int j, int k)
{
	printf("���� 3���� ����� %d�Դϴ�.\n", (i + j + k) / 3);
}

void CPlayer::print(int i, int j)
{
	printf("���� 2���� ���� %d�Դϴ�.\n", i + j);
}

void CPlayer::print(int i, float j, char k)
{
	printf("���� : %d, �Ǽ� : %0.1f, ���� : %c\n", i, j, k);
}
