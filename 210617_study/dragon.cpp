#include "dragon.h"

dragon::dragon()
{
	hp = 100;
	atk = 50;
	def = 30;
	gold = 1000;
	exp = 1500;

	//드래곤의 헤더에서 별다른 변수를 선언하지 않았지만
	//몬스터 클래스를 상속받았기 때문에
	//몬스터 클래스에 존재하던 변수들을
	//드래곤 역시 모두 사용할 수 있다.

	//rare_drop = 50;
	//상속받은 자식이라 할지라도 부모의 private으로 선언된
	//데이터에는 접근할 수 없다.

	printf("%f초 후에 리젠됩니다.\n", deadTime);
	//protected로 선언된 변수, 함수는
	//자식도 접근할 수 있다.


}

void dragon::attack()
{
	printf("드래곤이 브레스를 내뿜습니다.\n");
	printf("공격력의 10배인 %d의 데미지를 줍니다.\n", atk * 10);
}
