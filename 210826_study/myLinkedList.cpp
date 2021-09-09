#include "myLinkedList.h"

void myLinkedList::Push()
{
	//1.새로운 데이터를 만들기
	Node* pNode = new Node();
	//노드는 일반변수가 아닌 동적할당 포인터로 만든다.
	//함수가 종료되더라도 생성한 노드가
	//계속해서 삭제되지 않고 유지되어야 하기 때문.
	pNode->pNext = NULL;
	//새로 만든 데이터가 가장 마지막 데이터가 되기 때문에
	//새로 만든 데이터의 다음 데이터는 NULL이 된다.
	cout << "데이터를 입력하세요." << "\n";
	cin >> pNode->_data;

	//2.새로운 데이터를 넣을 위치를 찾기
	//- 헤드 (기존 데이터가 없는 경우)
	if (pHead == NULL) {
		num++;
		pHead = pNode;
	}

	//- 기존 데이터중 마지막 데이터의 뒤
	else if (pHead->pNext == NULL) {
		num++;
		pHead->pNext = pNode;
	}

	else {
		num++;
		//3. 기존 데이터가 존대한다면
		//가장 마지막 데이터를 찾기
		Node* pTmp = pHead;
		while (pTmp->pNext != NULL) {
			//현재 확인하고 있는 노드 pTmp의 pNext가
			//Null이 아니라면,pTmp는 다음 데이터를 확인한다.
			pTmp = pTmp->pNext;
			//pTmp의 pNext가 NULL이 아니면
			//pTmp는 pTmp의 뒤의 노드로 변경해야 하기 때문에
			//pTmp는 pTmp->pNext로 값을 바꿔준다
		}
		//4. 찾은 마지막 데이터의 다음 데이터(pNext)에
		//새로 만든 데이터를 대입
		pTmp->pNext = pNode;
		//반복문이 끝나는 시점에
		//pTmp는 링크드리스트의 마지막 데이터를 가리켜야 한다.
	}
}


void myLinkedList::Front()
{
	//맨 앞의 데이터를 링크드리스트에서 제거하는 방법
	//front를 실행할 수 없는 경우 -> 메시지 출력
	if (pHead == NULL) {
		cout << "데이터가 없습니다.\n";
		return;
	}
	//front를 실핼할 수 있는 경우
	//1. 저장된 데이터가 하나밖에 없는경우(pHead뿐일때)
	else {
		num--;
		if (pHead->pNext == NULL) {
			delete pHead;
			//포인터를 삭제하면 삭제되는 것은
			//해당주소에 저장된 데이터일뿐
			//포인터는 여전히 해당 주소값을 저장하고 있다.
			pHead = NULL;
			//따라서 삭제된 주소로 접근할 수 없도록
			//헤드값을 초기화
		}
		//2.저장된 데이터가 2개 이상일때
		//1. 새로운 헤드를 지정
		//2. 기놎의 헤드를 삭제
		else {
			Node* pTmp = pHead;
			//기존의 헤드의 주소를 저장할 변수를 만듬
			pHead = pHead->pNext;
			//새로운 헤드는
			//기존의 헤드 바로 뒤에 있는 노드
			delete pTmp;
			//마라 저장해뒀던 기존의 헤드를 삭제한다.
		}
	}
}


void myLinkedList::Back()
{
	if (pHead == NULL) {
		cout << "데이터가 없습니다.\n";
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
	cout << "리스트 번호를 입력해주세요\n";
	cin >> a;
	//선택범위가 음수일때
	if (a < 0) {
		cout << "잘못 입력하셨습니다\n";
		return;
	}
	//선탬범위를 벗어났을때
	if (a > num + 1) {
		cout << "해당 리스트에 접근할 수 없습니다.\n";
		return;
	}
	//선택범위 안에있을때
	else {
		num++;
		Node* pNode = new Node();
		pNode->pNext = NULL;
		cout << "데이터를 입력하세요." << "\n";
		cin >> pNode->_data;
		//삽입할려는 위치가 헤드일경우
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
	//리스트에 자료가 없을때
	if (pHead == NULL) {
		cout << "데이터가 없습니다.\n";
		return;
	}
	cout << "리스트 번호를 입력해주세요\n";
	cin >> a;
	//선택범위가 음수 일때
	if (a < 0) {
		cout << "잘못 입력하셨습니다\n";
		return;
	}
	//선택범위가 리스트범위를 넘었을때
	if (a > num) {
		cout << "해당 리스트에 접근할 수 없습니다.\n";
		return;
	}
	//선택범위가 리스트 범위에 있을때
	else {
		num--;
		//데이터가 1개일때
		if (pHead->pNext == NULL) {
			delete(pHead);
			pHead = NULL;
		}
		//데이터가 1개이상일때
		else {
			Node* pTmp = pHead;
			Node* pFront = NULL;
			//제일 첫번째 데이터를 지울때
			if (a == 0) {
				pHead = pHead->pNext;
				delete(pTmp);
			}
			//나머지
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

