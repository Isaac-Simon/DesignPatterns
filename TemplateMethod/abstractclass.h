#pragma once
#include <iostream>

class Company
{
public:
	virtual ~Company() {}

	//Ð£Ô°ÕÐÆ¸
	void Recruit() {
		std::cout << "----------begin--------------" << std::endl;
		CareerTalk();
		ReceiveResume();
		Interview();
		Offer();
		std::cout << "-----------end---------------" << std::endl;
	}

	void CareerTalk() {
		std::cout << "Delivery" << std::endl;
	}
	void ReceiveResume() {
		std::cout << "receive resume" << std::endl;
	}
	virtual void Interview() = 0;
	virtual void Offer() = 0;
};
