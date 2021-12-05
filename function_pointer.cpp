//what is function pointer
//basically it holds the memory address of a function

//example1: how to create function pointer,use and call function using function pointer
// #include <iostream>

// using namespace std;

// int add(int a, int b)
// {
//     return a + b;
// }

// int subtract(int a, int b)
// {
//     return a - b;
// }

// int main()
// {
//     int (*fun)(int, int) = &subtract;
//     int c = (*fun)(3, 5);
//     cout<<c<<endl;
//     return 0;
// }

//example2: How to pass a function pointer as an argument

// #include <iostream>

// using namespace std;

// int add(int a, int b)
// {
//     return a + b;
// }

// int subtract(int a, int b)
// {
//     return a - b;
// }

// int extraRemval(int (*temp)(int, int))
// {
//     int newVar = (*temp)(20,10) - 5;
//     return newVar;
// }

// int main()
// {
//     int c = extraRemval(&subtract);
//     cout<<c<<endl;
//     return 0;
// }

//example3: create function pointer array
#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divison(int a, int b)
{
    return a / b;
}


int main()
{
    int (*funArr[])(int, int) = {&add, &subtract, &multiply, &divison};
    int c = (*funArr[2])(5,10);
    cout<<c;
    return 0;
}