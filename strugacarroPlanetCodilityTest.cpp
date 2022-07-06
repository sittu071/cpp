// C++ implementation to keep track
// of previous indexes
// after sorting a vector

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int>& a,pair<string,int>& b)
{
	return a.second <= b.second;
}

string solution(vector<int>& T)
{
	int count =  T.size()/4;
	int j = 0,i=0, amp=0, temp=0;
	string arr[] = {"WINTER","SPRING","SUMMER","AUTUMN"};
	vector<pair<string, int> > pairs;

	vector<int> comSeason;


    for(j=0,i=0;j<count; j++,i++){
        comSeason.push_back(T[j]);
    }

	sort(comSeason.begin(),comSeason.end());
	amp = comSeason[comSeason.size()-1] - comSeason[0];
	pairs.push_back(make_pair(arr[temp++], amp));
	comSeason.clear();

    for(j=count,i=0;j<count*2; j++,i++){
        comSeason.push_back(T[j]);
    }
	sort(comSeason.begin(),comSeason.end());
	amp = comSeason[comSeason.size()-1] - comSeason[0];
	pairs.push_back(make_pair(arr[temp++], amp));
	comSeason.clear();

    for(j=count*2,i=0;j<count*3; j++,i++){
        comSeason.push_back(T[j]);
    }
	sort(comSeason.begin(),comSeason.end());
	amp = comSeason[comSeason.size()-1] - comSeason[0];
	pairs.push_back(make_pair(arr[temp++], amp));
	comSeason.clear();

    for(j=count*3,i=0;j<count*4; j++,i++){
        comSeason.push_back(T[j]);
    }
	sort(comSeason.begin(),comSeason.end());
	amp = comSeason[comSeason.size()-1] - comSeason[0];
	pairs.push_back(make_pair(arr[temp++], amp));
	comSeason.clear();


	sort(pairs.begin(),pairs.end(),cmp);

	vector<string> result;
	for(auto& x: pairs)
	{
		result.push_back(x.first);
	}
	temp = temp-1;
	return result[temp];
}

// Driver code
int main()
{
	// vector<int> v = {2,-3,3,1,10,8,2,5,13,-5,3,-18};
	vector<int> v = {-3,-14,-5,7,8,42,8,3};

	cout<<solution(v);
	return 0;
}
