#ifndef CONCRETECOLLEAGUE_H
#define CONCRETECOLLEAGUE_H

#include "colleague.h"
#include <iostream>

class ConcreteColleague:public IColleague
{
public:
    using IColleague::IColleague;

    virtual void sendMessage(const IMediator& mediator,const std::string& message)const override{
        mediator.distributeMessage(this,message);
    }
private:
    // 接收来自发送者的消息
    virtual void receiveMessage(const IColleague* sender, const std::string& message) const override {
        std::cout << getName() << " received the message from "
                  << sender->getName() << ": " << message << std::endl;
    }

};



#endif // CONCRETECOLLEAGUE_H
