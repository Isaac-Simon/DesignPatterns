#include <iostream>
#include "Singleton.h"

using namespace std;

Singleton::GC Singleton::GC::gc;
//Singleton::GC Singleton::GC::gc(555);

//全局变量先于main函数里面的被构造，main函数结束后，再析构全局对象
//调用gc的析构函数;这句话是初始化静态变量gc,由于gc是什么无关紧要，
//所以就用了默认构造函数；第二种写法帮助理解，可以忽略

int main()
{
    Singleton::GetInstance();

    return 0;
}
