#include "monster.h"

monster::monster()
{
	//���� �ʱ� �ɷ�ġ
	atk = 5;
	def = 2;
	hp = 20;
	exp = 10;
	gold = 15;
	deadTime = 10.0f;
	printf("\n\n");
}

void monster::attack()
{
	printf("���Ͱ� %d��ŭ�� ������ �����մϴ�.\n", atk);
}

void monster::damage(int i)
{
	printf("���Ͱ� %d��ŭ�� ���ظ� �Խ��ϴ�.\n", i-def);
	hp -= i - def;
	//���� ���������� �濩�¸�ŭ ���ҽ�Ų �������
	//ü�¿��� ����.
}

void monster::die()
{
	printf("���Ͱ� ���������ϴ�.\n");
	printf("����ġ�� %f ȹ���߽��ϴ�.\n", exp);
	printf("���� %d ȹ���߽��ϴ�.\n", gold);
	
	rare_drop = 100;
	rareGet();
	//private ����� ������ �Լ���
	//�ش� Ŭ���������� ����� �� �ִ�.
}

void monster::rareGet()
{
}
