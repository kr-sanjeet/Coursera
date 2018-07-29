#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
   if(a>=b)
   return a;
   else
   return b;
 }

int knapSack(int W, int wt[], int n)
{
    int result;
//long long int K[n+1][W+1];

int** K = new int*[n+1];
  for(int i = 0; i < n+1; ++i)
      K[i] = new int[W+1];

for (int i = 0; i <= n; i++)
{
	for (int k = 0; k <= W; k++)
	{
		if (i==0 || k==0)
			K[i][k] = 0;
		else if (wt[i-1] <= k)
				K[i][k] = max(wt[i-1] + K[i-1][k-wt[i-1]], K[i-1][k]);
		else
				K[i][k] = K[i-1][k];
	}
}

result = K[n][W];
return result;
}

int main()
{
    int w,n;
    cin>>w>>n; int wt[n];
    for(int i=0;i<n;i++)
    cin>>wt[i];

    sort(wt,wt+n);

cout<<knapSack(w, wt, n)<<endl;
	return 0;
}
