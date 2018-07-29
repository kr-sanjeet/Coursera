#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  long long int number[n],temp=0,n1,n2;
  n1=0; n2=0; cin>>number[0]; n1=number[0];
  for(int i=1;i<n;i++)
  {
    cin>>number[i];
    if(n1<number[i])
    {
      n2=n1;
      n1= number[i];
    }
    else if(number[i]>n2)
      n2=number[i];
}
  cout<<n1*n2<<"\n";
  return 0;
}
