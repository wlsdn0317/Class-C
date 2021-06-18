#pragma once
#include <stdio.h>
class monster
{
public:

	monster();

	int atk; //공격력
	int def; //방어력
	int hp; //체력
	float exp; //죽였을때얻는 경험치
	int gold; //죽였을때 얻는 골드
	
	void attack(); //몬스터가 공격하는 함수
	void damage(int i); //몬스터가 공격받았을때 실행되는 함수
	void die();  //몬스터가 죽었을때 실행되는 함수


private:
	//private : 외부에서 접근할 수 없고
	//오직 자기자신만 사용할 수 있는 데이터들을 지정

	float rare_drop;//레어 드롭 확률
	void rareGet();//레어아이템 얻는 함수


protected:
	//protected: 외부에서는 접근할 수 없고
	//자기자신과 자기자신을 상속받은 자식들만 사용할 수 있는
	//데이터들을 지정
	float deadTime; //몬스터의 사망시간 (다음 리젠까지 필요한 시간)




};

