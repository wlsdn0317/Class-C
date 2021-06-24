#include "myPlayer.h"
#include "hpPotion.h"
#include "mpPotion.h"
#include "stPotion.h"
//��������� ���� Ŭ������ ������� ������
//cpp������ ���� Ŭ������ ����ϱ� ������
//cpp���� ���� Ŭ������ include�Ѵ�.
myPlayer::myPlayer()
{
	hp = 30;
	mp = 20;
	st = 100;
	strcpy(name, "�÷��̾�1");

	inventory[0] = new hpPotion;
	inventory[1] = new hpPotion;
	inventory[1]->rare_item(3);
	inventory[2] = new mpPotion(3);
	inventory[3] = new mpPotion(2);
	inventory[4] = new stPotion;
	//������ �������� �����Ǹ� �⺻������
	//�����Ⱚ�� ������ �ȴ�
	//������ �̴� �����Ͱ� ���°� �ƴ϶�
	//�����Ⱚ�� ���� ���̱� ������
	//�������� �������� �Ǵ��� �Ұ����ϴ�.
	//���� �������� ���, �����Ͱ� ���ٸ�
	//�ش� �����ʹ� ����ִٴ� �ǹ̷� ��������(nullptr)��
	//�����ν� �������ش�.
}

myPlayer::~myPlayer()
{
}

void myPlayer::useMyitem(int index)
{
	if (index >= 0 && index <= 4) {
		if (inventory[index] != nullptr) {
			//�ش� �κ��丮�� ������� ������
			inventory[index]->item_use(this);
			if (inventory[index]->count <= 0) {
				//�ش� �κ��丮�� �������� ��� ���������
				delete inventory[index];
				//�������� new�� ������� ������
				//delete�� �����ش�.
				inventory[index] = nullptr;
				//delete�� �����͸� ������ �ּҰ��� ������ �ʱ⶧����
				//�ּҰ� ���� �ݵ�� nullptr�� �ٲ��ش�.
			}
		}
		else {
			printf("�ش� �κ��丮�� �������� �����ϴ�.\n");
		}
	}
	else {
		printf("�������� �ʴ� �κ��丮�Դϴ�.\n");

	}

}
