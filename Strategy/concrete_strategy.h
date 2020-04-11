#pragma once
#include "strategy.h"
#include <iostream>

class BikeStrategy :public IStrategy
{
public:
	virtual void Travel() override {
		std::cout << "travel by bike" << std::endl;
	}
};

class CarStrategy :public IStrategy {
	virtual void Travel() override {
		std::cout << "travel by car" << std::endl;
	}
};

class TrainStrategy :public IStrategy {
	virtual void Travel() override {
		std::cout << "travel by train" << std::endl;
	}
};