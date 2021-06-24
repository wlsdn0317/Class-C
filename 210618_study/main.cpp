#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "class1.h"
#include "item.h"
#include "potion.h"
#include "hpPotion.h"
#include "myPlayer.h"
#include <stdlib.h>
#include <time.h>
#include "CHero.h"
#include "Cmage.h"
#include "CWarrior.h"
#include "CMonster.h"
void amstudy() {
	myPlayer player1;
	myPlayer player2;

	int input;
	int i;
	while (1) {

		printf("사용할 인벤토리 번호를 입력하세요 : ");
		scanf(" %d", &input);
		player1.useMyitem(input);
		printf("\n");
		printf("2번의 체력은 %d\n", player2.hp);

	}

	/*
		1.스테미너 포션을 만들고 플레이어의 인벤토리에 추가해서
		스테미너 포션을 사용하여 효과가 적용되는지 확인해보자.

		2.체력/마력포션을 종류를 늘리자.
		신규 클래스를 만들지 않고 기존 클래스에서
		수치값을 다르게 생성할 수 있도록 구조를 고쳐보자.
		hint. 함수를 활용해보자.

	*/
}



void battle(CHero* hero, CMonster* mob) {
	while (1) {
		printf("무엇을 하시겠습니까?\n");
		printf("1)공격 2)스킬 3)아이템\n");
		int input;
		scanf(" %d", &input);

		switch (input)
		{
		case 1: {
			int dam = hero->attack();
			mob->damage(dam);
			break; }
		case 2: {
			int dam = hero->skill(1);
			mob->damage(dam);
			break;
		}
		case 3:
			break;
		default:
			break;
		}
		//hero 턴 종료
		
		printf("\n\n");
		if (mob->hp <= 0) {
			hero->levelUp(mob->exp);
			return;
		}
		//몬스터가 사망했으면 몬스터의 턴이 진행되지 않고
		//배틀이 종료된다.

		int m_dam = mob->attack();
		hero->damaged(m_dam);
		//몬스터 턴 종료

		if (hero->hp <= 0)
			return;
		printf("\n\n");
	}
}













int main() {
	srand(time(0));
	//seed random;
	//랜덤한 숫자를 만들때 기준이 되는 값을
	//바꿔주는 함수
	//일반적으로는 기준값을 현재 시간으로 삼는다.

	//srand는 반복해서 사용하면
	//매번 기준을 다시 

	char c[256];
	printf("플레이어의 이름을 입력하세요.\n");
	scanf(" %s", &c);

	printf("플레이어의 직업을 선택하세요. \n1)전사 2)마법사\n");
	int job;
	scanf(" %d", &job);

	CHero* hero;
	if (job == 1) {
		hero = new CWarrior(c);
	}
	else if (job == 2) {
		hero = new CMage(c);
	}
	else {
		hero = new CHero();
	}
	
	CMonster* mob[5];
	for (int i = 0; i < 5; i++) {
		mob[i] = new CMonster();
	}

	for (int i = 0; (i < 5)&&(hero->hp>0);i++) {
		battle(hero, mob[i]);
	}
	
	//매개변수로 입력한 두 대상중 하나가
	//죽을때까지 전투가 반복된다.

			
}