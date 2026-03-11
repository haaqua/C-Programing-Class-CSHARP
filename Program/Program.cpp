#include"stdafx.h"
#include<unordered_set>
#include<unordered_map>

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너

#pragma region unordered_set

	//unordered_set<const char*> unorded_set;

	//unorded_set.max_load_factor(2.0f);

	//unorded_set.insert("약속된 승리의 검");
	//unorded_set.insert("간장 막야");
	//unorded_set.insert("에아");
	//unorded_set.insert("갓 핸드");
	//unorded_set.insert("룰 브레이커");
	//unorded_set.insert("게이트 오브 바빌론");
	//unorded_set.insert("엑스칼리버");

	//unorded_set.insert("UBW");
	//unorded_set.insert("사살 백두");

	//cout << "Load Factor : " << unorded_set.load_factor() << endl;
	//cout << "bucket count : " << unorded_set.bucket_count() << endl;

	//if (unorded_set.find("약속된 승리의 검") != unorded_set.end())
	//{
	//	cout << "the data exists..." << endl;
	//}
	//else
	//{
	//	cout << "the data not exsits..." << endl;
	//}

	//unorded_set.erase("에아");
	//for (const char* element : unorded_set)
	//{
	//	cout << element << endl;
	//}

#pragma endregion

#pragma region unorded map

	//unordered_map<std::string, int> unorded_map;

	//unorded_map["Potion"] = 2;
	//unorded_map["Bomb"] = 2;
	//unorded_map["Poison"] = 2;


	//string name;
	//cin >> name;

	//if (unorded_map[name] > 0 && unorded_map.find(name) != unorded_map.end())
	//{
	//	unorded_map[name]--;

	//	cout << name << " use " << endl;

	//	if (unorded_map[name] <= 0)
	//	{
	//		unorded_map.erase(name);

	//		cout << name << "All the " << name << " has been used" << endl;
	//	}
	//}
	//else
	//{
	//	cout << "Doesn't Exist." << endl;
	//}
	//for (const auto& element : unorded_map)
	//{
	//	cout << "Name : " << element.first << "| Quantity : " << element.second << endl;
	//}

#pragma endregion


#pragma endregion


	return 0;
}
