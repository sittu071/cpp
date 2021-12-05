/*
A Functor is a object which acts like a function. Basically, a class which defines operator().
*/
#include <iostream>

using namespace std;

// class MyFunctor
// {
//    public:
//      int operator()(int x) { return x * 2;}
// }

// int main()
// {
//     MyFunctor doubler;
//     int x = doubler(5);
//     return 0;
// }

/* The real advantage is that a functor can hold state. */
class Matcher
{
   int target;
   public:
     Matcher(int m) : target(m) {}
     bool operator()(int x) { return x == target;}
};


int main()
{
   Matcher Is5(5);

    if (Is5(5))    // same as if (n == 5)
    {cout<<"Do nothing\n";}
    return 0;
}
