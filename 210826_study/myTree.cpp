#include "myTree.h"

void myTree::Push()
{
	//1. ���ο� ��带 ����
	Node* pNode = new Node;
	cout << "�����͸� �Է��ϼ���.\n";
	cin >> pNode->_data;
	pNode->pLeft = NULL;
	pNode->pRight = NULL;
	//2. Root�������� �����ؼ� ���ο� ��带 ����
	//		��ġ�� Ž��
	// 		Root�� ������� �� Node�� Root�� ��´�.
	Node* pTmp = pRoot;
	// 	   ��带 ���� ��ġ�� ��尡 �����ϰ� �ִ�
	// 	   data���� �������� ������ �ȴ�.
	// 	   ������ ������ �������� ���� ũ��
	// 	   ����� ������, ������ ���ʿ� ��带 ����
	//3.�ش� ���⿡ �̹� ��尡 �����Ѵٸ�
	// 	   �ٽ� �� ��带 �������� ��ġ�� Ž���ϱ� �ݺ��Ͽ�
	//4.������ ������ ��尡 ������ ��带 ����
	//5.���� �����Ͱ� ���� ���� ���
	//		����ڰ� ��� ���� ����� ����
	//		ex)������ ����, ������ ������ ������ ���� �ʰڴ�.
	if (pRoot == NULL) {
		pRoot = pNode;
	}
	else {
		while (1) {
			if (pNode->_data > pTmp->_data) {
				if (pTmp->pRight != NULL) {
					pTmp = pTmp->pRight;
				}
				else {
					pTmp->pRight = pNode;
					break;
				}
			}
			else if (pNode->_data <= pTmp->_data) {
				if (pTmp->pLeft != NULL) {
					pTmp = pTmp->pLeft;
				}
				else {
					pTmp->pLeft = pNode;
					break;
				}
			}
		}
	}
}


void myTree::Printf()
{
	PrintNode(pRoot);
}

void myTree::PrintNode(Node* p)
{
	//����� ����� ������ �Լ��� ����
	//���ʳ�带 ���
	//�ڱ��ڽ��� �����͸� ���
	//�����ʳ�带 ���
	if (p == NULL) {
		return;
	}
	PrintNode(p->pLeft);
	cout << p->_data << " ";
	PrintNode(p->pRight);
}

void myTree::Serch()
{
	int n;
	cout << "�����͸� �Է��ϼ���.\n";
	cin >> n;
	Node* pTmp = pRoot;
	while (pTmp->_data != n && pTmp !=NULL) {
		if (pTmp->_data >= n) {
			pTmp = pTmp->pLeft;
		}
		else {
			pTmp = pTmp->pRight;
		}
	}
	if (pTmp == NULL) {
		cout << "�����Ͱ� �������� �ʽ��ϴ�.\n";
	}
	else {
		cout << "�ش� �����Ͱ� Ʈ���� �����մϴ�.\n";
	}
}




