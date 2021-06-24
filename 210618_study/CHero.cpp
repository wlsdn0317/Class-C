#include "CHero.h"
#include "hpPotion.h"

CHero::CHero()
{
	strcpy(name, "플레이어");
	level = 1;
	 str=5;
	 dex=5;
	 wis=5;
	 hp=20;
	 mp=10;
	 mHp = hp;
	 mMp = mp;
	 exp=0;
	 inventory[0] = new hpPotion();
	 inventory[1] = nullptr;
	 inventory[2] = nullptr;
	 inventory[3] = nullptr;
	 inventory[4] = nullptr;
		
}

CHero::CHero(char insert_name[256])
{
	strcpy(name, insert_name);
	level = 1;
	str = 5;
	dex = 5;
	wis = 5;
	hp = 20;
	mp = 10;
	exp = 0;
	inventory[0] = new hpPotion();
	inventory[1] = nullptr;
	inventory[2] = nullptr;
	inventory[3] = nullptr;
	inventory[4] = nullptr;
}

void CHero::info()
{
	printf("이름:%s\n",name);
	printf("레벨:%d\n",level);
	printf("힘:%d\n",str);
	printf("민:%d\n",dex);
	printf("지:%d\n",wis);
	printf("HP:%d\n", hp);
	printf("MP:%d\n", mp);
	printf("경험치:%0.2f\n",exp);
}

int CHero::attack()
{
	//함수 rand(): 랜덤한 숫자를 만드는 함수로
	//숫자 범위에 재한이 거의 없기 때문에
	//만들어지는 숫자를 이용하여 일정 범위 내에서의 숫자로
	//바ㅣ꿔줄 필요가 있다.
	

	
	int i = rand() % 101;
	//생성된 숫자를 나눠서 나버지 값을 이용하면
	//숫자의 범위를 제한할 수 있다.

	int myDamage = str;//기본데미지 지정
	if (i < 20) {
		myDamage *= 2;
	}
	return myDamage;
}

void CHero::damaged(int damage)
{
	int dodge = rand() % 100;
	dodge += dex;
	//랜덤하게 결정된 회피율에
	//dex만큼을 더해서 회피율을 보정한다.

	if (dodge >= 80) {
		printf("공격을 회피했습니다.\n");
		return;
	}
	hp -= damage;
	printf("%d의 피해를 받았습니다.\n", damage);
	printf("체력이 %d 남았습니다.\n", hp);
	if (hp <= 0) {
		die();
	}

}

void CHero::die()
{
	printf("체력이 모두 감소하였습니다.\n");
	printf("당신은 죽었습니다.\n");
}

void CHero::levelUp(float i)
{
	exp += i;
	printf("경험치를 %d 획득했습니다.\n", i);
	printf("현재 경험치는 %f입니다.\n", exp);

	if (exp > level * 10) {
		printf("레벨업했습니다.\n\n");
		exp -= 10 * level;
		level++;
		str *= 2;
		dex *= 2;
		wis *= 2;
		mHp *= 2;
		mMp *= 2;
		hp = mHp;
		mp = mMp;
		
		info();
		printf("\n");
	}
}

int CHero::skill(int i)
{
	printf("스킬이 없습니다.\n");

	return 0;
}
