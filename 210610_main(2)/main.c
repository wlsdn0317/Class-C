#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
	����ü(struct)
	���� �⺻ �������ִ� �ڷ����� �ƴ϶�
	������� �ʿ信 ���ؼ� ����� ���ο� �ڷ���
*/

/*
	������ �����ϴ� �������� �ڷ����� ���
	�ϳ��� �ڷ���ó�� ����� �� �ֵ��� ����� ��
*/

struct myCharacter {
	int level;
	float exp;
	char name[256];

};

/*
	����ü ���ǹ��
*/

/*
	struct ����ü�̸�{
		����ü�� ���Ե� ������
	};
*/

void print_struct(struct myCharacter target) {
	/*
		����ü�� ������� �ڷ���ó��
		�Լ��� �Ű������ε� �� �� �ִ�.
	*/
	printf("\n");
	printf("����ü�� ������ ����մϴ�.\n");
	printf("�̸�:%s\n", target.name);
	printf("����:%d\n", target.level);
	printf("����ġ:%0.1f\n", target.exp);
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
			printf("ã���ô� å�� %d���� �����մϴ�.\n", i);
			break;
		}
		else if (strcmp(b[i].name, title) != 0 && i == size - 1) {
			printf("ã���ô� å�� �������� �ʽ��ϴ�.\n");
		}
		//å�� ��ã�� ��� ->������ å���� ���� �˻��� �Ŀ� ������.
	}
}

void print_Bstruct(struct Book_Information target[10]) {
	printf("\n\n");
	int i;
	while (1) {
		printf("å��ȣ�� �Է����ּ���(1~10), ����(0) : ");
		scanf(" %d", &i);
		if (i > 10) {
			printf("å��ȣ�� 10������ �ֽ��ϴ�.\n");
		}
		else if (i < 0) {
			printf("å��ȣ�� 1������ �ֽ��ϴ�.\n");
		}
		else if (i == 0) {
			printf("���α׷��� �����մϴ�.\n");
			return;
		}
		else {
			printf("å����:%s\nå����:%s\nå����:%d\n���ǳ⵵:%d\n\n", target[i - 1].name, target[i - 1].writer, target[i - 1].price, target[i - 1].year);
		}
		printf("\n\n");
	}
}





int main() {
	
	struct myCharacter chara;
	//���ǵ� ����ü�� ����ϴ� ���
	//struct ����ü�� ������;

	int i;

	chara.exp = 98.5f;
	chara.level = 10;
	strcpy(chara.name, "AAA");
	/*
		����ü ���� ������ �����Ϸ���
		����ü ������,����ü ���� ���������� �����Ѵ�.
	*/
	printf("�̸�:%s\n����:%d\n����ġ:%0.1f\n", chara.name, chara.level, chara.exp);


	/*
	mycharacter�� ������ ����
	�����͸� �Է¹޾Ƽ�
	�Էµ� �����͸� ����غ���.
	*/
	printf("\n\n");
	struct myCharacter wlsdn;
	printf("�̸��� �Է����ּ��� : ");
	scanf(" %s", &wlsdn.name);
	printf("������ �Է����ּ��� : ");
	scanf(" %d", &wlsdn.level);
	printf("����ġ�� �Է����ּ��� : ");
	scanf(" %f", &wlsdn.exp);

	printf("\n�̸�:%s\n����:%d\n����ġ:%0.1f%%\n", wlsdn.name, wlsdn.level, wlsdn.exp);

	struct myCharacter array[5];
	/*
		����ü�� �Ϲ����� �ڷ���ó�� �迭�ε� ���� �� �ִ�.
	*/
	for (int i = 0; i < 5; i++) {
		strcpy(array[i].name, "����");
		array[i].level = 1;
		array[i].exp = 50.5f;
	}

	/*
		�Ϲ����� �ڷ����� �迭ó�� �ݺ����� ���� �迭 �����͸�
		�ϰ������� ��ü�� �� �ִ�.
	*/

	print_struct(wlsdn);
	print_struct(chara);
	for (int i = 0; i < 5; i++) {
		print_struct(array[i]);
	}


	printf("���� ���� ����ü myCharacter�� ũ��� %d�Դϴ�.", sizeof(struct myCharacter));

	/*
		����ü�� ũ��(�뷮)�� ����ü �ȿ� �����ϴ�
		��� �������� ũ���� ���̴�.
	*/

	struct myCharacter test = { 15,33.3,"abc" };
	print_struct(test);

	/*����ü�� �迭�� ����������
	����ü ������ �����Ҷ� �߰�ȣ�� ����
	����ü ���� �����͸� �ϰ� �ʱ�ȭ�� �� �ִ�.
	��, ����ü ������ ������ ������ ������ ����
	�Է��ؾ� �Ѵ�.*/

	struct myCharacter araays[5] = {
		{1,1.1f,"a"},
		{2,2.2f,"b"},
		{3,3.3f,"c"},
		{4,4.4f,"d"},
		{5,5.5f,"e"}
	};
		/*
			����ü �迭�� �ϰ� �ʱ�ȭ �Ҷ���
			�迭�� �ʱ�ȭ �ϵ� �߰�ȣ �ȿ� �����͸� �ۼ��ϴµ�
			�ۼ��ؾ��� �����Ͱ� ����ü�̱� ������
			�ٽ� �߰�ȣ�� �ۼ��Ͽ� ������ ����ü�� �� �����͸�
			�Է��Ͽ� �ش�.
		*/
	

	/*
		å�� ������ ������ ����ü�� �����
		10���� å�� �����ؼ� å�� ������ �������ְ�
		
		���ڸ� �Է��ϸ� �ش� ���ڿ� �ش��ϴ� å�� ������
		����ϵ��� ������.
		
		��,å�� ������ ����ϴ� ���� �Լ��� ���ؼ� ����ؾ� �Ѵ�.
		����, ����, ����, ���ǳ⵵
	*/

	struct Book_Information B_array[10] = {
		{"aå","a�۰�",10000,1921},
		{"bå","b�۰�",20000,1922},
		{"cå","c�۰�",30000,1923},
		{"då","d�۰�",40000,1924},
		{"eå","e�۰�",50000,1925},
		{"få","f�۰�",60000,1926},
		{"gå","g�۰�",70000,1927},
		{"hå","h�۰�",80000,1928},
		{"iå","i�۰�",90000,1929},
		{"jå","j�۰�",100000,1930}

	};

	print_Bstruct(B_array);

	//================================================================================

	struct Book_Information myBook = { "ȥ��C","������",24000,120610 };

	struct Book_Information* p_Book = &myBook;

	/*
		����ü�� �����ͷ� ������ �Ϲ����� ���� �����Ϳ� ����������
		������ �տ�(�ڷ��� -����ü- �ڿ�) *�� ���δ�. */

	printf("\n");
	printf("���� : %s\n", (*p_Book).name);
	//����ü�� �����ͷ� ����Ҷ� �������� �Ϸ���
	//������ �������� *�� ����ü �����͸� �Ұ�ȣ�� ���ξ� �Ѵ�.


	printf("���� : %s\n\n", p_Book->writer);

	/*
		����ü �����͸� ���� ����ü ������ �����Ϳ� �����Ҷ���
		�������� ����� �ʿ� ����
		.��ſ� ->�� ���ؼ� ���� �����Ϳ� �����ϸ� �ȴ�.
	*/


	search_book(B_array, 10, "jå");






























	return 0;
}