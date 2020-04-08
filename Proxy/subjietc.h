#pragma once

class ITelco
{
public:
	virtual ~ITelco() {}
	virtual void Recharge(int money) = 0;
};
