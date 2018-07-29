
#include<bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
	return min(min(x, y), z);
}

int edit_Dist(string name1, string name2, int m, int n)
{

	int dp[m+1][n+1];

	for (int i=0; i<=m; i++)
	{
		for (int j=0; j<=n; j++)
		{
			if (i==0)
				dp[i][j] = j;

			else if (j==0)
				dp[i][j] = i;

			else if (name1[i-1] == name2[j-1])
				dp[i][j] = dp[i-1][j-1];

			else
				dp[i][j] = 1 + min(dp[i][j-1],
								dp[i-1][j],
								dp[i-1][j-1]);
		}
	}

	return dp[m][n];
}


int main()
{

	string name1 ;
	string name2 ; cin>>name1; cin>>name2;

	cout << edit_Dist(name1, name2, name1.length(), name2.length())<<endl;

	return 0;
}
