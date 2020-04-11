#include <iostream>
#include "concrete_hander.h"

int main()
{
	IHander *manager = new Manager();
	IHander *director = new Director();
	IHander *ceo = new CEO();

	manager->SetSuccessor(director);
	director->SetSuccessor(ceo);

	manager->HandleRequest(1);
	manager->HandleRequest(2);
	manager->HandleRequest(5);
	manager->HandleRequest(10);

	return 0;
}

