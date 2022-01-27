#include <bits/stdc++.h>
using namespace std;

//lvalues and rvalues 
// you cannot take an lvalue reference from rvalue
// you can take reference of lvalue from lvalue
// you can take reference of rvalue from rvalue


// int& getValue()
// {
//     // int 
//     static int i = 10;
//     return i;
// }

// void  getValue(int i)
// {

// }

void printName(string&& name)
{
    cout<<name<<endl;
}

// void printName(const string& name)
// {
//     cout<<name<<endl;
// }

int main()
{
    //Exmple 1: reference of lvalue
    // int i = getValue();
    // getValue() = 30;


    //Example 2: passing lvalue to rvalue
    // int i = 10;
    // getValue(i);
    // getValue(10);

    //Example 3: 
    // you cannot take an lvalue reference from rvalue
    // you can take reference of lvalue from lvalue
    // you can take reference of rvalue from rvalue
    // const int& i = 10;
    // int j = i;
    //error: 
    /*
    .\moveConstructo.cpp:38:14: error: 
    cannot bind non-const lvalue reference of type 'int&'
     to an rvalue of type 'int'
     solution:- make lvalue reference as const
     */

    string firstName = "Mausam";
    string secondName = "Sinha";
    string fullName = firstName + secondName;
   // printName(fullName); //this will work as we are passing lvalue to lvalue
    printName(firstName + secondName);//this won't work because we are passing rvalue to lvalue reference

    //solution will be here, you are seeing lot of function have declare with const parameter
    

    return 0;
}