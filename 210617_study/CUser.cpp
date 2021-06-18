#include "CUser.h"
#include "hpPotion.h"
#include "mpPotion.h"
//클래스를 cpp에서만 사용한다면
//굳이 헤더에서 인클루드 할 필요는 없다.

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
		printf("%d만큼 회복되어 hp가 %d가 됐습니다.\n", p.value, hp);
	}
	else if (i == 2) {
		mpPotion m;
		mp += m.value;
		printf("%d만큼 회복되어 mp가 %d가 됐습니다.\n\n", m.value, mp);
	}
	else {
		printf("잘못 입력했습니다.\n");
	}

}
