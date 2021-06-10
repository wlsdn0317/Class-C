#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int menu;
	printf("출력할 내용을 선택하세요.\n");
	printf("1)if문 2)if-else문 3)if-else if-else문\n");
	scanf(" %d", &menu);
	
	if (menu == 1) {






		//제어문(챕터5, 챕터6)
		//프로그램이 실행되는 순서를 임의로 제어하는
		//명령어들을 통틀어서 말한다.

		//조건문 : 조건이 참이면 코드를 실행하고
		//조건이 거짓이면 코드를 실행하지 않고 건너 뛴다.

		//반복문 : 조건이 참인동안 계속해서
		//코드를 반복하여 실행한다.



		//조건문
		//1. if문 ==========p.123
		if (5 > 3)
			//if(조건)	
		{
			//조건이 참일때 실행할 코드를 작성
			printf("조건이 참입니다.\n");
		}

		printf("조건문이 종료됐습니다.\n");

		/* 조건문의 내용이 참이면 조건문 뒤에 있는
		 중괄호의 코드가 실행이 되고
		 조건문의 내용이 거짓이라면 조건문 뒤에 있는
		 중괄호의 코드만 실행이 되지 않는다.	*/

		int i = 11;
		if (i <= 10) {
			i *= 2;
		}
		printf("i는 %d입니다.\n", i);
		printf("\n\n");
		/*
			1.숫자를 입력받아서 입력한 숫자가 홀수면
			홀수입니다. 라고 출력하자.
			짝수라면 아무것도 출력되지 않는다.

			2.숫자를 입력받아서 입력한 숫자가 양수면
			양수입니다. 라고 출력하자.
			0, 음수인 경우는 출력하지 않는다.

			3.숫자를 2개입력받아서
			먼저 입력한 숫자가 더 크면
			왼쪽이 크다. 라고 출력하자.
			나중에 입력한 숫자가 크거나, 같은 경우는 출력하지 않는다.
		*/

		int num1;
		int num2;
		printf("1번 문제\n");
		printf("정수를 입력해 주세요: ");
		scanf(" %d", &num1);

		if (num1 % 2 == 1) {
			printf("입력하신 숫자 %d는 홀수 입니다.\n", num1);
		}

		printf("\n\n");
		printf("2번 문제\n");
		printf("정수를 입력해 주세요: ");
		scanf(" %d", &num1);

		if (num1 > 0) {
			printf("입력하신 숫자 %d는 양수 입니다.\n", num1);
		}

		printf("\n\n");
		printf("3번 문제\n");
		printf("정수 2개를 입력해 주세요.\n");
		printf("첫번째 정수를 입력해주세요: ");
		scanf(" %d", &num1);
		printf("두번째 정수를 입력해주세요: ");
		scanf(" %d", &num2);

		if (num1 > num2) {
			printf("%d > %d, 왼쪽이 크다\n", num1, num2);
		}

	}


	//중괄호 안에서 생성된 변수는 [지역변수]
	//중괄호 밖에서는 사용할 수 없다.
	else if (menu == 2) {

		int num1;

		//if-else문 === p.125
		printf("\n\n");
		printf("정수를 입력해 주세요: ");
		scanf(" %d", &num1);
		if (num1 % 2 == 1) {
			printf("홀수입니다.\n");
		}
		else {
			printf("짝수입니다.\n");
		}
		//else문은 if문에서 제시한 조건이 아닌경우
		//실행되는 내용들의 집합.
		//if문의 조건을 기준으로 해서
		//조건에 부합하지 않는 나머지 전부를 포함하기 때문에
		//else문은 별도의 조건을 작성하지 않고
		//if문이 없이 단독으로 사용할 수 없다.

		printf("\n\n");
		if (num1 > 10) {
			printf("장비를 착용했습니다.\n");
		}
		else {
			//num1<=10
			//가 else문의 조건이 됩니다.
			printf("레벨이 부족해서 장비를 착용할 수 없습니다.\n");
		}
		printf("\n\n");
		int mana = 50;
		int cost = 10;
		if (mana >= cost) {
			printf("파이어볼!\n");
			mana -= cost;
			//스킬을 사용했기 때문에 mana를 cost만큼
			//감소시킨다.
		}
		else {
			printf("마나가 부족합니다.\n");
		}

	}

	else if(menu == 3) {
		//if~else if ~else ==============p.128
		printf("\n\n");

		int level = 10;
		if (level > 60) {
			printf("만골드를 얻었습니다.\n");
		}
		else if (level > 40) {
			printf("5천골드를 얻었습니다.\n");
		}
		else {
			printf("천골드를 얻었습니다.\n");
		}

		//조건문에서 여러가지 조건을 기준으로 하여
		//각 조건에 따라 실행되는 내용을 다양하게 하려는 경우
		//if, else 뿐만 아니라 else if를 통해 구체적인
		//다른 조건을 제시할 수 있다.
		//if-else if-else문의 경우
		//여러개의 조건중에서 만족하는 조건을 확인된 경우
		//아래에 있는 다른 조건은 확인하지 않는다.

		printf("\n\n");

		if (level > 80) {}
		else if (level > 70) {}
		else if (level > 60) {}
		else if (level > 50) {}
		else if (level > 40) {}
		else if (level > 30) {}
		//else if문은 중간에 몇개든지 추가할 수 있다.
		//else문은 필요없다면 생략도 가능하다.
		//마찬가지로 중간에 조건이 만족된다면
		//아래에 있는 나머지 조건은 확인하지 않는다.


		if (level > 40) {}
		else if (level > 50) {}
		else if (level > 60) {}
		else if (level > 70) {}
		else if (level > 80) {}
		else if (level > 90) {}
		//조건문의 순서를 작성할때 주의해야 한다.
		//먼저 체크하는 조건이 나중에 체크하는 조건의 범위를
		//포함하는 경우, 조건을 확인하는 순서상
		//첫번째 조건이 만족했기 때문에 
		//아래에 있는 나머지 조건이 만족하더라도
		//실행되지 않는다.
		//ex)레벨이 90이라도 40레벨 보상만을 받는다


		/*
		1. 숫자를 입력하고 양수, 음수, 0인지 확인해서 출력.
		2. 숫자를 입력하고 홀수, 짝수, 0인지 확인해서 출력.
		3. 숫자를 2개 입력해서 먼저 입력한게 큰지
		   나중에 입력한게 큰지
		   둘이 서로 같은지 출력하자.
		4. 주민들록번호 뒷자리 첫번째 숫자를 입력받아서
		   남자인지, 여자인지, 잘못입력했는지 확인하자. */



		printf("\n\n");

		int num3;
		int num4;
		printf("1번 문제\n");
		printf("정수를 입력하시오: ");
		scanf(" %d", &num3);

		if (num3 > 0) {
			printf("입력하신 숫자 %d 은(는) 양수 입니다.\n", num3);
		}
		else if (num3 < 0) {
			printf("입력하신 숫자 %d 은(는) 음수 입니다.\n", num3);
		}
		else {
			printf("입력하신 숫자 %d 은(는) 0 입니다.\n", num3);
		}

		printf("\n\n");


		printf("2번 문제\n");
		printf("정수를 입력하시오: ");
		scanf(" %d", &num3);

		if (num3 < 0) {
			printf("입력하신 숫자 %d 은(는) 음수 입니다.\n", num3);
		}
		else if (num3 % 2 == 1) {
			printf("입력하신 숫자 %d 은(는) 홀수 입니다.\n", num3);
		}
		else if (num3 % 2 == 0 && num3 != 0) {
			printf("입력하신 숫자 %d 은(는) 짝수 입니다.\n", num3);
		}
		else {
			printf("입력하신 숫자 %d 은(는) 0 입니다.\n", num3);
		}

		printf("\n\n");

		printf("3번 문제\n");
		printf("2가지 정수를 입력하시오.\n");
		printf("첫번째 정수: ");
		scanf(" %d", &num3);
		printf("두번째 정수: ");
		scanf(" %d", &num4);

		if (num3 > num4) {
			printf("첫번째 입력하신 숫자 %d가 큽니다. %d > %d", num3, num3, num4);
		}
		else if (num3 < num4) {
			printf("두번째 입력하신 숫자 %d가 큽니다. %d < %d", num4, num3, num4);
		}
		else {
			printf("첫번째 숫자 %d와 두번째 숫자 %d는 같습니다. %d = %d", num3, num4, num3, num4);
		}

		printf("\n\n");

		printf("4번 문제\n");
		printf("주민등록번호 뒷자리 첫번째 숫자를 입력하시오: ");
		scanf(" %d", &num3);

		if (num3 == 1 || num3 == 3) {
			printf("남자입니다.\n");
		}
		else if (num3 == 2 || num3 == 4) {
			printf("여자입니다.\n");
		}
		else {
			printf("잘못 입력 하셨습니다.\n");
		}


		printf("\n\n");

		int input = 100;
		if (input > 50 && input < 150 && input % 2 == 0) {  //50보다 크고 150보다 작다. ex) 50 < input < 150
			printf("input은 50보다 크고 150보다 작고 짝수입니다.\n");
		}
	}
	



	else {
		printf("잘못 입력 하셨습니다.");
	}

	//if, else if, else문을 작성할 때는
	//조건문 사이에 다른 코드가 작성되면 안된다.
	/*
	if(5>3){}
	else if (5>0){}
	int z = 0; (사용하면 안됨X)
	else {}
	*/
























	return 0;
}