#include <iostream>
#include "concreteclass.h"

int main()
{
	Company *alibaba = new Alibaba();
	alibaba->Recruit();

	Company *tencent = new Tencent();
	tencent->Recruit();
}

