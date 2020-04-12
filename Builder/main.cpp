#include "concrete_builder.h"
#include "director.h"

#include <iostream>
#include <string>

int main()
{
	Director *pDirector = new Director();
	ThinkPadBuilder *pTPBuilder = new ThinkPadBuilder();
	YogaBuilder *pYogaBuilder = new YogaBuilder();

	// 组装 ThinkPad、Yoga
	pDirector->Create(pTPBuilder);
	pDirector->Create(pYogaBuilder);

	// 获取组装后的电脑
	Computer *pThinkPadComputer = pTPBuilder->GetResult();
	Computer *pYogaComputer =pYogaBuilder->GetResult();

	// 测试输出
	cout << "-----ThinkPad-----" << endl;
	cout << "CPU: " << pThinkPadComputer->GetCPU() << endl;
	cout << "Mainboard: " << pThinkPadComputer->GetMainboard() << endl;
	cout << "Ram: " << pThinkPadComputer->GetRam() << endl;
	cout << "VideoCard: " << pThinkPadComputer->GetVideoCard() << endl;

	cout << "-----Yoga-----" << endl;
	cout << "CPU: " << pYogaComputer->GetCPU() << endl;
	cout << "Mainboard: " << pYogaComputer->GetMainboard() << endl;
	cout << "Ram: " << pYogaComputer->GetRam() << endl;
	cout << "VideoCard: " << pYogaComputer->GetVideoCard() << endl;


	return 0;
}

