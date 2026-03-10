#include"../Program/stdafx.h"
#include<stack>
#include<queue>

int main()
{
#pragma region 컨테이너 어뎁터
	// 기존 컨테이너의 인터페이스를 
	// 제한하여 만든 기능이 제한되거나 변경된 컨테이너.

#pragma region Stack Container

	//stack<int> stack;

	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//stack.push(50);

	//while(stack.empty() == false)
	//{
	//	cout << stack.top() << endl;
	//	stack.pop();
	//}

#pragma endregion

#pragma region queue container

	//queue<int> queue;

	//queue.push(10);
	//queue.push(20);
	//queue.push(30);
	//queue.push(40);
	//queue.push(50);

	//const int& size = queue.size();

	//for (int i = 0; i < size; i++) 
	//{
	//	cout << queue.front() << endl;
	//	queue.pop();
	//}

#pragma endregion

#pragma region priority_queue
	//priority_queue<int>prqu;

	//prqu.push(20);
	//prqu.push(10);
	//prqu.push(12);

	//while (prqu.empty() == false)
	//{
	//	cout << prqu.top() << endl;
	//	prqu.pop();
	//}

#pragma endregion


#pragma endregion


	return 0;
}
