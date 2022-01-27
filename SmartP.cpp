
#include <memory>
#include <iostream>

using namespace std;
class MyClass
{
    public:
        MyClass(){
            cout<<"Constructor invoked\n";
        }
        ~MyClass(){
            cout<<"Destructor invoked\n";
        }
};


int main()
{
   std::shared_ptr<MyClass>unP(new MyClass);//= std::make_unique<int>(25);
   std::shared_ptr<MyClass>unP1 = unP;//(new MyClass);//= std::make_unique<int>(25);
   cout<<"Unique ptr " <<unP.use_count()<<endl;
   return 0;
}