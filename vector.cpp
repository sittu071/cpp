#include <iostream>  
#include <string> 
#include <vector>
#include <algorithm>
/*
iterators
1. begin()          7. crbegin()
2. end()            8. crend()
3. cbegin()
4. cend()
5. rbegin()
6. rend()
*/

using namespace std;  
int main ()  
{  
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	// for_each(v.begin(),v.end(),[&](int x){
	// 	cout<<x<<" ";
	// });
    // cout<<endl;
    // for_each(v.cbegin(),v.cend(),[&](int x){
	// 	cout<<x<<" ";
	// });

    // cout<<endl;
    // for_each(v.rbegin(),v.rend(),[&](int x){
	// 	cout<<x<<" ";
	// });

    // cout<<endl;
    // for_each(v.crbegin(),v.crend(),[&](int x){
	// 	cout<<x<<" ";
	// });
    // cout<<endl;
/* Capacity
1. size()           6. shrink_to_fit()
2. capacity()       7. reserve()
3. max_size()
4. resize()
5. empty()
*/
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    // v.resize(10);

    // for_each(v.begin(),v.end(),[&](int x){
	// 	cout<<x<<" ";
	// });

    // cout<<endl;
    // v.resize(3,100);
    // for_each(v.begin(),v.end(),[&](int x){
	// 	cout<<x<<" ";
	// });
    // cout<<endl;
    // cout<<v.max_size()<<endl;
    //  if (v.empty() == false)
    //     cout << "\nVector is not empty";
    // else
    //     cout << "\nVector is empty";
    // cout<<endl;

    //cout<<v.at(4)<<" "<<v[4]<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // int* pos = v.data();
    // cout<<*(pos+3)<<endl;


    /*
    Modifiers:
    1. assign()
    2. push_back()
    3. pop_back()
    4. insert()
    5. erase()
    6. swap()
    7. clear()
    8. emplace()
    9. emplace_back()
    */

    // v.assign(5,10);

    // for_each(v.begin(),v.end(),[&](int x){
    //     cout<<x<<" ";
    // });
    // cout<<endl;

    // cout<<endl;
    // auto itr = v.begin();
    // v.insert(2,1000);

    // for_each(v.begin(),v.end(),[&](int x){
    //     cout<<x<<" ";
    // });
    // auto itr = v.begin();
    // v.insert(itr,25);
    // for_each(v.begin(),v.end(),[&](int x){
    //     cout<<x<<" ";
    // });
    // cout<<endl;
    // cout<<endl;
    // auto itr1 = find(v.begin(),v.end(),10);
    // if(itr != v.end())
    // {
    //     v.erase(itr);
    // }
    
    // for_each(v.begin(),v.end(),[&](int x){
    //     cout<<x<<" ";
    // });

    // v.clear();
    //   for_each(v.begin(),v.end(),[&](int x){
    //     cout<<x<<" ";
    // });
    //v.emplace(v.begin(),90);
    for_each(v.begin(),v.end(),[&](int x){
        cout<<x<<" ";
    });
    cout<<endl<<v.size()<<" "<<v.capacity()<<endl;

return 0;   
}  