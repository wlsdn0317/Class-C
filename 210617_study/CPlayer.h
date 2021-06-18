#pragma once
#include <stdio.h>

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	void print(int i);
	//void print(int j); (X)
	//매개변수의 '이름'이 다른 함수라면
	//이는 동일한 데이터를 취급하는 함수이기 때문에
	//함수 오버로딩으로 사용할 수 없다.

	void print(float f);
	void print(char c);
	//c++에서는 같은 이름을 가진 함수라 할지라도
	//매개변수가 다르다면 다른 함수로 인식한다.
	
	//동일한 이름의 함수를, 다른 매개변수로 작성하여
	//몇개든지 만들 수 있다.
	
	void print(int i, int j, int k);

	//함수오버로딩은 매개변수의 종류 뿐 아니라
	//갯수가 달라도 사용할 수 있다. 
	void print(int i, int j);
	void print(int i, float j, char k);




	//함수 오버로딩(OverLoading)
	//사용자가 어떠한 매개변수를 넣었느냐에 따라
	//클래스가 알아서 같은 이름을 가진 함수 중에서
	// 해당 매개변수를 사용하는 함수를
	//실행시켜준다.

};

