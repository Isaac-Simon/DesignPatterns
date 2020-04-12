#pragma once

#include "builder.h"

//¹¹ÔìÖ¸»Ó¹Ù

class Director
{
public:
	void Create(IBuilder *builder) {
		builder->BuildCpu();
		builder->BuildCpu();
		builder->BuildRam();
		builder->BuildVideoCard();
	}
};
