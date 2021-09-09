#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
struct Node {
	int _data; //노드가 저장하는 데이터
	Node* pNext; //노드의 다음(뒤) 노드의 주소값
};


class myLinkedList
{
public:
	//자료구조를 배열로 구현했을때의 문제점
	//1. 데이터를 꺼내거나 넣을때 나머지 데이터를 모두 옮겨야함.
	//2. 실제로 저장된 데이터가 삭제되진 않음.
	// (변수를 통해 암묵적으로 사용하지 못하도록만 함)
	//3. 배열크기만큼의 메모리공간을 할당 받기 때문에
	// 사용하지 않는 메모리도 계속해서 차지하게 된다.
	//4.배열이기 때문에 배열을 만들때 
	// 지정한 갯수만큼만 저잘할 수 있다.

	//이러한 배열형 자료구조의 문제점을 모두 개선한 구조가
	//링크드 리스트(연결리스트)이다.
	//링크드리스트의 단점은 구조가 다소 복잡하는 단점이 있다.

	void Push();	//맨 뒤에 데이터 삽입
	void Front();	//맨 앞의 데이터 제거
	void Back();	//맨 뒤의 데이터 제거
	void Insert();	//중간에 데이터 삽입
	void Remove();	//중간에 데이터 삽입
	void Print();	//저장된 데이터 출력하는 함수

	Node* pHead = NULL;//링크드리스트의 첫번째 노드의 주소(값)

	int num = -1;
};

