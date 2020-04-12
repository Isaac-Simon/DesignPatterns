#pragma once

class Monkey
{
public:
	Monkey() {}
	virtual ~Monkey() {}
	virtual Monkey* Clone() = 0;
	virtual void Play() = 0;
};