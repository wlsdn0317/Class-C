#include "CUser.h"
#include "hpPotion.h"
#include "mpPotion.h"
//Ŭ������ cpp������ ����Ѵٸ�
//���� ������� ��Ŭ��� �� �ʿ�� ����.

CUser::CUser()
{

	hp = 30;
	mp = 10;

}

void CUser::printInfo()
{

	printf("HP : %d\nMP : %d\n\n", hp, mp);
}

void CUser::useItem(int i)
{
	if (i == 1) {
		hpPotion p;
		hp += p.value;
		printf("%d��ŭ ȸ���Ǿ� hp�� %d�� �ƽ��ϴ�.\n", p.value, hp);
	}
	else if (i == 2) {
		mpPotion m;
		mp += m.value;
		printf("%d��ŭ ȸ���Ǿ� mp�� %d�� �ƽ��ϴ�.\n\n", m.value, mp);
	}
	else {
		printf("�߸� �Է��߽��ϴ�.\n");
	}

}
