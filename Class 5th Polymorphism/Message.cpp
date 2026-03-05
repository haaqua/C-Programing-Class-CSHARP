#include "stdafx.h"
#include "Message.h"

void Message::Send(const char* content)
{
	cout << content << endl;
}
void Message::Send(const char* content, int frequency)
{
	cout << content << frequency << endl;
}
void Message::Send(int frequency)
{
	cout << frequency << endl;
}