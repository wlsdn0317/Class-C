#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//제어문 - 반복문 p.154
	//반복문
	//제시된 조건이 만족하는 동안(참)
	//코드를 지속적으로 반복하여 실행하는 코드
	//while문, for문, do-while

	while (1) {
		printf("1) while문 기초 2)while 연습문제 3)do-while문 4)for문 5)for 연습문제 6)연습문제 7)반복문의 중첩사용 8)반복문 중첩 연습문제 0)종료 : ");
		int insert;
		scanf(" %d", &insert);
		
		if (insert == 1) {

			int i = 0;

			while (i < 10) {//while(반복할 조건){실행할 코드}
				i++;
				printf("i는 %d입니다.\n", i);

			}
			//조건만 맞으면 무한대로 계속 반복하기 때문에
			//프로그램이 부하를 일으켜서 뻗게 된다.
			//while문의 실행순서
			// 
			//조건확인 -> 참 -> 코드실행 -> 다시 조건확인 -> 참 -> 코드실행
			//	 ㄴ
			//위를반복한다.
			//조건확인 과정에서 거짓이 나오면 코드를 실행하지 않고
			//while문이 종료된다.

			printf("\n\n");
			i = 0;
			while (i < 10) {

				printf("i는 %d입니다.\n", i);
				i += 2;//i = i+2, i++;i++;
				int z = 10;
				printf("z는 %d입니다.\n", z);
				z++;

			}

			//반복문 내에서 다시 반복문을 쓸수도 있고
			//반복문 내에서 조건문을 작성하는 것도 가능하다.
			//반복문 내에서 '생성'된 변수는
			//다음 반복이 실행될때 삭제된다.

			
		}

		else if (insert == 2) {
			/*
				1.while문을 이용해서
				:++++++
				위와 같이 출력해보자.
				printf("+")하나만 사용한다.

				2.숫자를 입력받아서 입력받은획수만큼 @를 출력해보자.
				ex)5 -> @@@@@, 3->@@@

				3.숫자를 입력받아서
				@#@#@#
				위와 같이 출력하자.

			*/
			printf("\n\n");
			printf("1.문제\n\n");
			int i = 0;            //기준이 되는 값의 초기값
			while (i < 6) {   //반복하는 조건
				printf("+");
				i++;          //반복할때마다 변화되는 값
			}
			//반복문은 반복문의 기준이 되는 변수값의 시작이 얼마냐에 따라
			//반복할때마다 변수값이 어떻게 변하느냐에 따라
			//조건의 내용이 얼마든지 바뀔 수 있다.

			printf("\n\n");
			printf("2.문제\n\n");
			int num1;
			printf("숫자를 입력해 주세요 : ");
			scanf(" %d", &num1);
			while (num1 > 0) {
				printf("@");
				num1--;
			}

			//반복문의 조건은 고정된 기준일 필요가 없다.
			//변수를 기준으로 반복횟수를 정해도 된다.
			//어떻게 반복문의 조건을 구성하느냐에 따라
			//별도의 변수를 추가로 만들지 않아도 반복문의 구현이 가능하다.

			printf("\n\n");
			printf("3.문제\n\n");
			i = 1;
			int num2;
			printf("숫자를 입력해 주세요 : ");
			scanf(" %d", &num2);
			while (i <= num2) {
				if (i % 2 == 1) {
					printf("@");//i가 홀수일때 @
				}
				else {
					printf("#");//가 짝수 일때 #
				}
				i++;
			}

			//@#$
			i = 0;
			printf("\n\n");
			printf("4.문제\n");
			printf("숫자를 입력해 주세요 : ");
			scanf(" %d", &num2);
			while (i <= num2) {
				if (i % 3 == 1) {
					printf("@");
				}
				else if (i % 3 == 2) {
					printf("#");
				}
				else {
					printf("$");
				}
				i++;
			}
		}

		else if (insert == 3) {
			//=====================================================
			//====================do-while문=======================
			printf("\n\n");
			int i = 5;
			do {
				printf("do-while을 실행합니다.\n");
				i--;
			} while (i > 0);
			//while문에서 조건식이 있는 while- 부분이 중괄호 뒤에 붙고
			//시작부분에는 do가 붙는다.
			//do-while문만이 예외적으로 문작 자체의 끝에 ;이 붙는다.

			//do-while문은 조건과 관계없이, 일단 1번은 무조건 실행한다.


			//코드확인 -> 조건실행 -> 참 -> 코드실행 
			//일반 while문은 조건의 내용에 따라
			//한번도 실행되지 않고 끝날수도 있지만
			//do-while문은 어떠한 경우에도 적어도 한번은 실행이 된다.
		

			
		}

		else if (insert == 4) {
			//=============================================
			//======================for문==================
			//=============================================p.158

			for (int i = 0; i < 5; i++) {
				//while문에서 필요에 따라서 별도로 작성하던
				//변수의 선언, 변수의 증감을
				//문법에 포함해서 작성하는
				//반복문
				//for(초기식; 조건식; 증감식){}
				//실행순서
				//초기식 -> 조건식 -> 실행코드 -> 증감식 -> 조건식
				//초기식은 변수를 새롭게 선언하거나
				//혹은 기존에 있던 변수값을 가져와서 초기화한다.
				//for문 실행시에 가장 먼저 실행되고
				//오직 한번만 실행된다.

				//조건식: 최초 실행시에 초기식 이후에 실행이 되고
				//그 후 반복시에는 증감식 후에 실행이 된다.
				//조건식의 결과에 따라 실행코드(본문)를
				//실행시킬지 여부가 결정된다.

				//증감식:최초 실행시에는 실행되지 않으며
				//실행코드(본문)가 실행된 후에 실행이 된다.
				//반복시에는 증감식이 가장 먼저 실행이 되고
				//그 후에 조건식이 실행이 된다.
				//for 문에 사용하는 기준이 되는 조건식의
				//변수값의 증감에 사용된다.
				//보통은 증감연산자를 사용하지만
				//복합연산자나 수식을 직접 적는 것도 가능하다.
				//ex)i+=2, i=(i+5)*3


			}

			for (int i = 0; i < 6; i++) {
				printf("반복합니다. %d\n", i);
			}
			//for문의 초기식은 반드시 변수를 '새로 만들 필요는 없다.'
			int x = 30;
			
			for (x = 0; x < 5; x++) {
				printf("변수를 항상 새로 만들 필요는 없다.\n");
			}
			//외부의 변수를 초기식에 가져와서 사용한 경우에는
			//해당 변수값이 for문을 통해 바뀐 채로 유지된다.
			//위의 경우 for문이 끝난 뒤 x는 5가 된다.

			//for문의 초기식에서 새로운 변수를 만들 경우에는
			//해당 변수는 for문이 끝난 뒤에 삭제 된다.
			for(int i = 0; i < 10; i++){
			}
			//for문의 반복이 모두 끝난 후에 i가 삭제
			for(int i = 5; i <10; i++){
			}
			//i라는 변수를 두 for문에서 각각 만들고 있지만
			//서로 영향을 끼지지 못하는 완전히 별개의 변수


			//초기식은 초기화가 필요없다면 비워도 된다.
			int xx = 100;
			for ( ; xx > 200; x++) {
				printf("초기화가 필요없다면 초기식은 비워도 된다.\n");
			}
			//단, 초기식을 비우더라도 초기식의 위치를 알 수 있도록
			//세미콜론(;)은 넣어줘야 한다.


			//조건식에 들어가는 조건은 반드시 초기식에서 지정한
			//변수값을 필요는 없다.
			for (int y = 0; xx < 110; xx++) {
				printf("초기화한 변수와 조건변수는 달라도 된다.\n");
			}

			//for (int y = 0; ; y++) {

			//}
			//조건식 부분을 비울 수도 있다.
			//이 경우, 조건 체크가 이루어지지 않기 때문에
			//무한대로 반복한다.

			//조건식에는 변수들끼리 비교도 가능하다.
			int q = 10;
			int w = 20;
			for (q; q < x; q++) {
				printf("변수간의 비교를 통한 조건도 가능하다\n");
			}
			


			//증감식도 생략이 가능하다.
			//단, 이 경우 조건에 변화가 일어나지 않기 때문에
			//실행 코드 내에서 별도로 변수값의 증감이 필요하다.
			for (int i = 0; i < 5;) {
				printf("증감식을 생략합니다.\n");
				i++;
			}
			//혹은 증감식과 본문 코드에서 증감을 모두 사용할 수도 있다.

			for (int i = 0; i < 5;i++) {
				printf("증감식과 본문 모두 사용 합니다.\n");
				i++;
			}












		}
		else if (insert == 5) {
		//for문과 while문은 서로 동일하게 작성 가능하다.
		/*
				1.for문을 이용해서
				:++++++
				위와 같이 출력해보자.
				printf("+")하나만 사용한다.

				2.숫자를 입력받아서 입력받은획수만큼 @를 출력해보자.
				ex)5 -> @@@@@, 3->@@@

				3.숫자를 입력받아서
				@#@#@#
				위와 같이 출력하자.

			*/
			printf("\n\n");
			printf("1.문제\n\n");
			for (int i = 0; i < 6; i++) {
				printf("+");
			}


			printf("\n\n");
			printf("2.문제\n\n");
			int x;
			printf("숫자를 입력해주세요 : ");
			scanf(" %d", &x);
			for (int i = 0; i < x; i++) {
				printf("@");
			}

			printf("\n\n");
			printf("3번문제\n\n");
			printf("숫자를 입력해주세요 : ");
			scanf(" %d", &x);
			for (int i = 0; i < x; i++) {
				if(i % 2 == 0){
					printf("@");
				}
				else {
					printf("#");
				}
			}
			printf("\n\n");
			printf("4.문제\n\n");
			printf("숫자를 입력해주세요 : ");
			scanf(" %d", &x);
			for (int i = 0; i < x; i++) {
				if (i % 3 == 0) {
					printf("@");
				}
				else if (i % 3 == 1) {
					printf("#");
				}
				else {
					printf("$");
				}
			}

			printf("\n\n");

		}
		else if (insert == 6) {
			printf("1.문제 2.문제 3.문제 4.문제 5.문제 6.문제 : ");
			int menu;
			scanf(" %d", &menu);
			if (menu == 1) {
				printf("1.문제\n\n");
				int i = 0;
				while (i < 5) {
					printf("@");
					i++;
				}
				printf("\n\n");
				for (i = 0; i < 5; i++) {
					printf("@");
				}
				printf("\n\n");
				printf("1-2.문제\n\n");
				i = 0;
				while (i < 5) {
					printf("@\n");
					i++;
				}
				printf("\n\n");
				for (i = 0; i < 5; i++) {
					printf("@\n");
				}
			}
			else if (menu == 2) {
				printf("\n\n");
				printf("2.문제\n\n");
				int i = 0;
				while (i < 7) {
					printf("민진우 ");
					i++;
				}
				printf("\n\n");
				for (i = 0; i < 7; i++) {
					printf("민진우 ");
				}
				printf("\n\n");
				printf("2-2.문제\n\n");
				int x;
				printf("반복할 횟수를 입력해주세요 : ");
				scanf(" %d", &x);
				i = 0;
				while (i < x) {
					printf("민진우 ");
					i++;
				}
				printf("\n\n");
				for (i = 0; i < x; i++) {
					printf("민진우 ");
				}
			}
			else if (menu == 3) {
				printf("\n\n");
				printf("3.문제\n\n");
				int i = 0;
				while (i < 9) {
					if (i % 2 == 0) {
						printf("_");
					}
					else if (i % 2 == 1) {
						printf("*");
					}
					i++;
				}
				printf("\n\n");
				for (i = 0; i < 9; i++) {
					if (i % 2 == 0) {
						printf("_");
					}
					else if (i % 2 == 1) {
						printf("*");
					}
				}
				printf("\n\n");
				printf("3-2.문제\n\n");
				i = 0;
				while (i < 9) {
					if (i % 2 == 0) {
						printf("-\n");
					}
					else if (i % 2 == 1) {
						printf("*\n");
					}
					i++;
				}
				printf("\n\n");
				for (i = 0; i < 9; i++) {
					if (i % 2 == 0) {
						printf("-\n");
					}
					else if (i % 2 == 1) {
						printf("*\n");
					}

				}
			}
			else if (menu == 4) {
				printf("\n\n");
				printf("4.문제\n\n");
				int i=1;
				while (i <= 10) {
					printf("숫자 %d ",i);
					i++;
				}
				printf("\n\n");
				for ( i = 1; i <= 10; i++) {
					printf("숫자 %d ", i);
				}
				printf("\n\n");
				printf("4-2.문제\n\n");
				i = 10;
				while (i >= 1) {
					printf("숫자 %d", i);
					i--;
				}
				printf("\n\n");
				for ( i = 10; i >= 1; i--) {
					printf("숫자 %d ", i);
				}
			}
			else if (menu == 5) {
				printf("\n\n");
				printf("5.문제\n\n");
				int i = 100;
				while (i >= 50) {
					printf("%d ", i);
					i--;
				}
				printf("\n\n");
				for ( i = 100; i >= 50; i--) {
					printf("%d ", i);
				}

				printf("\n\n");
				printf("5-2.문제\n\n");
				i = 50;
				while (i <= 100) {
					printf("%d ", i);
					i++;
				}
				printf("\n\n");
				for (i = 50; i <= 100; i++) {
					if (i % 5 == 0) {
						printf("%d ", i);
					}
				}
			}
			else if (menu == 6) {
			/*
			구구단 2단을 출력하자
			*/
			/*
			2x1=2
			2x2=2
			...
			2x9=18
			*/
			printf("구구단 2단을 출력하자.\n\n");
			int i = 1;
			while (i <= 9) {
				printf("2x%d = %d\n", i, 2 * i);
				i++;
			}
			printf("\n\n");
			for (i = 1; i <= 9; i++) {
				printf("2x%d = %d\n", i, 2 * i);
			}
			printf("\n\n");
			printf("구구단을 만들어보자.\n\n");
			i = 1;
			int j;
			printf("구구단 몇단을 출력할지 입력해주세요 : ");
			scanf(" %d", &j);
			while (i <= 9) {
				printf("=%d 단= ", j);
				printf("%d x %d = %d\n", j, i, j* i);
				i++;
			}
			printf("\n\n");
			for (i = 1; i <= 9; i++) {
				printf("=%d 단= ", j);
				printf("%d x %d = %d\n", j, i, j* i);
			}

}
			else {
			printf("잘못 입력 하셨습니다.\n");
}
		}
		else if (insert == 7) {
			//반복문의 중첩사용
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					printf("*");
				}
				printf("\n");
			}

			//반복문 안에서 반복문을 실행시켜서
			//내부의 반복문을 바깥의 반복문 만큼
			//실행시킨다.
			//안의 실행횟수 * 바깥 실행횟수

			/*
				구구단 만들기.
				2~9단 전부 출력.
			*/
			printf("\n\n");

			for (int i = 2; i <= 9; i++) {
				for (int j = 1; j <= 9; j++) {
					printf("%dx%d=%d \t", i, j, i* j);
				}
				printf("\n");
			}
			printf("\n\n");

			for (int i = 1; i <= 9; i++) {
				for (int j = 2; j <= 9; j++) {
					printf("%dx%d=%d \t", j, i, j* i);
				}
				printf("\n");
			}



		}
		else if (insert == 8) {
		printf("\n\n");
		printf("1.문제\n");
		for (int i = 1; i <= 5; i++) {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
		printf("\n\n");
		printf("2.문제\n");
		for (int i = 5; i >= 1; i--) {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
		printf("\n\n");
		printf("3.문제\n");
		for (int i = 1; i <= 5 ; i++) {
			for (int j = 5; j>0; j--) {
				if (j <= i) {
					printf("*");
				}
				else { 
					printf(" "); 
				}
			}
			printf("\n");
		}
		printf("\n\n");
		printf("4.문제\n");
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <=5; j++) {
				if (j >= i) {
					printf("*");
				}
				else {
					printf(" ");
				}

			}
			printf("\n");
		}
		printf("\n\n");
		printf("5.문제\n");
		for (int i = 0; i < 5; i++) {
			for (int j = 1; j <= 9; j++) {
				if (j <= 5 + i && j >= 5 - i) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n\n");
		printf("6.문제\n");
		for (int i = 0; i < 5; i++) {
			for (int j = 1; j <= 9; j++) {
				if (j <= 9 - i && j >= 1 + i) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n\n");
		printf("7.문제\n");

		printf("\n\n");
		printf("8.문제\n");
		printf("\n\n");
		printf("9.문제\n");






		}

		else if (insert == 0) {
		return 0;
}
		
		
		

























	printf("\n\n");

	}
	return 0;
}