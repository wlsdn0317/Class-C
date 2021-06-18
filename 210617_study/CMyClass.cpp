#include "CMyClass.h"

CMyClass::CMyClass()
{
	printf("내가 만든 클래스가 생성되었습니다. \n");
	x = 999;
	//일반적으로 헤더에서 선언한 변수의 초기화는
	//생성자에서 많이 해준다.
	 
	//유니티 start,awake함수와 비슷한 역할.
}

CMyClass::~CMyClass()
{
	printf("내가 만든 클래스가 삭제되었습니다. \n");
}

void CMyClass::printX(int a)
{
	printf("현재 x는 %d입니다.\n", x);
	printf("입력하신 숫자는 %d입니다.\n", a);
	x = a;
	printf("x값이 입력하는 숫자로 변경이 되었습니다.\n");

}
