#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int rod_cutting(int price[],int length[],int rod_len,int n){
    int dp[n+1][rod_len+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=rod_len;j++){
            if(j==0){
                dp[i][j]=0;
            }
            else if(i==0){
                dp[i][j]=0;
            }
            else if(j< length[i-1]){
                dp[i][j]= dp[i-1][j];
            }
            else{
                dp[i][j]= max(price[i-1]+dp[i][j-length[i-1]],dp[i-1][j]);
            }
        }
    }
    
    return dp[n][rod_len];
}

int main()
{
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20 };
 int length[] = {1, 2, 3, 4, 5,   6, 7,   8};

	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum Obtainable Value is "
		<< rod_cutting(arr,length, size - 1, size);
	getchar();
	return 0;
}
