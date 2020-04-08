#pragma once

#include "subjietc.h"
#include <iostream>

class CMCC :public ITelco
{
public:
	void Recharge(int money) override {
		std::cout << "Recharge" << money;
	}
};
