#include "monster.h"

monster::monster()
{
	//몬스터 초기 능력치
	atk = 5;
	def = 2;
	hp = 20;
	exp = 10;
	gold = 15;
	deadTime = 10.0f;
	printf("\n\n");
}

void monster::attack()
{
	printf("몬스터가 %d만큼의 힘으로 공격합니다.\n", atk);
}

void monster::damage(int i)
{
	printf("몬스터가 %d만큼의 피해를 입습니다.\n", i-def);
	hp -= i - def;
	//들어온 데미지에서 방여력만큼 감소시킨 결과값을
	//체력에서 뺀다.
}

void monster::die()
{
	printf("몬스터가 쓰러졌습니다.\n");
	printf("경험치를 %f 획득했습니다.\n", exp);
	printf("돈을 %d 획득했습니다.\n", gold);
	
	rare_drop = 100;
	rareGet();
	//private 선언된 변수와 함수는
	//해당 클래스에서만 사용할 수 있다.
}

void monster::rareGet()
{
}
