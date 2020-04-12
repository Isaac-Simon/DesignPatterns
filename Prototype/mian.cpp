#include "concrete_prototype.h"
#include <iostream>

int main()
{
	Monkey *pSWK = new SunWuKong("Qi Tian Da Sheng");

	//克隆猴子猴孙
	Monkey *pSWK1 = pSWK->Clone();
	Monkey *pSWK2 = pSWK->Clone();

	pSWK1->Play();
	pSWK2->Play();

}

