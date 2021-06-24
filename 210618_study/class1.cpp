#include "class1.h"
#include "class2.h"
#include <stdio.h>
class1::class1()
{
	class2 cl2;
	
	cl2.i = 30;
	printf("클래스 2번의 i값은 %d로 바뀌었습니다.\n", cl2.i);
	cl2.print_i();
	//클래스는 다른 클래스에서 가져와서 사용할 수 있으며
	//해당 클래스 객체의 변수, 함수를 객체를 경유하여
	//접근해 사용할 수 있다.

	class2* p_cl2 = new class2;
	//클래스 역시 변수처럼 객체를 만들어야 하기 때문에
	//포인터로 생성이 가능하며
	//포인터로 생성된 클래스 객체의 내부에 접근할 때는
	//화살표(->)ㅀ 좁군헌더,
	p_cl2->i = 50;
	printf("클래스 2번의 i값은 %d로 바뀌었습니다.\n", p_cl2->i);
	p_cl2->print_i();



}
