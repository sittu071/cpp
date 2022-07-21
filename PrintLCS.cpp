// Min Subset Sum Difference

#include <bits/stdc++.h>
using namespace std;

string LCS(string x, string y, int m, int n)
{
	string res;
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
			if(x[i-1] == y[j-1])
			{
				t[i][j] = 1 + t[i-1][j-1];
			}
			else
			{
				t[i][j] = max(t[i-1][j],t[i][j-1]);
			}
		}
	}

	int i = m, j = n;
	string lcs = "";
	while(i > 0 and j >0)
	{
		if(x[i-1] == y[j-1])
		{
			lcs.push_back(x[i-1]);
			i--;
			j--;
		}
		else{
			if(t[i][j-1]>t[i-1][j])
			{
				j--;
			}
			else{
				i--;
			}
		}
	}
	return lcs;
}

int main()
{
    string X = "abac";
    string Y = "cab";
    int m = X.length();
    int n = Y.length();
 
    cout << "LCS  is " << LCS(X, Y, m, n) << endl;
 
    // string s = findLCS(X, Y, m, n);
 
    // for (string str : s)
    //     cout << str << endl;
 
    return 0;
}
