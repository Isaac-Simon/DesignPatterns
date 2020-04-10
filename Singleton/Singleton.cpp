#include "Singleton.h"

Singleton *Singleton::m_pSingleton=nullptr;

Singleton *Singleton::GetInstance(){
    if (m_pSingleton==nullptr)
        m_pSingleton=new Singleton();

    return m_pSingleton;
}
