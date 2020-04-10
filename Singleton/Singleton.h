#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

using namespace std;

//class Singleton  //非标准单例
//{
//public:
//    static Singleton& GetInstance(){
//        static Singleton instance;
//        return instance;
//    }
//private:
//    Singleton() {}
//};

class Singleton
{
public:
    static Singleton* GetInstance();
    static void DestoryInstance()
    {
        if (m_pSingleton != NULL) {
            delete m_pSingleton;
            m_pSingleton = NULL;
        }
    }

private:
    Singleton() {}  // 构造函数（被保护）

private:
    static Singleton *m_pSingleton;  // 指向单例对象的指针

    // GC 机制
    class GC
    {
    public:
        GC(int i){
            std::cout<<i;
        }
        GC(){}
        ~GC()
        {
            // 可以在这里销毁所有的资源，例如：db 连接、文件句柄等
            if (m_pSingleton != NULL) {
                cout << "Here destroy the m_pSingleton..." << endl;
                delete m_pSingleton;
                m_pSingleton = NULL;
            }
        }
        static GC gc;  // 用于释放单例
    };
};

#endif // SINGLETON_H
