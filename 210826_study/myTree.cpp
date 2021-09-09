#include "myTree.h"

void myTree::Push()
{
	//1. 새로운 노드를 생성
	Node* pNode = new Node;
	cout << "데이터를 입력하세요.\n";
	cin >> pNode->_data;
	pNode->pLeft = NULL;
	pNode->pRight = NULL;
	//2. Root에서부터 시작해서 새로운 노드를 넣음
	//		위치를 탐색
	// 		Root가 비었으면 새 Node를 Root로 삼는다.
	Node* pTmp = pRoot;
	// 	   노드를 넣을 위치는 노드가 저장하고 있는
	// 	   data값을 기준으로 결정이 된다.
	// 	   기존의 값보다 넣으려는 값이 크면
	// 	   노드의 오른쪽, 작으면 왼쪽에 노드를 삽입
	//3.해당 방향에 이미 노드가 존재한다면
	// 	   다시 그 노드를 기준으로 위치를 탐색하길 반복하여
	//4.가려는 방향이 노드가 없으면 노드를 삽입
	//5.만약 데이터가 같은 값인 경우
	//		사용자가 어떻게 할지 만들기 나름
	//		ex)같으면 왼쪽, 같으면 오른쪽 같으면 넣지 않겠다.
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
	//출력할 대싱이 없으면 함수를 종료
	//왼쪽노드를 출력
	//자기자신의 데이터를 출력
	//오른쪽노드를 출력
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
	cout << "데이터를 입력하세요.\n";
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
		cout << "데이터가 존재하지 않습니다.\n";
	}
	else {
		cout << "해당 데이터가 트리에 존재합니다.\n";
	}
}




