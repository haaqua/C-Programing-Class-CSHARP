#include <iostream>

using namespace std;

namespace Korea {
	int population = 10000;
	float area = 1000;
	void information() {
		cout << "이름 : 고려" << std::endl;
		cout << "영토 : " << area << endl;
		cout << "인구수 : " << population << "\n" << endl;
	}
}
namespace Backjae {
	int population = 3000;
	float area = 300;
	void information() {
		cout << "이름 : 백제" << endl;
		cout << "영토 : " << area << endl;
		cout << "인구수 : " << population << "\n" << endl;
	}
}
namespace Sinla {
	int population = 4000;
	float area = 350;
	void information() {
		cout << "이름 : 신라" << endl;
		cout << "영토 : " << area << endl;
		cout << "인구수 : " << population << "\n" << endl;
	}
}

class GameObject {

#pragma region 접근 지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를 제한하는 지정자

	// public : 클래스 내부와 자기가 상속하고 있는 클래스 그리고 클래스 외부에서 접근을 허용하는 지정자

	// protected : 클래스 내부와 자기가 상속하는 클래스까지만 접근을 허용하는 지정자

	// private : 클래스 내부까지만 접근을 허용하는 지정자

#pragma endregion
private:
	int x = 10;
	int y = 5;
	int z = 30;

protected:
	const char* name = "아무";
public:
	void Position() {
		cout << "이름 : " << name << endl;
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "z : " << z << endl;
	}
};

void Profile(const char* name = "James", int age = 20) {
	cout << "이름 : " << name << " 나이 : " << age << endl;
}

using namespace Korea;
int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역.

	//information();
	//Backjae::information();
	//Sinla::information();
#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 정의되어 있으며,
	// 클래스를 통해 객체를 생성하여 접근하여 사용하는 집합체

	//GameObject gameobject;
	//gameobject.Position();

	//cout << "Game Object 의 크기 : " << sizeof(GameObject) << endl;
	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에 포함되지만,
	// 정적 변수와 함수의 메모리에는 포함되지 않습니다
#pragma endregion

#pragma region 기본 매개 변수
	// 함수의 매개 변수에 값이 전달되지 않을 때 미리 값을 설정하는 함수 입니다.

	//Profile();
	//Profile("John", 24);

	// 기본 매개 변수를 지정하려면 오른쪽에서 부터 값을 저장해야 합니다.
#pragma endregion

}
