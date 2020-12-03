#include <iostream>
using namespace std;

template<typename T>
void print(T t)
{
    cout<<t<<endl;

}

int main()
{
    print("Hello World");
    print(1);
    print(1.1);
    print("H");
    return 0;
}
