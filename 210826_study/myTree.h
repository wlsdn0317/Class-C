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

	Node* pRoot = NULL;//링크드 리스트의 pHead와 동인한 역할
						//트리의 첫번째 데이터를 저장하는 변수

	void Push(); //데이터 삽입
	void Printf();//데이터 출력
	void PrintNode(Node* p); //노드를 출력하는 함수
	void Serch();//데이터 찾기
	
};

