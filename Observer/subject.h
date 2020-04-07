#pragma once

class IObserver;

class ISubject
{
public:
	virtual void attach(IObserver *)=0;//注册观察者
	virtual void detach(IObserver *)=0;//注销观察者
	virtual void notify() = 0;//通知观察者
	virtual void setState(float p) = 0;
	virtual float getState() = 0;
};
