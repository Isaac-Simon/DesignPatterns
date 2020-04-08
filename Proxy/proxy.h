#pragma once
#include "subjietc.h"
#include "real_subject.h"
#include <iostream>

class Proxy :public ITelco
{
public:
	Proxy() :m_pCMCC(nullptr){}
	~Proxy() { delete m_pCMCC; }

	void Recharge(int money)override {
		if (money >= 50) {
			if (m_pCMCC == nullptr)
				m_pCMCC = new CMCC();
			m_pCMCC->Recharge(money);
		}else {
			std::cout << "sorry,too little money" << std::endl;
		}
	}
private:
	CMCC *m_pCMCC;
};
