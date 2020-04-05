#ifndef COLLEAGUE_H
#define COLLEAGUE_H
#include "mediator.h"

class IMediator;

class IColleague
{
public:
    IColleague(const std::string& name):m_strName(name){}
    virtual ~IColleague(){}
    std::string getName() const{return m_strName;}

    virtual void sendMessage(const IMediator& mediator,const std::string& message)const=0;
    virtual void receiveMessage(const IColleague* sender,const std::string& message)const=0;
private:
    std::string m_strName;
};





#endif // COLLEAGUE_H
