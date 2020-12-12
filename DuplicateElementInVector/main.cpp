#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    vector<std::string> vecOfStings{ "at" , "hello", "hi", "there", "where", "now", "is", \
                                        "that" , "hi" , "where", "at", "no", "yes", "at"};

    map<string,int> countMap;

    for (auto & elem : vecOfStings)
    {
        auto result = countMap.insert(std::pair<std::string, int>(elem, 1));

        if (result.second == false)
            result.first->second++;
    }

    for(auto & elem: countMap)
    {
        if(elem.second > 1)
            cout<<elem.first<<" "<<elem.second<<endl;
    }

    return 0;
}
