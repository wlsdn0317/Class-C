#include "CWarrior.h"
#include"hpPotion.h"

CWarrior::CWarrior()
{
	level = 1;
	str = 15;
	dex = 5;
	wis = 3;
	hp = 40;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;

	inventory[1] = new hpPotion();
}

CWarrior::CWarrior(char insert_name[256])
{
	strcpy(name, insert_name);
	level = 1;
	str = 15;
	dex = 5;
	wis = 3;
	hp = 40;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;

	inventory[1] = new hpPotion();

	printf("전사 %s가 만들어졌습니다.\n",insert_name);
}

int CWarrior::attack()
{
	int i = rand() % 100;
		
	int myDamage = str;
	if (i < 20) {
		myDamage *= 2;
		printf("크리티컬! 전사가 칼을 크게 휘두릅니다.!\n");
	}
	else {
		printf("전사가 칼로 공격합니다.\n");
	}


	return myDamage;
}

int CWarrior::skill(int i)
{
	int j = rand() % 100;
	int myDamage = str;
	if (i == 1) {
		if (mp >= 10) {
			mp -= 10;
			if (j < 20) {
				myDamage *= 2;
				printf("크리티컬!\n");
			}			
			printf("전사의 스트라이크!\n");
			printf("현재 마나:%d\n", mp);
			return myDamage * 3;
		}
		else {
			printf("마나가 부족하여 스킬이 불발됩니다.\n");
			return 0;
		}
		
	}
	else {
		printf("해당 스킬이 존재하지 않습니다.\n");
		return 0;
	}

}
