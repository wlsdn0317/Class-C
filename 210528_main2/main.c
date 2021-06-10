#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	//swich-case 문

	int menu;
	printf("메뉴를 선택하세요.\n");
	printf("1)switch-case문 기본 2)switch 기본 연습문제 3)switch 응용 4)if문의 응용\n 선택된 번호 : ");
	scanf(" %d", &menu);
	if (menu == 1) 
	{
		//switch문은 if문과 달리
		//복잡한 조건(관계연산자, 논술연산자)을 사용할 수 없다.
		//오로지 지정한 값이 같은 경우만 체크할 수 있다.

		int input = 1 ;
		switch (input) {
		
		case 1:  //if(input ==1)
			printf("input은 1입니다.\n");
			printf("여러줄을 작성할 수 있습니다.\n");
			break;//해당 조건문이 끝나는 지점에 break를 작성
		
		case 2: //if(input ==2)
			printf("2입니다.\n");
			break;
		
		case 3: //if(input ==3)
			printf("3이었습니다.\n");
			break;
		
		default: //esle와 동일하게 그 외의 나머지 모든 값의 경우
			printf("답이 없습니다.\n");
			break;
		}
		//switch문은 if문에 비하여, 복잡한 조건을 사용할 수 없지만
		//대신 조건을 확인하는 속도가 빠르다.
		//if문의 경우, 여러개의 조건을 if-else if를 통해 나열했을 경우
		//해당하는 조건을 찾기위해 위에서부터 차례차례 확인하면서 내려오지만
		//switch문은 해당하는 조건으로 즉시 이동한ㄷㅏ.
		//때문에 경우의 수가 많은 경우. switch문이 if문보다 빠르다.

		//게임에서 키보드를 눌렀을때 실행되는 동작을 구현할때
		//switch문을 많이 사용한다.

		//switch문의 조건으로 사용할 수 있는 변수는
		//정수, char, enum형(열거형)만 쓸 수 있다.
		//char형, enum형 모두 내부적으로 정수취급을 받기 때문에
		//사용이 가능하다.










	}
	else if (menu == 2) 
	{
		/*
			게임의 캐릭터를 생성한다.
			입력한 숫자에 따라서 직업이 결정된다.
			1~4까지의 숫자에 직업을 할당해주고
			해당 직업이 선택되면 직업의 이름과 스킬의 이름을 출력한다.
			1~4 이외의 숫자를 입력하면 잘못 입력했다고 메시지를 출력한다.
			switch문으로 만들어보자.
			전사, 마법사, 도적, 성직자
		*/
		
		int num1;
		printf("\n\n");
		printf("직업을 선택해 주세요.\n");
		printf("1)전사 2)마법사 3)도적 4)성직자 \n 직업 : ");
		scanf(" %d", &num1);

		switch (num1) {

		case 1:
			printf("전사가 선택 되었습니다.\n");
			printf("'강타'를 습득 하셨습니다.\n");
			break;
		case 2:
			printf("마법사가 선택 되었습니다.\n");
			printf("'파이어볼'을 습득 하셨습니다.\n");
			break;
		case 3:
			printf("도적이 선택 되었습니다.\n");
			printf("'백어택'을 습득하셨습니다.\n");
			break;
		case 4:
			printf("성직자가 선택 되었습니다.\n");
			printf("'힐'을 습득 하셨습니다\n");
			break;
		default:
			printf("잘못된 선택입니다.\n");
			break;
		}
		
		
		printf("\n\n");
		printf("부직업을 선택해 주세요.\n");
		printf("1)전사 2)마법사 3)도적 4)성직자 \n 직업 : ");
		scanf(" %d", &num1);

		if (num1 == 1) {
			printf("전사가 선택 되었습니다.\n");
			printf("'강타'를 습득 하셨습니다.\n");
		}
		else if (num1 == 2){
			printf("마법사가 선택 되었습니다.\n");
			printf("'파이어볼'을 습득 하셨습니다.\n");
		}

		else if (num1 == 3) {
			printf("도적이 선택 되었습니다.\n");
			printf("'백어택'을 습득하셨습니다.\n");
		}

		else if (num1 == 4) {
			printf("성직자가 선택 되었습니다.\n");
			printf("'힐'을 습득 하셨습니다\n");
		}
		else {
			printf("잘못된 선택입니다.\n");
		}

		
	}
	else if (menu == 3) {

		int input = 5;
		//switch문에서 break를 생략한 경우의 동작 p.147
		switch (input) {
		case 1: printf("100\n");
			break;
		case 2: printf("200\n");
		case 3: printf("300\n");
		case 4: printf("400\n");
		case 5: printf("500\n");
			break;
		}
		//프로그래밍에서 break는 코드의 실행을
		//도중에 정지시키는 역할을 한다.
		//switch 문에서의 break는 다음에 있는
		//다른 case가 실행되지 않도록
		//멈추는 역할을 한다.
		//break가 없으면 다음 case도 조건값과 관계없이
		//실행이 된다.
		
		
		int ranking = 3;
		int gold = 0;
		switch (ranking)
		{
		case 1:gold += 10000;
		case 2:gold += 8000;
		case 3:gold += 6000;
		case 4:gold += 4000;
		case 5:gold += 2000;
		}
		printf("%d", gold);
		//게임에서의 누적보상을 획득하는 방식의 경우
		//이처럼 case문에 break를 없이 작성해주면
		//상위보상을 받는 사람은 다른 하위보상도
		//모두 함께 받을 수 있게 된다.
	




}
	else if (menu == 4) {
		int x = 30;


	
		if (x > 5) {
			printf("5보다 크다. \n");
		}
		if (x > 10) {
			printf("10보다 크다. \n");
		}
		if (x > 15) {
			printf("15보다 크다. \n");
		}
		//if문을 여러개 작성하면 각각의 if문은
		//독립된 조건문이 되어 다른 if문의 결과와 상관없이
		//조건을 확인하게 된다.
		//반면에 else if 문이나 else문은 if문에서 한번 걸러진
		//다른 조건을 확인하는 용도이기 때문에
		//독립적으로 사용할 수 없고
		//먼저 작성된 조건이 일치한다면, 다른 조건들은
		//무시하게 된다.

		int value = 15;
		if (value % 5 == 0){ //5의 배수다.
	
			if (value % 3 == 0) {
				printf("3과 5의 공배수입니다.\n");
			}
			else {
				printf("5의 배수입니다.\n");
			}
		}
		else {
			printf("5의 배수가 아닙니다.\n");
		}
		//if문을 중첩사용하게 되면
		//한번에 조건을 확인하는게 아니라
		//순서대로 체크하기 때문에 a라는 조건을 만족하고
		//b라는 조건을 만족 하거나/안할때 등으로
		//조건을 통한 프로그램 코드 실행의 분기를 만들 수 있다.





	}
	else 
	{
		printf("입력이 잘못됐습니다.\n");
	}



	return 0;
}