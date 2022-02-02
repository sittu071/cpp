#include <bits/stdc++.h>
using namespace std;
C++ 11 Smart pointers : unique_ptr tutorial and example
// unique pointer is a smart pointer. which 

class Base
{
    public:
    Base(){cout<<"Base class constructor\n";}
};
int main()
{
    unique_ptr<Base> unPtr = make_unique<Base>();
    return 0;
}