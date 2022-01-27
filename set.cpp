#include<iostream>
#include<set>
#include <map>
#include <algorithm>

using std::cout;
using std::endl;
using std::set;
using std::map;

int main()
{
    set<int> s{10,20,30,40,50};

    std::for_each(s.begin(),s.end(),[](int x){
        cout<<x<<" ";
    });
    cout<<endl;

    map<int,int> mp = {{10,20},{20,30},{30,40}};
    //map<int, char> m = {{1, 'a'}, {3, 'b'}, {5, 'c'}, {7, 'd'}};
    for (auto &value: mp)
    {
        cout<<value.first<<endl;
    }
    
    
    return 0;
}