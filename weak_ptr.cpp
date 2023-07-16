#include <iostream>
#include <memory>

using namespace std;

class B;

class A
{
    public:
    shared_ptr<B> bSharedPtr;
    ~A(){}
};

class B
{
    public:
    weak_ptr<A> aWeakPtr;
    ~B(){}

};

int main()
{

    shared_ptr<A> aPtr = make_shared<A>();
    shared_ptr<B> bPtr = make_shared<B>();
    
    aPtr->bSharedPtr = bPtr;
    bPtr->aWeakPtr = aPtr;
    cout<<aPtr.use_count()<<endl;
    cout<<bPtr.use_count()<<endl;

}
