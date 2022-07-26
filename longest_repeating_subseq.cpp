#include <bits/stdc++.h>
using namespace std;

int LCS(string x, string y, int m, int n)
{
	int t[m+1][n+1];
	for(int i = 0; i<=m; i++)
	{
		t[i][0] = 0;
	}
	
	for(int j = 0; j<=n; j++)
	{
		t[0][j] = 0;
	}

	for(int i = 1; i<=m; i++)
	{
		for(int j = 1; j<=n; j++)
		{
			if((x[i-1] == y[j-1]) and (i!=j))
			{
				t[i][j] = 1 + t[i-1][j-1];
			}
			else
			{
				t[i][j] = max(t[i-1][j],t[i][j-1]);
			}
		}
	}
	cout<<endl;
	for(int i = 0; i<=m; i++)
	{
		for(int j = 0; j<=n; j++)
		{
			cout<<t[i][j]<<"  ";
		}
		cout<<endl;
	}
		cout<<endl;

	return t[m][n];
}

int main()
{
    string X = "AABEBCDD";
    string Y = "AABEBCDD";
    int m = X.length();
    int n = Y.length();
 
    cout << "LCS  is " << LCS(X, Y, m, n) << endl;
 
    return 0;
}
