#include "myLinkedList.h"

void myLinkedList::Push()
{
	//1.���ο� �����͸� �����
	Node* pNode = new Node();
	//���� �Ϲݺ����� �ƴ� �����Ҵ� �����ͷ� �����.
	//�Լ��� ����Ǵ��� ������ ��尡
	//����ؼ� �������� �ʰ� �����Ǿ�� �ϱ� ����.
	pNode->pNext = NULL;
	//���� ���� �����Ͱ� ���� ������ �����Ͱ� �Ǳ� ������
	//���� ���� �������� ���� �����ʹ� NULL�� �ȴ�.
	cout << "�����͸� �Է��ϼ���." << "\n";
	cin >> pNode->_data;

	//2.���ο� �����͸� ���� ��ġ�� ã��
	//- ��� (���� �����Ͱ� ���� ���)
	if (pHead == NULL) {
		num++;
		pHead = pNode;
	}

	//- ���� �������� ������ �������� ��
	else if (pHead->pNext == NULL) {
		num++;
		pHead->pNext = pNode;
	}

	else {
		num++;
		//3. ���� �����Ͱ� �����Ѵٸ�
		//���� ������ �����͸� ã��
		Node* pTmp = pHead;
		while (pTmp->pNext != NULL) {
			//���� Ȯ���ϰ� �ִ� ��� pTmp�� pNext��
			//Null�� �ƴ϶��,pTmp�� ���� �����͸� Ȯ���Ѵ�.
			pTmp = pTmp->pNext;
			//pTmp�� pNext�� NULL�� �ƴϸ�
			//pTmp�� pTmp�� ���� ���� �����ؾ� �ϱ� ������
			//pTmp�� pTmp->pNext�� ���� �ٲ��ش�
		}
		//4. ã�� ������ �������� ���� ������(pNext)��
		//���� ���� �����͸� ����
		pTmp->pNext = pNode;
		//�ݺ����� ������ ������
		//pTmp�� ��ũ�帮��Ʈ�� ������ �����͸� �����Ѿ� �Ѵ�.
	}
}


void myLinkedList::Front()
{
	//�� ���� �����͸� ��ũ�帮��Ʈ���� �����ϴ� ���
	//front�� ������ �� ���� ��� -> �޽��� ���
	if (pHead == NULL) {
		cout << "�����Ͱ� �����ϴ�.\n";
		return;
	}
	//front�� ������ �� �ִ� ���
	//1. ����� �����Ͱ� �ϳ��ۿ� ���°��(pHead���϶�)
	else {
		num--;
		if (pHead->pNext == NULL) {
			delete pHead;
			//�����͸� �����ϸ� �����Ǵ� ����
			//�ش��ּҿ� ����� �������ϻ�
			//�����ʹ� ������ �ش� �ּҰ��� �����ϰ� �ִ�.
			pHead = NULL;
			//���� ������ �ּҷ� ������ �� ������
			//��尪�� �ʱ�ȭ
		}
		//2.����� �����Ͱ� 2�� �̻��϶�
		//1. ���ο� ��带 ����
		//2. ����� ��带 ����
		else {
			Node* pTmp = pHead;
			//������ ����� �ּҸ� ������ ������ ����
			pHead = pHead->pNext;
			//���ο� ����
			//������ ��� �ٷ� �ڿ� �ִ� ���
			delete pTmp;
			//���� �����ص״� ������ ��带 �����Ѵ�.
		}
	}
}


void myLinkedList::Back()
{
	if (pHead == NULL) {
		cout << "�����Ͱ� �����ϴ�.\n";
		return;
	}
	else {
		num--;
		if (pHead->pNext == NULL) {
			delete pHead;
			pHead = NULL;
			return;
		}
		else {
			Node* pTmp = pHead;
			while (pTmp->pNext->pNext != NULL) {
				pTmp = pTmp->pNext;
			}
			delete(pTmp->pNext);
			pTmp->pNext = NULL;
		}
	}
}

void myLinkedList::Insert()
{
	int a;
	cout << "����Ʈ ��ȣ�� �Է����ּ���\n";
	cin >> a;
	//���ù����� �����϶�
	if (a < 0) {
		cout << "�߸� �Է��ϼ̽��ϴ�\n";
		return;
	}
	//���ƹ����� �������
	if (a > num + 1) {
		cout << "�ش� ����Ʈ�� ������ �� �����ϴ�.\n";
		return;
	}
	//���ù��� �ȿ�������
	else {
		num++;
		Node* pNode = new Node();
		pNode->pNext = NULL;
		cout << "�����͸� �Է��ϼ���." << "\n";
		cin >> pNode->_data;
		//�����ҷ��� ��ġ�� ����ϰ��
		if (a == 0) {
			pNode->pNext = pHead;
			pHead = pNode;
			return;
		}
		else {
			int i = 0;
			Node* pTmp = pHead;
			while (pTmp != NULL && i != a-1) {
				pTmp = pTmp->pNext;
				i++;
			}
			pNode->pNext = pTmp->pNext;
			pTmp->pNext = pNode;
		}
	}
}

void myLinkedList::Remove()
{
	int a;
	//����Ʈ�� �ڷᰡ ������
	if (pHead == NULL) {
		cout << "�����Ͱ� �����ϴ�.\n";
		return;
	}
	cout << "����Ʈ ��ȣ�� �Է����ּ���\n";
	cin >> a;
	//���ù����� ���� �϶�
	if (a < 0) {
		cout << "�߸� �Է��ϼ̽��ϴ�\n";
		return;
	}
	//���ù����� ����Ʈ������ �Ѿ�����
	if (a > num) {
		cout << "�ش� ����Ʈ�� ������ �� �����ϴ�.\n";
		return;
	}
	//���ù����� ����Ʈ ������ ������
	else {
		num--;
		//�����Ͱ� 1���϶�
		if (pHead->pNext == NULL) {
			delete(pHead);
			pHead = NULL;
		}
		//�����Ͱ� 1���̻��϶�
		else {
			Node* pTmp = pHead;
			Node* pFront = NULL;
			//���� ù��° �����͸� ���ﶧ
			if (a == 0) {
				pHead = pHead->pNext;
				delete(pTmp);
			}
			//������
			else {
				int i = 0;
				while (pTmp->pNext != NULL && i != a) {
					i++;
					pFront = pTmp;
					pTmp = pTmp->pNext;
				}
				pFront->pNext = pTmp->pNext;
				delete(pTmp);
			}
		}
	}

}

void myLinkedList::Print()
{
	Node* pTmp = pHead;
	while (pTmp != NULL) {
		cout << pTmp->_data << " ";
		pTmp = pTmp->pNext;
	}
	cout << endl;
}

