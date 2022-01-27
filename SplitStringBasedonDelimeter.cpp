#include <bits/stdc++.h>

using namespace std;  

vector<string> split(const string& s, char delimiter)
{
    vector<string> v;
    string token;
    istringstream ss(s);
    while(getline(ss, token, delimiter))
    {
        v.push_back(token);
    }
    return v;
}

int main()
{
    string s = "dog cat cat dog";
    char delimeter = ' ';
    vector<string> v = split(s,delimeter);
    for_each(v.begin(),v.end(),[](string s){
        cout<<s<<endl;
    });

    

   return 0;
}  
