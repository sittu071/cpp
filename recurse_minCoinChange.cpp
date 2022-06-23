// CPP program for above approach
#include <iostream>
using namespace std;

int minCoins(int coins[], int n, int sum)
{
   if(sum<=0) return 0;

   int minCount = INT_MAX;

   for(int i = 0; i<n; i++)
   {
      if(coins[i]<=sum)
      {
         int pickCoin = minCoins(coins,n-1,sum-coins[i]);
         if(pickCoin!=INT_MAX and pickCoin + 1<minCount)
         {
            minCount = pickCoin + 1;
         }
      }
   }
   
   return minCount;
}


int main()
{
    int coins[] = {25, 10, 5};
    int n = sizeof(coins)/sizeof(coins[0]);
    int sum = 30;
    cout << "Minimum coins required is "
         << minCoins(coins, n, sum);
    return 0;
}
