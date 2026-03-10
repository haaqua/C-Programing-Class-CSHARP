#include"../Program/stdafx.h"
#include<vector>
#include<list>
#include<deque>

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 컨테이너

#pragma region vector container

	//vector<int> vector;

	//vector.reserve(8);
	//
	//for (int i = 0; i < 5; i++) {
	//	vector.push_back((i + 1) * 10);
	//}

	//vector.pop_back();

	//for (int i = 0; i < vector.size(); i++) {
	//	cout << vector[i] << endl;
	//}

	//vector.clear();

	//cout << "vector size : " << vector.size() << endl;
	//cout << "vector capacity : " << vector.capacity() << endl;

#pragma endregion

#pragma region list container

	//list<int> list;

	//list.push_back(10);
	//list.push_front(4);
	//list.push_back(5);
	//list.push_front(2);
	//list.push_back(6);
	//list.push_front(1);

	//list.remove(10);

	//for (const int byensu : list)
	//{
	//	cout << byensu << endl;
	//}

	//list.assign(3, 5);

	//cout << "list size : " << list.size() << endl;

#pragma endregion

#pragma region deque container;

	/*deque<int> de;

	de.push_back(10);
	de.push_back(20);

	de.push_front(40);
	de.push_front(30);

	de.pop_front();
	de.pop_back();

	for (int i = 0; i < de.size(); i++)
	{
		cout << de.at(i) << endl;
	}*/

#pragma endregion


#pragma endregion


	return 0;
}
