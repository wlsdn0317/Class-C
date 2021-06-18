#pragma once
#include "monster.h"

class dragon: public monster
{

	//클래스 선언 뒤에 다른 클래스를 작성하면
	//해당 클래스를 상속받는 클래스가 된다. : (콜론) 상속받을 클래스
public:
	dragon();


	void attack();
	//함수 오버라이팅(over writing)
	//부모클래스에게 이미 존재하던 attack함수를
	//자식클래스인 드래곤에서 다시 선언하고 정의함

	int mp;
	void fly();
	//자식클래스는 부모에게 상속받은 것들 뿐만 아니라
	//자식클래스 자신만의 변수나 함수를 만들어서
	//사용할 수 있다.
	//자식은 부모의 변수, 함수를 사용할 수 있지만
	//부모는 자식의 변수, 함수를 사용할 수 없다.
};

