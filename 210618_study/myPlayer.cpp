#include "myPlayer.h"
#include "hpPotion.h"
#include "mpPotion.h"
#include "stPotion.h"
//헤더에서는 포션 클래스를 사용하지 않지만
//cpp에서는 포션 클래스를 사용하기 때문에
//cpp에서 포션 클래스를 include한다.
myPlayer::myPlayer()
{
	hp = 30;
	mp = 20;
	st = 100;
	strcpy(name, "플레이어1");

	inventory[0] = new hpPotion;
	inventory[1] = new hpPotion;
	inventory[1]->rare_item(3);
	inventory[2] = new mpPotion(3);
	inventory[3] = new mpPotion(2);
	inventory[4] = new stPotion;
	//포인터 변수들은 생성되면 기본적으로
	//쓰레기값을 가지게 된다
	//하지만 이는 데이터가 없는게 아니라
	//쓰레기값을 가진 것이기 때문에
	//정상적인 데이터의 판단이 불가능하다.
	//따라서 포인터의 경우, 데이터가 없다면
	//해당 포인터는 비어있다는 의미로 널포인터(nullptr)를
	//값으로써 대입해준다.
}

myPlayer::~myPlayer()
{
}

void myPlayer::useMyitem(int index)
{
	if (index >= 0 && index <= 4) {
		if (inventory[index] != nullptr) {
			//해당 인벤토리가 비어있지 않을때
			inventory[index]->item_use(this);
			if (inventory[index]->count <= 0) {
				//해당 인벤토리의 아이템을 모두 사용했을때
				delete inventory[index];
				//아이템을 new로 만들었기 때문에
				//delete로 지워준다.
				inventory[index] = nullptr;
				//delete는 데이터만 지우지 주소값을 지우진 않기때문에
				//주소값 역시 반드시 nullptr로 바꿔준다.
			}
		}
		else {
			printf("해당 인벤토리에 아이템이 없습니다.\n");
		}
	}
	else {
		printf("존재하지 않는 인벤토리입니다.\n");

	}

}
