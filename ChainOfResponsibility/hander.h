#pragma once
#include <iostream>

class IHander
{
public:
	IHander() { m_pSuccessor = nullptr; }
	virtual ~IHander() {}
	void SetSuccessor(IHander *successor) { m_pSuccessor = successor; }
	virtual void HandleRequest(float days) = 0;
protected:
	IHander *m_pSuccessor;
};
