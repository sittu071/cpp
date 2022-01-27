#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;


int main()
{


    int num1 = 1;
    int num2 = 1;
    cout<<num1<<" "<<num2<<" ";
    static int num3 = 0;
    for(auto i = 0; i<10; i++)
    {
        [&num1, &num2](){
            num3 = num1 + num2;
            cout<<num3<<" ";
            num1 = num2;
            num2 = num3;
        };
    }


    return 0;
}