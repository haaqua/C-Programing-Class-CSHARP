#include "stdafx.h"
#include "Stone.h"

void Stone::Describe()
{
	cout << "Stone 정보" << endl;
	cout << "강도 : " << harder << endl;
	cout << "중력영향 : " << fall << endl;
	cout << "폭발저항 : " << ResistionExplosion << endl;
}
