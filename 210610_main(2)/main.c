#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
	구조체(struct)
	언어에서 기본 제공해주는 자료형이 아니라
	사용자의 필요에 의해서 만드는 새로운 자료형
*/

/*
	기존에 존재하는 여러개의 자료형을 묶어서
	하나의 자료형처럼 사용할 수 있도록 만드는 것
*/

struct myCharacter {
	int level;
	float exp;
	char name[256];

};

/*
	구조체 정의방법
*/

/*
	struct 구조체이름{
		구조체에 포함될 변수들
	};
*/

void print_struct(struct myCharacter target) {
	/*
		구조체도 통상적인 자료형처럼
		함수의 매개변수로도 쓸 수 있다.
	*/
	printf("\n");
	printf("구조체의 정보를 출력합니다.\n");
	printf("이름:%s\n", target.name);
	printf("레벨:%d\n", target.level);
	printf("경험치:%0.1f\n", target.exp);
}




struct Book_Information {
	char name[256];
	char writer[256];
	int price;
	int year;

};

void search_book(struct Book_Information b[], int size, char title[256]) {
	for (int i = 0; i < size; i++) {

		if (strcmp(b[i].name, title) == 0) {
			//string compare
			printf("찾으시는 책이 %d번에 존재합니다.\n", i);
			break;
		}
		else if (strcmp(b[i].name, title) != 0 && i == size - 1) {
			printf("찾으시는 책이 존재하지 않습니다.\n");
		}
		//책을 못찾은 경우 ->마지막 책까지 전부 검사한 후에 결정됨.
	}
}

void print_Bstruct(struct Book_Information target[10]) {
	printf("\n\n");
	int i;
	while (1) {
		printf("책번호를 입력해주세요(1~10), 종료(0) : ");
		scanf(" %d", &i);
		if (i > 10) {
			printf("책번호는 10번까지 있습니다.\n");
		}
		else if (i < 0) {
			printf("책번호는 1번부터 있습니다.\n");
		}
		else if (i == 0) {
			printf("프로그램을 종료합니다.\n");
			return;
		}
		else {
			printf("책제목:%s\n책저자:%s\n책가격:%d\n출판년도:%d\n\n", target[i - 1].name, target[i - 1].writer, target[i - 1].price, target[i - 1].year);
		}
		printf("\n\n");
	}
}





int main() {
	
	struct myCharacter chara;
	//정의된 구조체를 사용하는 방법
	//struct 구조체명 변수명;

	int i;

	chara.exp = 98.5f;
	chara.level = 10;
	strcpy(chara.name, "AAA");
	/*
		구조체 내의 변수에 접근하려면
		구조체 변수명,구조체 내부 변수명으로 접근한다.
	*/
	printf("이름:%s\n레벨:%d\n경험치:%0.1f\n", chara.name, chara.level, chara.exp);


	/*
	mycharacter형 변수를 만들어서
	데이터를 입력받아서
	입력된 데이터를 출력해보자.
	*/
	printf("\n\n");
	struct myCharacter wlsdn;
	printf("이름을 입력해주세요 : ");
	scanf(" %s", &wlsdn.name);
	printf("레벨을 입력해주세요 : ");
	scanf(" %d", &wlsdn.level);
	printf("경험치를 입력해주세요 : ");
	scanf(" %f", &wlsdn.exp);

	printf("\n이름:%s\n레벨:%d\n경험치:%0.1f%%\n", wlsdn.name, wlsdn.level, wlsdn.exp);

	struct myCharacter array[5];
	/*
		구조체는 일반적인 자료형처럼 배열로도 만들 수 있다.
	*/
	for (int i = 0; i < 5; i++) {
		strcpy(array[i].name, "행인");
		array[i].level = 1;
		array[i].exp = 50.5f;
	}

	/*
		일반적인 자료형의 배열처럼 반복문을 통해 배열 데이터를
		일괄적으로 교체할 수 있다.
	*/

	print_struct(wlsdn);
	print_struct(chara);
	for (int i = 0; i < 5; i++) {
		print_struct(array[i]);
	}


	printf("내가 만든 구조체 myCharacter의 크기는 %d입니다.", sizeof(struct myCharacter));

	/*
		구조체의 크기(용량)은 구조체 안에 존재하는
		모든 변수들의 크기의 합이다.
	*/

	struct myCharacter test = { 15,33.3,"abc" };
	print_struct(test);

	/*구조체는 배열과 마찬가지로
	구조체 변수를 생성할때 중괄호를 통해
	구조체 내의 데이터를 일괄 초기화할 수 있다.
	단, 구조체 내에서 변수를 선언한 순서에 맞제
	입력해야 한다.*/

	struct myCharacter araays[5] = {
		{1,1.1f,"a"},
		{2,2.2f,"b"},
		{3,3.3f,"c"},
		{4,4.4f,"d"},
		{5,5.5f,"e"}
	};
		/*
			구조체 배열을 일괄 초기화 할때는
			배열을 초기화 하듯 중괄호 안에 데이터를 작성하는데
			작성해야할 데이터가 구조체이기 때문에
			다시 중괄호를 작성하여 각각의 구조체에 들어갈 데이터를
			입력하여 준다.
		*/
	

	/*
		책의 정보를 저장할 구조체를 만들고
		10권의 책을 생성해서 책의 정보를 대입해주고
		
		숫자를 입력하면 해당 숫자에 해당하는 책의 정보를
		출력하도록 만들어보자.
		
		단,책의 정보를 출력하는 것은 함수를 통해서 출력해야 한다.
		제목, 저자, 가격, 출판년도
	*/

	struct Book_Information B_array[10] = {
		{"a책","a작가",10000,1921},
		{"b책","b작가",20000,1922},
		{"c책","c작가",30000,1923},
		{"d책","d작가",40000,1924},
		{"e책","e작가",50000,1925},
		{"f책","f작가",60000,1926},
		{"g책","g작가",70000,1927},
		{"h책","h작가",80000,1928},
		{"i책","i작가",90000,1929},
		{"j책","j작가",100000,1930}

	};

	print_Bstruct(B_array);

	//================================================================================

	struct Book_Information myBook = { "혼공C","서현우",24000,120610 };

	struct Book_Information* p_Book = &myBook;

	/*
		구조체를 포인터로 쓸때도 일반적인 변수 포인터와 마찬가지로
		변수명 앞에(자료형 -구조체- 뒤에) *을 붙인다. */

	printf("\n");
	printf("제목 : %s\n", (*p_Book).name);
	//구조체를 포인터로 사용할때 역참조를 하려면
	//역참조 연산자인 *과 구조체 포인터를 소괄호로 감싸야 한다.


	printf("저자 : %s\n\n", p_Book->writer);

	/*
		구조체 포인터를 통해 구조체 내부의 데이터에 접근할때는
		역참조를 사용할 필요 없이
		.대신에 ->를 통해서 내부 데이터에 접근하면 된다.
	*/


	search_book(B_array, 10, "j책");






























	return 0;
}