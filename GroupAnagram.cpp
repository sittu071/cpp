#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<string> v = {"eat", "tea", "tan", "ate", "nat", "bat", "atd"};
    
    map<string,vector<string>> mymap;

    for(auto &x: v)
    {
        string s = x;
        sort(s.begin(),s.end());
        //mymap.insert({s,{x,x,x}}); // use using insert function
        mymap[s].push_back(x);
    }

    vector< vector<string> > res;
    for(const auto &pair: mymap)
    {
        res.push_back(pair.second);
    }

    for(const auto &v1:res)
    {
        for(const auto &v2:v1)
        {
            cout<<v2<<endl;
        }
    }


}
