#include "stdafx.h"
#include "Concrete.h"

Concrete::Concrete()
{
	harder = 5;
	fall = 0;
	ResistionExplosion = 5;
}

void Concrete::Describe()
{
	cout << "Concrete 정보" << endl;
	cout << "강도 : " << harder << endl;
	cout << "중력영향 : " << fall << endl;
	cout << "폭발저항 : " << ResistionExplosion << endl;
}

Concrete::~Concrete()
{
	cout << "Concrete Destroyed" << endl;
}
