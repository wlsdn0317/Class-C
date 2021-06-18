#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//stdio.h는 클래스가 아닌
//헤더파일 단독으로 존재하는 코드로써
//헤더파일 안에 선언과 정의가 모두 포함 된 파일로
//클래스가 아니다. 그래서c언어에서도 사용할 수 있다.



#include <string.h>
#include "CMyClass.h"
//작성한 클래스는 include를 통해서
//다른 코드로 가져와서 사용할 수 있으며
//이경우 <> 꺾쇠가 아닌 ""큰따옴표로 가져온다.

//클래스라는 개념은 c++에서 만들어진 것이기 때문에
//c언어에서는 사용할 수 없다.


//꺽쇠를 통해 가져오는 헤더파일은
//솔루션 탐색기 내에서 보이지 않는 파일

//큰따옴ㅍ를 통해 가져오는 헤더파일은
//솔루션 탐색기 내에서 보이는 파일

#include "CPlayer.h"
#include "CPractice.h"
#include "CUser.h"
#include "Test1.h"
#include "myOperator.h"

#include "monster.h"
#include "dragon.h"

#include "Hero.h"
#include "Mage.h"
#include "Knight.h"

struct myStruct {
	int i;
	float fary[5];

	//int j = 10;

	//구조체 내에서는 변수를 정의와 동시에 초기화 할 수 없다.
	//C++에서는 개선이 되어 가능하짐나 권장사항은 아니며
	//C에서는 아예 사용이 불가능하다.

};



int main() {

	int ary[5] = { 10,20,30,40,50 };
	//배열의 index는 0번부터 시작한ㄷ.
	ary[0] = 500;

	//ary[5] = 100; (X)
	//배열은 입력한 숫자 -1까지만 index를 사용할 수 있다.

	ary[2] = ary[0] + ary[1];

	//배열끼리는 서로 대입 및 연산이 가능하다.

	ary[0] = ary[0] * ary[0];


	struct myStruct me = { 1,{1,2,3,4,5} };

	//정의된 구조체를 생성하여 사용할때는
	//어떤 구조체를 만들지 구조체명과
	//그렇게 만들어진 구조체 객체의 이름(변수명)을 선언한다.

	me.i = 10000;
	me.fary[3] = 300;

	/*for (int i = 2; i < 5; i++) {
		scanf(" %d", &me.fary[i]);
	}*/



	CMyClass cClass;

	//클래스는 구조체와 마찬가지로
	//만들려는 객체(변수)의 자료형 (클래스형)을 선언하고
	//해당객체(변수)의 이름을 선언하면 생성된다.

	CMyClass cClass2;

	cClass.x = 50;
	//클래스 내에서 만들어진 변수에 접근하려면
	//해당 클래스(CMyClass)로 만들어진 변수(cClass)를 통해서 접근한다.

	cClass.printX(10);
	//클래스 내에서 만들어진 함수 역시 변수와 마찬가지로
	//변수 객체를 통해서 접근한ㄷㅏ.

	printf("%d\n", cClass.x);

	cClass.printX(777);


	cClass2.printX(111);
	cClass2.printX(222);

	//클래스는 변수를 생성하기 위한 설계도와 같으며
	//설계도를 통해 만들어진 결과물(변수)은
	//몇개를 만들든 만들 수 있고
	//만들어진 결과물은 각각 독립되어 있기때문에
	//다른 결과물에 영향을 끼치지 않는다.

	//결과물 하나의 데이터가 변경된다고 해서
	//다른 결과물의 데이터가 바뀌지 않으며
	//설계도인 클래스의 데이터가 바뀌지도 않는다.

	//CMyClass.x = 10000;(X)
	//클래스는 설계도이기 때문에
	//외부에서 클래스를 수정할 수 없다.
	//클래스를 수정하기 위해선 해당 클래스파일을 직접 열어서
	//편집하는 수 밖에 없으며
	//일반 변수를 사용하듯이 클래스.변수 를 통해
	//클래스에서 만들어진 변수값을 집접 바꿀 수 없다.
	//오직 클래스를 기반으로 만들어진 변수(객체)의 결과물을
	//수정하는 것은 가능하다.


	CPlayer cp;

	cp.print('x');
	cp.print(999);
	cp.print(5.5f);

	//매개변수로 무엇을 넣느냐에 따라서
	//같은 이름의 함수라 할지라도
	//실행되는 함수가 달라진다.

	cp.print(3, 9, 20);
	cp.print(99, 3.14f, 'P');
	cp.print(666, 777);
	cp.print(3.3f, 5.5f);

	cp.print((float)10);
	//매개변수가 정수 10이지만
	//앞에 형변환 연산자를 붙여서
	//실수로 바꿧기 때문에
	//매개변수가 실수인 함수가 실행된다.

	/*
		새로운 클래스를 만들고

		1.매개변수가 정수 2개면 첫번째 수를 두번째 수로
		나눴을때의 나머지를 출력하는 함수
		2.매개변수가 실수 2개면 첫번째 수를 두번째 수로
		나눈 몫을 출력하는 함수
		3.매개변수가 실수 3개면 세 숫자의 평균을 출력하는 함수
		4.매개변수가 정수 3개면 세 숫자중 가장 큰 수를 출력하는 함수
		5.매개면수가 정수와 문자면
		해당 문자를 정수번 만큼 반복해서 출력하는 함수

		를 만들고 main에서 클래스를 생성한 뒤 , 함수를 실행시켜서
		결과를 확인해라.
		단, 함수들은 모두 동일한 함수명을 가진다.
	*/

	CPractice CPt;

	CPt.practice(1, 2);
	CPt.practice(1.0f, 2.0f);
	CPt.practice(5.5f, 4.5f, 35.0f);
	CPt.practice(1, 843, 7321);
	CPt.practice(43, 'A');

	CUser user;

	user.printInfo();
	user.useItem(1);
	user.useItem(2);
	user.printInfo();

	myOperator oper;
	int a = oper + 10;
	printf("클래스와 10을 더한 결과는 %d입니다.\n", a);
	
	monster m;
	m.attack();
	m.damage(7);
	m.die();

	dragon dg;

	dg.attack();
	dg.damage(80);
	dg.die();

	/*
		m.rare_drop = 3;
		m.rareGet();
		클래스에서 private으로 선언된 변수, 함수는
		외부에서 사용할 수 없다.

	*/

	/*
		m.deadTime = 0;
		클래스에서 protected로 선언된 데이터 역시
		자식이 아닌 외부에서는 사용할 수 없다.
		
	*/

	while (1) {
		printf("\n\n직업을 선택하세요. 1)기사 2)마법사 0)종료\n");
		int input;
		scanf(" %d", &input);

		Hero* hero;
		if (input == 1) {
			hero = new Knight;
		}
		else if (input == 2) {
			hero = new Mage;
		}
		else if (input == 0) {
			return 0;
		}
		else {
			hero = new Hero;
		}
		//부모클래스를 상속받은 자식클래스들은
		//부모클래스의 포인터에 저장할 수 있다.
		//부모클래스로써  존재하기 위한 데이터들을
		//자식 클래스는 모두 포함하고 있기 때문에.

		printf("명령어를 입력하세요. 1)공격 2)스킬 3)정보 0)종료\n");
		scanf(" %d", &input);
		if (input == 1) {
			hero->attack();
		}
		else if (input == 2) {
			hero->skill();
		}
		else if (input == 3) {
			hero->info();
		}
		else if (input == 0) {
			return 0;
		}

	}












	return 0;
}