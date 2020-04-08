
#include <iostream>
#include "proxy.h"

int main()
{
	Proxy *proxy = new Proxy();
	proxy->Recharge(20);
	proxy->Recharge(100);

	getchar();

	return 0;
}
