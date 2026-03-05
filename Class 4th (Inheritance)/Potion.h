#pragma once
#include "Consumable.h"

class Potion : public Consumable
{
	int stamina;
public:
	Potion();
	~Potion();
};

