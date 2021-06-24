#include "CHero.h"
#include "hpPotion.h"

CHero::CHero()
{
	strcpy(name, "�÷��̾�");
	level = 1;
	 str=5;
	 dex=5;
	 wis=5;
	 hp=20;
	 mp=10;
	 mHp = hp;
	 mMp = mp;
	 exp=0;
	 inventory[0] = new hpPotion();
	 inventory[1] = nullptr;
	 inventory[2] = nullptr;
	 inventory[3] = nullptr;
	 inventory[4] = nullptr;
		
}

CHero::CHero(char insert_name[256])
{
	strcpy(name, insert_name);
	level = 1;
	str = 5;
	dex = 5;
	wis = 5;
	hp = 20;
	mp = 10;
	exp = 0;
	inventory[0] = new hpPotion();
	inventory[1] = nullptr;
	inventory[2] = nullptr;
	inventory[3] = nullptr;
	inventory[4] = nullptr;
}

void CHero::info()
{
	printf("�̸�:%s\n",name);
	printf("����:%d\n",level);
	printf("��:%d\n",str);
	printf("��:%d\n",dex);
	printf("��:%d\n",wis);
	printf("HP:%d\n", hp);
	printf("MP:%d\n", mp);
	printf("����ġ:%0.2f\n",exp);
}

int CHero::attack()
{
	//�Լ� rand(): ������ ���ڸ� ����� �Լ���
	//���� ������ ������ ���� ���� ������
	//��������� ���ڸ� �̿��Ͽ� ���� ���� �������� ���ڷ�
	//�٤Ӳ��� �ʿ䰡 �ִ�.
	

	
	int i = rand() % 101;
	//������ ���ڸ� ������ ������ ���� �̿��ϸ�
	//������ ������ ������ �� �ִ�.

	int myDamage = str;//�⺻������ ����
	if (i < 20) {
		myDamage *= 2;
	}
	return myDamage;
}

void CHero::damaged(int damage)
{
	int dodge = rand() % 100;
	dodge += dex;
	//�����ϰ� ������ ȸ������
	//dex��ŭ�� ���ؼ� ȸ������ �����Ѵ�.

	if (dodge >= 80) {
		printf("������ ȸ���߽��ϴ�.\n");
		return;
	}
	hp -= damage;
	printf("%d�� ���ظ� �޾ҽ��ϴ�.\n", damage);
	printf("ü���� %d ���ҽ��ϴ�.\n", hp);
	if (hp <= 0) {
		die();
	}

}

void CHero::die()
{
	printf("ü���� ��� �����Ͽ����ϴ�.\n");
	printf("����� �׾����ϴ�.\n");
}

void CHero::levelUp(float i)
{
	exp += i;
	printf("����ġ�� %d ȹ���߽��ϴ�.\n", i);
	printf("���� ����ġ�� %f�Դϴ�.\n", exp);

	if (exp > level * 10) {
		printf("�������߽��ϴ�.\n\n");
		exp -= 10 * level;
		level++;
		str *= 2;
		dex *= 2;
		wis *= 2;
		mHp *= 2;
		mMp *= 2;
		hp = mHp;
		mp = mMp;
		
		info();
		printf("\n");
	}
}

int CHero::skill(int i)
{
	printf("��ų�� �����ϴ�.\n");

	return 0;
}
