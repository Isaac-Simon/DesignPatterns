#pragma once
#include "hander.h"

class Manager :public IHander
{
public:
	Manager() {}
	~Manager() {}
	virtual void HandleRequest(float days) override {
		if (days <= 1) {
			std::cout << "manager 批准了" << days << "天假" << std::endl;
		}else {
			m_pSuccessor->HandleRequest(days);
		}
	}
};

class Director :public IHander
{
public:
	Director() {}
	~Director() {}
	virtual void HandleRequest(float days) override {
		if (days <= 3) {
			std::cout << "Director 批准了" << days << std::endl;
		}else{
			m_pSuccessor->HandleRequest(days);
		}
	}
};

class CEO :public IHander
{
public:
	CEO() {}
	~CEO() {}
	virtual void HandleRequest(float days) override {
		if (days < 7) {
			std::cout<<"CEO 批准了" << days << std::endl;
		}else {
			std::cout << "给你放长假了，以后不用来上班了！" << std::endl;
		}
	}
};
