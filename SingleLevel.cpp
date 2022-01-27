#include <iostream>
using std::cout;
using std::endl;

class A
{
    int x,y;
    public:
    A(){cout<<"A constructor\n";}
    virtual void fun(){cout<<"A::fun";}
    virtual void fun1(){cout<<"A::fun1";}
    void fun2(){cout<<"A::fun2";}
    void fun3(){cout<<"A::fun3";}
};

class B: public A
{
    int x,y;
    public:
    B(){cout<<"B constructor\n";}
    void fun(){cout<<"B::fun";}
    void fun1(){cout<<"B::fun1";}
    void fun2(){cout<<"B::fun2";}
    void fun3(){cout<<"B::fun3";}
};

int main()
{
    
    return 0;
}
