#include <iostream>
#include"../Program/Potion.h"
using namespace std;
int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 
	// 설정하는 기능

	//Consumable consumable;
	//Potion potion;

	//cout << "Consumable Size : " << sizeof(consumable) << endl;
	//cout << "Potion Size : " << sizeof(potion) << endl;

	// 클래스의 상속 관계에서 
	// 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며
	// 하위 클래스는 상위 클래스의 메모리가 포함되어 있기 때문에
	// 상위 클래스의 속성을 사용할 수 있습니다.

	// 하위 클래스가 우선적으로 소멸해야 상위 클래스가 소멸할 수 있다.
	// 만약 상위 클래스가 먼저 소멸하면 메모리 누수가 일어난다.
#pragma endregion

	return 0;
}
