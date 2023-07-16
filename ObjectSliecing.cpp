#include <iostream>
#include <memory>

using namespace std;

class A
{
        
    public:
     int baseValue;
        A(){}
        A(int value):baseValue(value){}
        virtual  void printValue()
        {
            cout<<baseValue<<endl;
        }
};


class B: public A
{
        
    public:
        int derivedValue;
        B(int value1,int value2):A(value1),derivedValue(value2)
        {

        }
        void printValue() override
        {
            cout<<"baseValue\t"<<baseValue<<"\tderivedValue\t"<<derivedValue<<endl;
        }

};


int main()
{   B d(10,20);
    //A a(d); Object slicing occur here
    A* a(&d); //removed using refernece of derived class to pinter of base class
    a->printValue();
    return 0;
}
