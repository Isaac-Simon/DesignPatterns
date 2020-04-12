#pragma once

#include "builder.h"

class ThinkPadBuilder :public IBuilder
{
public:
	ThinkPadBuilder() { m_pComputer = new Computer(); }
	void BuildCpu()override { m_pComputer->SetmCpu("i5-8400"); }
	void BuildMainboard()override { m_pComputer->SetmMainboard("Intel DH57DD"); }
	void BuildRam()override { m_pComputer->SetmRam("DDR4"); }
	void BuildVideoCard()override { m_pComputer->SetmVideoCard("NVIDIA Geforce 920MX"); }
	Computer* GetResult()  {return m_pComputer;
}
private:
	Computer *m_pComputer;
};

class YogaBuilder : public IBuilder
{
public:
	YogaBuilder() { m_pComputer = new Computer(); }
	void BuildCpu() { m_pComputer->SetmCpu("i7-8250U"); }
	void BuildMainboard() { m_pComputer->SetmMainboard("Intel DP55KG"); }
	void BuildRam() { m_pComputer->SetmRam("DDR5"); }
	void BuildVideoCard() { m_pComputer->SetmVideoCard("NVIDIA GeForce 940MX"); }
	Computer* GetResult() { return m_pComputer; }

private:
	Computer *m_pComputer;
};