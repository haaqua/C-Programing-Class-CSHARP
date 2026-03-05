#include"stdafx.h"
#include"material.h"
#include"Resource.h"

int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를 해주며,
	// 경계 확인과 같은 추가 기능을 제공해주는 포인터.

#pragma region unique pointer
	// 특정한 객체를 
	// 하나의 스마트 포인터만 가리킬 수 있도록 되어 있는 포인터.

	//unique_ptr<material> pointer = make_unique<material>();

	//unique_ptr<material> reference = std::move(pointer);

#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 변수가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요로 하지 않을 때,
	// 자원 객체를 해제하도록 설계되어 있는 포인터.

	//shared_ptr<Resource>pointer = make_shared<Resource>();

	//{
	//	shared_ptr<Resource>button = pointer;

	//	cout << "Reference Count : " << pointer.use_count() << endl;
	//}

	//cout << "Reference count : " << pointer.use_count();
#pragma endregion


#pragma endregion

	return 0;
}
