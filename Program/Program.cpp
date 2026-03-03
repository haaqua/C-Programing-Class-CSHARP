#include"stdafx.h"
template<typename T>
bool Same(T left, T right)
{
	return left == right;
}

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고,
	// 하나의 값이 여러 다른 데이터 형식을 가질 수 있는 기술에 중점을 두어
	// 재사용성을 높일 수 있는 기능.
	cout << Same(10, 10) << endl;
	cout << Same("Language", "Egaugnal") << endl;
	cout << Same(10.05f, 13.175f) << endl;
	cout << Same('A','A') << endl;

#pragma endregion


	return 0;
}
