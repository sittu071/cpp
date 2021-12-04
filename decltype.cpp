//What is decltype and how is it used?
//It might be worth stressing the difference between auto and decltype: auto works on types, and decltype works on expressions.
// auto keyword: The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer.
// decltype lets you extract the type from the variable so decltype is sort of an operator that evaluates the type of passed expression. 
// C++ program to demonstrate use of decltype
#include <bits/stdc++.h>
using namespace std;
 
// Driver Code
int main()
{
    int x = 5;
 
    // j will be of type int : data type of x
    decltype(x) j = x + 5;
 
    cout << typeid(j).name();
 
    return 0;
}