#pragma once

#include "product.h"

class AFactory
{
public:
	virtual ICar* CreateCar() = 0;
};
