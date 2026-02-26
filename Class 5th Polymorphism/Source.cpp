#include <iostream>
#include"../Program/stdafx.h"
#include"../Program/Message.h"
#include"../Program/Strength.h"
#include"../Program/Dex.h"
#include"../Program/Wis.h"

using namespace std;

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로
	// 처리할 수 있는 기능

#pragma region 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의 수로
	// 구분하여 여러 개를 선언할 수 있는 기능

	//Message message;

	//message.Send(200);
	//message.Send("This program cannot be executed.");
	//message.Send("Identify the issue ", 60);

	// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의
	// 형태를 보고 호출하므로 반환형으로 함수의 오버로딩을 실행 가능
#pragma endregion

#pragma region 오버라이딩
	// 상위 클래스의 함수를 하위 클래스에서 재정의하여 사용하는 방법

	//Strength str;
	//Dex dex;
	//Wis wis;

	//str.Enhance();
	//dex.Enhance();
	//wis.Enhance();

#pragma endregion


#pragma region 가상 함수
	// 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출하는 함수
	// 가상 함수 포인터 크기 :  8바이트

	//Stat* pointer = nullptr;

	//int choice;

	//while (true)
	//{
	//	cout << "1 : str, 2 : dex, 3 : wis" << endl;
	//	cout << "Choice : ";
	//	cin >> choice;
	//	switch (choice) {
	//	case 1:pointer = new Strength;
	//		break;
	//	case 2:pointer = new Dex;
	//		break;
	//	case 3:pointer = new Wis;
	//		break;
	//	default: cout << "Exception" << endl;
	//		continue;
	//	}
	//	// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때
	//	// 객체 주소에 가상 함수 테이블을 추가합니다

	//	pointer->Enhance();
	//	delete pointer;
	//	break;
}

// 가상함수의 경우 가상 함수 테이블을 사용하여 호출되는 함수를 실행 시간에 결정,
// 정적으로 선언된 함수는 가상 함수로 선언할 수 없습니다.

#pragma endregion

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는 
	// 정적 바인딩을 하지 않고 
	// 진행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩이 가능.

	// 정적 바인딩 : 컴파일 시점에 결정된 상태
	// 동적 바인딩 : 런타임 시점에 결정되는 상태
#pragma endregion

return 0;
}
