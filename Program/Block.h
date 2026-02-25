#pragma once
class Block
{
protected:
	int harder;
	int fall;
	int ResistionExplosion;
public:
	virtual void Describe() = 0;
};
