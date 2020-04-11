#include "concrete_factory.h"
#include "product.h"
#include <iostream>

int main()
{
	AFactory *pFactory = new BenzFactory();
	ICar *pCar = pFactory->CreateCar();
	cout << "Benz Factory:" << pCar->Name() << endl;

	pFactory = new BmwFactory();
	pCar = pFactory->CreateCar();
	cout << "Bmw factory:" << pCar->Name() << endl;

	pFactory = new AudiFactory();
	pCar = pFactory->CreateCar();
	cout << "Ausi factory:" << pCar->Name() << endl;

	getchar();

	return 0;
}