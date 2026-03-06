#include "Character.h"
#include"stdafx.h"

Character::Character()
{
	cout << "Created Character" << endl;
}
void Character::Partner(const weak_ptr<Character>& reference)
{
	character = reference;
}
Character::~Character()
{
	cout << "Destroyed Character" << endl;
}
