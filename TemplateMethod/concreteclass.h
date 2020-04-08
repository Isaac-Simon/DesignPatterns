#pragma once

#include "abstractclass.h"
#include <iostream>

class Alibaba :public Company
{
public:
	virtual void Interview() override {
		std::cout << "First interview->Second interview->Third interview" <<
			std::endl;
	}
	virtual void Offer() override {
		std::cout << "30W" << std::endl;
	}
};

class Tencent :public Company
{
public:
	virtual void Interview() override {
		std::cout << "First interview->Second interview" <<
			std::endl;
	}
	virtual void Offer() override {
		std::cout << "25W" << std::endl;
	}
};