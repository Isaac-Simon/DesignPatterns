#pragma once

#include "product.h"

class BenzCar :public ICar
{
public:
	virtual string Name() override{
		return "Benz Car";
	}
};

class BmwCar : public ICar
{
public:
	string Name() {
		return "Bmw Car";
	}
};

class AudiCar : public ICar
{
public:
	string Name() {
		return "Audi Car";
	}
};