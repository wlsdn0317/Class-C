#pragma once
#include <iostream>
using namespace std;
class mySort
{
public:
	int ary[10] = { 6,1,7,8,4,0,5,3,9,2 };
	void bubbleSort();		//��ǰ����
	void selectionSort();	//��������

	void insertionSort();
	void quickSort();
	void quickSorting(int ary[10],int a, int b);

};

int main() {
	mySort ms;
	cout << "���� ��\n";
	for (int i = 0; i < 10; i++) {
		cout << ms.ary[i] << " ";
	}

	ms.quickSort();
	cout << "\n���� ��\n";
	
	for (int i = 0; i < 10; i++) {
		cout << ms.ary[i] << " "; 
	}
	
}