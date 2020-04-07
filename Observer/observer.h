#pragma once
#include "subject.h"
//³éÏó¹Û²ìÕß

class IObserver
{
public:
	virtual void update(float price) = 0;
	virtual void setpConsub(ISubject* p) = 0;
};
