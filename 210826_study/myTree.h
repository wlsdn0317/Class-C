#pragma once
#include <iostream>
using namespace std;
struct Node {
	int _data;
	Node* pLeft;
	Node* pRight;
};



class myTree
{
public:

	Node* pRoot = NULL;//��ũ�� ����Ʈ�� pHead�� ������ ����
						//Ʈ���� ù��° �����͸� �����ϴ� ����

	void Push(); //������ ����
	void Printf();//������ ���
	void PrintNode(Node* p); //��带 ����ϴ� �Լ�
	void Serch();//������ ã��
	
};

