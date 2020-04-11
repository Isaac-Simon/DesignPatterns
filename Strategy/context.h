#pragma once

#include "strategy.h"

class Context
{
public:
	Context(IStrategy* strategy) { m_strategy = strategy; }
	void  Travel() { m_strategy->Travel(); }
private:
	IStrategy *m_strategy;
};
