#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Example of how getline work */
    // // take three test case and print the three lines of strings
    // int t; 
    // //after cin it takes buffer like t cursor
    // cin>>t;
    // //to ignore buffer
    // cin.ignore();
    // while(t--)
    // {
    //     string str;
    //     getline(cin,str);
    //     cout<<str<<endl;
    // }

    /* Print a reverse string */
    cout<<"Input a string"<<endl;
    string str;
    string revstr;
    getline(cin,str);
    for_each(str.rbegin(),str.rend(),[&revstr](char x){
        revstr.push_back(x);
    });
    cout<<revstr<<endl;
    /* given string is plaindrome or not */
    (str == revstr)?(cout<<"YES"):(cout<<"NO");


    return 0;
}