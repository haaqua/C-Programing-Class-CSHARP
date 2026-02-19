#include <iostream>
using namespace std;

class Soldier
{
private:
	static int count;

public:
	Soldier()
	{
		cout << "Creat Soldier" << endl;
	}
	~Soldier() {
		count++;
		cout << "Destroyed Count : " << count << endl;
	}
};
int Soldier::count = 0;
class Sprite
{
private:
	int* pixels = nullptr;
public:
	Sprite()
	{
		if (pixels == nullptr)
		{
			pixels = new int(1024);
		}
	}
	Sprite(const Sprite& clone)
	{
		pixels = clone.pixels;
	}
	//~Sprite()
	//{
	//	delete pixels;
	//} 터짐
};

class Mesh
{
private:
	float* vertices;
public:
	Mesh()
	{
		vertices = new float(512.0f);
	}
	Mesh(const Mesh& clone)
	{
		vertices = new float;

		*vertices = *clone.vertices;
	}
	~Mesh() {
		delete vertices;
	}
};

int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 새성되는 시점에 자동으로 호출되는 특수한 멤버 함수

	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
	// 생성자는 반환형이 존재하지 않기 때문에 
	// 생성자가 호출되기 전에는 객체에 대한 메모리가 할당되지 않습니다

	// 생성자 클래스에는 데이터 설정이 들어 있다.
//	Soldier soldier;
#pragma endregion
#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 
	// 특수한 멤버 함수

	//Soldier* pointer = new Soldier;
	//delete pointer;

	//pointer = new Soldier;
	//delete pointer;

	// 소멸자는 객체가 메모리에서 헤재될 때 단 한 번만 호출되며,
	// 소멸자에게는 매개변수를 생성하여 사용할 수 없습니다
#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소값을 복사하여 
	// 같은 메모리 공간을 가리키게 하는 복사

	//int* pointer = new int;
	//int* pointing = pointer;
	//*pointer = 10;

	//cout << "pointer  : " << pointer << endl;
	//cout << "pointing : " << pointing << endl;

	//cout << "*pointer  : " << *pointer << endl;
	//cout << "*pointing : " << *pointing << endl;

	//delete pointer;
	//delete pointing;  //이럴경우 이미 제거된 것을 제거하는 것이기에 오류가 난다.


	//Sprite original;
	//Sprite copied(original);

	// 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을 참조하고 있기 때문에 
	// 하나의 객체로 값을 변경하게 되면 서로 참조된 객체도 함께 영향을 받습니다

#pragma endregion

#pragma region 깊은 복사
	// 객체를 복사할 때, 참조 값이 아닌 객체 자체로 새로 복사하여 
	// 서로 다른 메모리를 생성하는 복사.

	//Mesh original;

	//Mesh copy(original);


#pragma endregion


	return 0;
}
