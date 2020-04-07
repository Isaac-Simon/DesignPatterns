#pragma once

#include "subject.h"
#include "observer.h"

#include <iostream>
#include <list>

using namespace std;

//具体目标
class ConcreteSubject :public ISubject
{
public:
	ConcreteSubject() {}
	void setPrice(float price) {
		m_fPrice = price;
	}
	void attach(IObserver *observer) override {
		m_observers.push_back(observer);
		observer->setpConsub(this);
	}
	void detach(IObserver *observer) override {
		m_observers.remove(observer);
	}
	void setState(float p) override{ m_fPrice = p; }
	float getState() override { return m_fPrice; }
	void notify() override {
		list<IObserver*>::iterator it = m_observers.begin();
		while (it != m_observers.end()) {
			(*it)->update(m_fPrice);
			++it;
		}
	}
private:
	float m_fPrice=0.0; //价格
	list<IObserver *> m_observers; //观察者列表
};
