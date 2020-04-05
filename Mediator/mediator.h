#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "colleague.h"
#include <list>
#include <string>

class IColleague;
//抽象中介者
class IMediator
{
public:
    void registerColleague(IColleague* colleague){
        m_colleagues.emplace_back(colleague);
    }
    const std::list<IColleague *>& getColleagues()const{
        return m_colleagues;
    }
    virtual void distributeMessage(const IColleague *sender,const std::string& message)const=0;
private:
    std::list<IColleague*> m_colleagues;
};






#endif // MEDIATOR_H
