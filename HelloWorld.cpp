#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        for(int i = 0;i<nums.size();i++)
            total_sum = total_sum + nums[i];
        cout<<total_sum<<endl;

        int left_sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(i!=0) left_sum = left_sum + nums[i -1];
            if(total_sum - left_sum - nums[i] == left_sum) return i;
            
        }
        return -1;
        
    }
int main()
{
    vector<int> num = {1,7,3,6,5,6};
    int res = pivotIndex(num);
    cout<<res;
    return 0;
}
 

