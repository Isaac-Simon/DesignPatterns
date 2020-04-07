#include "concrete_subject.h"
#include "concrete_observer.h"

int main()
{
	//创建主题、观察者
	ConcreteSubject *pSubject = new ConcreteSubject();
	ConcreteObserver *pObserver1 = new ConcreteObserver("Jack ma	");
	ConcreteObserver *pObserver2 = new ConcreteObserver("Pony	");
	ConcreteObserver *pObserver3 = new ConcreteObserver("Simon	");
	ConcreteObserver *pObserver4 = new ConcreteObserver("Dog	");

	//注册观察者
	pSubject->attach(pObserver1);
	pSubject->attach(pObserver2);
	pSubject->attach(pObserver3);
	pSubject->attach(pObserver4);

	//观察者1状态改变后，其他观察者全部同步
	pObserver1->setPrice(12.2);
}