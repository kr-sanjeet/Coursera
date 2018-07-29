#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n1; cin>>n1;  int number[n1+1];
  number[0]=0; number[1]=1;

  for(int i=2;i<=n1;i++)
   number[i]=(number[i-1]+number[i-2]);

  cout<<number[n1]<<"\n";
  return 0;
}
