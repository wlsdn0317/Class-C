#include "mySort.h"

void mySort::bubbleSort()
{
	int tmp;
	int count = 0;
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9 - i; j++) {
				count++;
			if (ary[j] > ary[j + 1]) {
				tmp = ary[j+1];
				ary[j + 1] = ary[j];
				ary[j] = tmp;
			}
		}
	}
	cout <<"\n" << count;
}

void mySort::selectionSort()
{
	int count = 0;
	int tmp;
	int	change;
	for (int i = 0; i < 9; i++) {
		change = i;
		for (int j = i; j < 9; j++) {
				count++;
			if (ary[change] > ary[j+1]) {
				change = j + 1;
			}
		} 
		tmp = ary[i];
		ary[i] = ary[change];
		ary[change] = tmp;
	}
	cout <<"\n" << count;
}

void mySort::insertionSort()
{
	//1. 삽입정렬은 첫번째 데이터가 아니라 
	//		두번째 데이터부터 시작한다.
	//2.자신의 바로 왼쪽에 있는 데이터와 
	//크기를 비교해서 왼쪽이 더크다면 서로 자리를 바꾼다.
	//3.만약 자리가 바뀌었으면 다시 바뀐 자리의 왼족 데이터와
	// 자기자신의 크기를 비교해서 왼족이 크면 다시 자리를 바꾼다.
	//4.이것을 반복한다.
	// 제일 왼쪽까지 해당 데이터가 도착하거나
	//또는 왼쪽이 자기자신보다 크지 않을때까지
	//5.해당 데이터의 정렬이 끝나면 다음데이터(세번째_를
	//똑같은 방법으로 정렬해준다.
	 
	//선택 정렬과 버블정렬은 해당 위치에 들어갈
	//데이터를 찾는게 목적이라면 (선택정렬 : 맨앞,버블정렬 : 맨뒤)
	//삽입정렬은 해당 데이터가 들어갈 위치를 찾는게 목적이다.

	//선택정렬과 버블정렬은 모든 데이터를 항상 비교하기 때문에
	//시간이 오래걸리고 항상 정렬에 걸리는 시간이 똑같은 반면
	//삽입정렬은 자신의 왼쪽 데이터만 비교하고
	//그 왼족 데이터는 이미 정렬된 데이터기 때문에
	//비교 도중에 나머지 전체를 비교하지 않고 다음 정렬로
	//넘어갈 수 있다.
	//따라서 저장된 데이터들이 정렬되어있으면 되어있을 수록
	//정렬에 걸리는 시간이 적게 걸린다.

	int tmp;
	for (int i = 1; i < 10; i++) {
		for (int j = i; j > 0; j--) {
			if (ary[j] < ary[j - 1]) {
				tmp = ary[j];
				ary[j] = ary[j - 1];
				ary[j - 1] = tmp;
			}
			else {
				break;
			}
		}
	}

}

void mySort::quickSort()
{
	quickSorting(ary,0, 9);
}

void mySort::quickSorting(int ary[10],int _start, int _end)
{
	//기준이 되는 값을 하나 정하고
	//그 기준값보다 작은값을 기준의 왼쪽에
	//기준값보다 큰 값을 기준의 오른쪽에 배치하고
	//각각 기준값보다 작은값들을 가지고
	//다시 퀵정렬을 하고
	//기준값보다 큰 값들을 가지고 다시 퀵정렬을 하는 것의 반복
	if (_start >= _end) {
		return;
	}
	int tmp;
	int pivot = _start;
	int small = _end;
	int big = pivot + 1;
	
	while(small >= big) {
		int num;
		while (ary[pivot] >= ary[big] && big <=_end) {
			big++;
		}
		while (ary[pivot] <= ary[small]&&small > _start) {
			small--;
		}
		//big과 small이 원하는 데이터를 찾은 경우
		if (big <= small) {
			num = ary[big];
			ary[big] = ary[small];
			ary[small] = num;
		}
	}
	//바깥의 큰 while문의 조건이
	//big과 small이 교차하지 않았을때의 경우이기 때문에
	//while문 바깥은 big과 small이 교차한 경우를 말한다.
	//즉,big과 small이 원하는 데이터를 찾지 못한 경우(교차한 경우)
	tmp = ary[small];
	ary[small] = ary[pivot];
	ary[pivot] = tmp;

	quickSorting(ary,_start ,small -1 ); //왼쪽의 남은 배열의 퀵정렬
	quickSorting(ary,small +1 ,_end ); //오른쪽의 남은 배열의 퀵정렬




	/*
	1.퀵정렬을 할 범위(배열의 번호)를 정한다.
	(start와 end를 정한다)
	2.분류의 기준이 되는 pivot을 정한다.
	일반적으로는 start와 같은 값을 pivot으로 준다.
	3.분류를 하기 위한 big과 small를 정한다.
		big은 pivot보다 큰 값의 위치를 찾기 위한 변수
		small은 pivot보다 작은 값의 위치를 찾기 위한 변수
	4.big은 pivot 바로 오른쪽부터 시작하고
		small은 end에서 시작한다.
	5.big은 pivot보다 큰 값을 찾기 위해서 오른쪽으로 이동
		small은 pivot보다 작은 값을 찾기 위해서 왼족으로 이동
	6.각각의 변수가 원하는 값이 있는 위치를 찾으면 멈춘다.
	7.big과 small이 원하는 값을 찾았으면 big과 small에 있는
		데이터를 서로 바꿔준다.
	8.데이터를 서로 바꿔준 후에 다시 big과 small은
		원하는 값을 찾기 위해 위치를 이동한다.
	9.데이터를 찾으면 서로 데이터를 바꾸고 다시 이동하고를 반복
	10.big과 small이 위치를 찾는 과정에서
		서로의 위치가 바뀌면(big이 small보다 커지거나
		small이 big보다 작아지면)
		위치탐색을 종료하고 pivot과 small의 데이터를 바꾼다.
	11.pivot과 small의 위치가 바뀐 시점에서
		퀵정렬의 한 사이클(바퀴)이 끝나고
		이동된 pivot의 왼쪽에는 pivot보다 작은 값
		오른쪽에는 pivot보다 큰 값이 정렬된다.
		(순서는 상관없이 pivot보다 큰지 작은지로만 정렬됨)
	12.pivot의 왼쪽에 있는 데이터들로 다시 퀵정렬을 시작하고
		pivot의 오른쪽에 있는 데이터들로 다시 퀵정렬을 시작한다.
	13.pivot의 왼쪽에 있는 데이터들은
		start는 기존의 pivot의 start와 동일
		end는 이동한 pivot(or small)의 왼쪽이된다.
	14.pivot의 오른쪽에 있는 데이터들은
		start는 pivot의 오른쪽(pivot+1)이고
		end 기존 pivot의 end와 동일하다.
	15.만약 start와 end가 같거나, start가 end보다 크면
		정렬할 숫자가 하나밖에 없다는 뜻이기 때문에
		별도로 정렬을 하지 않는다.
	16.퀵정렬은 재귀함수를 사용한다.
	*/






	
}
