#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//함수
/*코드 내용을 변수처럼 이름으로 묶어서
이름만 사용하면 해당 코드내용이 실행 될 수 있도록
코드를 압축하는 방식*/

int info() {
	/*함수 생성하는 방법
	반환형(자료형) 함수명(){실행시킬 코드}*/
	printf("이름:민진우\n");
	printf("나이:30\n");
	printf("키:175.1\n");
	printf("혈액형:O형\n\n");
	return 0;
}
int add() {
	printf("더해줄 숫자 2개를 입력하세요.\n");
	int i, j;
	scanf(" %d %d", &i, &j);
	printf("%d+%d=%d입니다.\n\n", i, j, i + j);
	return 0;
}

/*함수를 만들때는 다른 함수 안에서는 만들수 없다.
반드시 다른 함수 밖에서 만들어야 한다.*/

int sub() {
	printf("빼기를 할 숫자 2개를 입력하세요.\n");
	int i, j;
	scanf(" %d %d", &i, &j);
	printf("%d-%d=%d\n\n", i, j, i - j);
	return 0;
}
int mult() {
	printf("곱하기를 할 숫자 2개를 입력하세요.\n");
	int i, j;
	scanf(" %d %d", &i, &j);
	printf("%dx%d=%d\n\n", i, j, i * j);
	return 0;
}
int div() {
	printf("나누기를 할 숫자 2개를 입력하세요.\n");
	int i, j;
	scanf(" %d %d", &i, &j);
	if (j == 0) {
		printf("두번째 숫자에 0이 아닌 숫자를 입력해주세요.\n");
		return 0;
		//함수 중간에 리턴이 들어갔기 때문에
		//해당 조건 하에서는 함수가 여기서 종료되고
		//아래의 코드는 실행되지 않는다.
	}
	
	printf("%d÷%d=%d\n\n", i, j, i / j);
	
	return 0;
}
int tmp() {
	printf("나머지를 구할 숫자 2개를 입력하세요.\n");
	int i, j;
	scanf(" %d %d", &i, &j);
	if (j == 0) {
		printf("두번째 숫자에 0이 아닌 숫자를 입력해주세요.\n");
		return 0;
	}
	printf("%d%%%d=%d\n\n", i, j, i % j);
	
	/*printf에서 %는 서식문자용으로 사용되기 때문에
	%는 단순문자로 사용하려면 %% 를 입력한다.*/
	return 0;
}

/*함수 안에서 다른 함수를 불러서 사용하는 것이 가능하다.
단, 사용하려는 함수보다 아래에 해당 함수가 존재해야 한다.
프로그램은 위에서 아래로 만들어지기 때문에
자신보다 아래에 있는 함수를 실행시키려 하면
해당함수는 아직 만들어지기 전으로 인식하기 때문에
정상동작이 보장되지 않는다.*/

int calc() {
	printf("계산할 연산자를 입력하세요\n");
	char c;
	scanf(" %c", &c);
	switch (c) {
	case '+' :
		add();
		break;
	case '-':
		sub();
		break;
	case '*':
		mult();
		break;
	case '/':
		div();
		break;
	case '%':
		tmp();
		break;
	default:
		printf("연산자를 잘 못 입력하셨습니다.\n");
		break;
	}
	return 0;
}


int myFunc() {
	/*함수명 앞에 붙는 자료형은
	반환형이라고 하며
	해당 함수를 실행했을 때
	실행된 결과로써 어떠한 형태의 값이
	함수를 호출한 곳으로 반환(전달)되는지를
	나타내는 값*/



	return 100;
	/*해당 함수를 실행한 결과값으로써
	어떤 값을 반환해 줄 것인지를 나타낸다.*/
}

int myFunc2() {

	return 3.14;
	/*반환형이 int형이기 때문에
	리턴값을 float형으로 주더라도
	반환되는 값은 int형인 3이 된다.*/

	/*반환형에 따라서는 알맞은 데이터를
	리턴하지 않으면 에러가 나기도 한다.*/
}

char myFunc3() {

	/*함수에 리턴값을 입력해주지 않으면
	프로그램에서 자동적으로 기본값에 해당하는 값을
	리턴해주기도 한다.
	
	
	하지만 프로그램언어나 툴에 따라서는
	반환값이 없으면 에러를 내는 경우가 존재한다.*/
	
	/*따라서 생략하기 보다는 무조건 함수에는
	return값을 넣어줘야 한다.
	*/
}

int myFunc4() {
	/*함수의 리턴값은
	함수를 실행한 목적이 되는 반환값을
	전달하는 역할이기 때문에
	리턴이 실행된 시점에서 함수를 실행한 목적을
	탈성했다고 보기 때문에
	리턴 이후의 코드는 실행이 되지 않고
	함수 자체가 종료가 된다.
	따라서 리턴은 함수를 종료시키는 역할을 의미하기도 한다.*/

}


int myFunc5() {
	while (1) {
		if (5 > 3) {
			break;
			//break는 반복문만을 종료시키기 때문에
			//반복문 밖에 있는 코드가 마저 실행이 된다.
			return 0;
			//반면에 return은 함수를 종료시키기 때문에
			//while문 뿐 아니라 while이 포함된 함수 전체를
			//종료시켜서 나머지 코드가 실행이 안된다.
		}
	}
	printf("반복문이 종료됐습니다.\n"); 
}

/*
	더하기,빼기,곱하기,나누기를 함수로 만들어 보자.
	단, 함수 내에서 계산결과를 출력하지 말고
	계산의 결과를 return을 통해 반환하여서
	함수를 호출한 쪽에서 계산결과를 출력하도록 만들자.
*/

int add1() {
	int i, j;
	printf("더하기를 할 숫자 2개를 입력해주세요.\n");
	printf("첫번째 숫자를 입력해주세요 : ");
	scanf(" %d", &i);
	printf("두번째 숫자를 입력해주세요 : ");
	scanf(" %d", &j);
	
	int add = i + j;
	return add;
}
int sub1() {
	int i, j;
	printf("빼기를 할 숫자 2개를 입력해주세요.\n");
	printf("첫번째 숫자를 입력해주세요 : ");
	scanf(" %d", &i);
	printf("두번째 숫자를 입력해주세요 : ");
	scanf(" %d", &j);

	int sub = i - j;
	return sub;
}
int mult1() {
	int i, j;
	printf("곱하기를 할 숫자 2개를 입력해주세요.\n");
	printf("첫번째 숫자를 입력해주세요 : ");
	scanf(" %d", &i);
	printf("두번째 숫자를 입력해주세요 : ");
	scanf(" %d", &j);

	return i * j;
}
int div1() {
	int i, j;
	printf("나누기를 할 숫자 2개를 입력해주세요.\n");
	printf("첫번째 숫자를 입력해주세요 : ");
	scanf(" %d", &i);
	while (1) {
		printf("두번째 숫자를 입력해주세요 : ");
		scanf(" %d", &j);
		if (j == 0) {
			printf("분모에 0을 입력 할 수 없습니다.\n");
			printf("두번째 숫자를 다시 입력해주세요\n\n");
		}
		else {
			return i / j;
		}
	}
	
}
int tmp1() {
	int i, j;
	printf("나머지를 구할 숫자 2개를 입력해주세요.\n\n");
	printf("첫번째 숫자를 입력해주세요 : ");
	scanf(" %d", &i);
	while (1) {
		printf("두번째 숫자를 입력해주세요 : ");
		scanf(" %d", &j);
		if (j == 0) {
			printf("분모에 0을 입력 할 수 없습니다.\n\n");
			printf("두번째 숫자를 다시 입력해주세요\n");
			continue;
		}
		else {
			return i % j;
		}
	}
}

void justCall() {
	/*함수의 반환형이 void일 경우에는
	해당 함수는 함수의 실행결과로써
	아무런 값도 반환하지 않겠다는 뜻이기 때문에
	return을 생략해도 된다.*/
	return;
	/*혹은 return을 하더라도 리턴뒤에 값을 적을 필요가 없다.*/

	return 3;
	//혹여, 리턴 뒤에 값을 넣더라도 해당 값은 전달되지 않는다.
}

//함수의 매개변수(파라매터)
void add3(int x) {
	/*함수 선언의 소괄호 안에 들어가는 변수는
	매개변수(파라매터)라고 하며
	해당 함수를 실행시키기 위해서 "반드시 필요한"
	데이터를 의미한다.

	ex)printf()함수는 매개변수로 문자열을 필요로 한다.*/

	//매개변수는 해당함수가 필요로 하는 변수를
	//새롭게 선언해서 넣어주면 된다.
	//매개변수의 핵심은 자료형
	//변수의 이름 자체는 중요하지않다.(아무이름이나 상관이없다.)

	/*함수를 호출할때 넣어준 매개변수는
	함수 내에서 매개변수로 선언해준 변수로 취급이 된다.
	상수를 넣었든, 다른 이름을 가진 변수를 넣었든
	계산식을 넣었든, 또다른 함수를 넣었든
	그 결과값(데이터)는 x에 대입이 되어서
	함수 내에서는 변수x로 취급된다.*/


	printf("%d의 재곱은 %d입니다.\n", x, x * x);

}
void myFunc6(int x, int y, float f, char c) {
	/*함수의 매개변수는 여러개를 넣을 수 있고
	서로 다른 자료형도 추가할 수 있다.*/

	printf("\nx: %d y:%d f:%0.1f c:%c\n", x, y, f, c);
}



void amStudy() {
	//info();
	/*함수를 호출(사용)할때는
	함수명을 작성하고 뒤에 소괄호를 붙여준다.
	소괄호가 없으면 함수명이 아닌 변수명으로
	프로그램이 인식하게 된다.*/

	/*함수는 동일한 기능을 가지는 코드를
	반복해서 사용해야 하는 경우에
	불필요한 반복된 코드 작성을 줄여
	프로그래머가 편리하게 코드작성을 할 수 있게 해준다.*/

	//info();
	//info();
	//info();

	//add();
	///*빼기, 곱하기, 나누기, 나머지를 출력해주는
	//함수를 만들어서 main에서 실행해보자.*/
	//sub();
	//mult();
	//div();
	//tmp();

	//calc();

	printf("함수실행결과 : %d\n", myFunc());

	/*함수를 사용할때는
	함수를 호출하여 실행되는 코드 자체가 목적인 경우와
	함수를 실행한 뒤 return(반환)되는 결과값이
	목적인 경우. 두가지 경우가 있다.*/

	int result = myFunc();
	/*함수에서 리턴되는 결과값을
	변수에 저장하여 사용하는 것도 가능ㅎㅏ다*/

	myFunc();
	/*함수의 결과값이 목적인 함수를
	호출만 한다면 결과값은 다음줄이 실행됨과 동시에
	폐기되기 때문에 실질적으로 아무런 의미가 없어진다.*/

	printf("리턴이 없는 함수의 반환값 : %c\n\n", myFunc3());
	/*리턴이 없는 함수를 실행한 반환값은
	정상적인 값이 나올수도, 그렇지 않을수도 있다.*/

	printf("계산할 연산자를 입력하세요 : ");
	int r;
	char c;
	scanf(" %c", &c);
	switch (c) {
	case '+':
		r = add1();
		printf("더한 값 : %d\n", r);
		break;
	case '-':
		r = sub1();
		printf("뺀 값 : %d\n", r);
		break;
	case '*':
		r = mult1();
		printf("곱한 값 : %d\n", r);
		break;
	case '/':
		r = div1();
		printf("나눈 값 : %d\n", r);
		break;
	case '%':
		r = tmp1();
		printf("나머지 : %d\n", r);
		break;
	default:
		printf("연산자를 잘 못 입력하셨습니다.\n");
		break;
	}
	
	printf("\n함수에 매개변수를 넣고 실행합니다.\n");
	add3(r);
	add3(10);
	add3(r + 50);
	add3(add1());
	/*함수의 매개변수에는 요구하는 자료형만 맞으면 되기 때문에
	해당 자료형과 같은 변수, 상수, 계산식
	심지어 반환형이 같은 함수를 넣어도 된다.
	매개변수로 들어가는 데이터의 이름은 아무런 관계가 없다.*/

	myFunc6(10, 77, 99.9f,'x');
	/*함수에서 매개변수는 여러개를 넣을 수 있고
	서로 다른 자료형도 추가할 수 있다.*/

	return 0;
}
//========================================================================


/*
	1. 숫자를 입력하면 해당 숫자의 홀/짝을 출력하는
	함수를 만들어보자. 숫자는 매개변수를 통해 받는다.
*/
void Hol_Jjak(int i) {
	if (i % 2 == 0) {
		printf("%d는 짝수입니다.\n", i);
	}
	else {
		printf("%d는 홀수입니다.\n", i);
	}
}

/*
	1.2.숫자를 입력하면 해당 숫자의 음수/양수를 출력하는
	함수를 만들어보자. 숫자는 매개변수를 통해 받는다.
*/
void MinPl(int i) {
	if (i > 0) {
		printf("%d는 양수 입니다.\n", i);
	}
	else if (i < 0) {
		printf("%d는 음수 입니다.\n", i);
	}
	else if(i==0) {
		printf("%d는 '0' 입니다.\n", i);
	}
}
/*
	2-1 매개변수로 숫자를 2개 입력받아서
	둘 중 더 큰숫자를 반환하는 함수를 만들자.
	두 값이 같으면 둘 중 아무나 반환한다.
	반환된 값은 함수를 호출한 곳에서 출력하여
	결과값이 화면에 보일수 있도록 작성한다.
*/
int Bigger(int i, int j) {
	if (i > j) {
		return i;
	}
	else if (j > i) {
		return j;
	}
	else {
		return i;
	}
}

int Bigger2(int i, int j) {
	int result;//둘중 더 큰 수를 저장할 변수
	if (i > j) {
		result = i;
	}
	else if (i < j) {
		result = j;
	}
	else {
		result = i;
	}
	return result;
}
/*
	2-2매개변수로 숫자를 3개 입력받아서
	셋중 더 작은 숫자를 반환하는 함수를 만들자.
	가장 작은 숫자가 둘 이상이라면
	둘중 아무나 반환한다.
	반환된 값은 함수를 호출한 곳에서 출력해서
	결과값을 확인할 수 있도록 작성한다.
*/
int Minimum(int x, int y, int z) {
	int min = x;
	if (min >= y) {
		min = y;
		if(min >= z){
			min = z;
		}
	}
	return min;
	
}
/*
	3-1매개변수로 점수를 3개 입력받아서
	점수의 평균을 반환하는 함수를 만들자.
	점수는 정수형으로 입력 받으며
	평균은 실수형으로 계산한다.
*/
float average(int i, int j, int k) {
	/*
		매개변수로 입력받는 숫자는 정수지만
		반환해야하는 평균은 실수이기 때문에
		반환형은 실수, 매개변수는 정수로 사용한다.
	*/

	float result = (i + j + k) / (float)3;
	/*
		반환값인 평균은 실수형이고
		계산하는 점수는 정수형이기 때문에
		형변환 연산자를 이용해서 숫자를 하나 실수로 변경해서
		평균값이 소수점 이하까지 계산되도록 만든다.
	*/
	return result;
}
/*
	3-2 매개변수로 점수 3개를 정수로 입력받아서
	점수의 평균을 실수형으로 계산하여
	점수의 평균값에 따라 학점을 반환하는 함수를 만들자.
	90>= A,80>=B,70>=C,60>=D,나머지 F
*/
char grade(int i, int j, int k) {
	float ave = average(i, j, k);
	char rank;
	if (i <= 100 && j <= 100 && k <= 100 && i >= 0 && j >= 0 && k >= 0) {
		if (ave >= 90) {
			rank = 'A';
		}
		else if (ave >= 80) {
			rank = 'B';
		}
		else if (ave >= 70) {
			rank = 'C';
		}
		else if (ave >= 60) {
			rank = 'D';
		}
		else if (ave < 60) {
			rank = 'F';
		}
	}
	else {
		printf("점수를 잘 못 입력하셨습니다.\n");
		return 'X';
	}
	return rank;
}

//배열을 함수의 매개변수로 사용하는 경우
void printAry(int ary[10]) {
	for (int i = 0; i < 10; i++) {
		printf("ary[%d] : %d\n", i, ary[i]);
	}
}

void printAry2(int ary[10],int length) {
	/*
		배열을 출력하는 함수이지만
		배열 전체가 입력되지 않는 경우도 있기 때문에
		배열 몇번까지 출력을 해야하는지
		사용중인 배열의 길이를 추가로 입력받는다.
	*/
	for (int i = 0; i < length; i++) {
		printf("ary[%d] : %d\n", i, ary[i]);
	}
}

/*
	재귀함수	
	함수 안에서 자기 자신 함수를 부른다.
*/
void fruit(int i) {
	printf("apple%d\n",i);
	if (i > 5) {
		return;
	}
	fruit(i+1);
	printf("i: % d\n", i);
}
//팩토리얼을 재귀함수로 만들기
int facto(int i) {
	if (i == 1) {
		return 1;
	}
	else {
		return i * facto(i-1);
	}
}


int main() {
	int xx = facto(4);
	printf("4! = %d\n", xx);
	//4*facto(3)->3*facto(2)->2*facto(1)->1
	//1->2*1 ->3*2*1 -> 4*3*2*1
	//반복문과 달리 재귀함수를 사용하면
	//호출된 순서의 역순으로 결과가 계산되기 시작한다.
	

	int i;
	printf("홀짝을 확인할 숫자를 입력하세요.\n");
	scanf(" %d", &i);
	Hol_Jjak(i);

	int j;
	printf("음수 양수를 확인할 숫자를 입력하세요.\n");
	scanf(" %d", &j);
	MinPl(j);

	printf("비교할 숫자 2개를 입력하세요.\n");
	scanf(" %d %d", &i, &j);
	int large = Bigger(i, j);
	printf("더 큰 수는 %d입니다.\n", large);
	printf("더 큰 수는 %d입니다.\n", Bigger(i, j));
	
	int k;
	printf("비교할 숫자 3개를 입력하세요\n");
	scanf(" %d %d %d", &i, &j, &k);
	int small = Minimum(i, j, k);
	printf("가장 작은 숫자는 %d입니다.\n", Minimum(i, j, k));
	printf("가장 작은 숫자는 %d입니다.\n", small);
	
	printf("점수 3개를 입력하세요.\n");
	scanf(" %d %d %d", &i, &j, &k);
	float ave = average(i, j, k);
	printf("%d %d %d의 평균은 %0.1f입니다.\n", i, j, k, ave);
	
	printf("점수 3개를 입력하세요.\n");
	scanf(" %d %d %d", &i, &j, &k);
	char g = grade(i, j, k);
	ave = average(i, j, k);
	printf("당신의 평균은 %0.1f,학점은 '%c'학점 입니다.\n",ave,g);


	int ary[10] = { 10,20,30,40,50,60,70,80,90,100 };
	printAry(ary);
	/*
		매개변수로 배열을 사용할 때는
		배열 전체를 전달해야 하기 때문에
		인덱스 없이 배열명을 그대로 함수의 매개변수로
		작성하여 넣는다.
	*/


	int ary2[10];
	ary2[0] = 100;
	ary2[1] = 200;
	ary2[2] = 300;
	ary2[3] = 400;
	ary2[4] = 500;
	printAry2(ary2,5);

	return 0;
}