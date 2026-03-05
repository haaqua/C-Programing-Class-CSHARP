#pragma once
class Message
{
public:
	void Send(const char* content);
	void Send(const char* content, int frenquency);
	void Send(int frenquency);
};

