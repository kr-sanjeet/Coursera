#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long int n1,i,total, number[100000];

  int index=0;i=1; total=0;
  cin>>n1;
  while(n1!=0)
  {
    if((i<n1)&&((n1-i)>=(i+1)))
    {
      number[index]=i;
      n1=n1-i;
      i=i+1;
     total+=1; index+=1;
    }
    else
    {
       number[index]=n1;
      n1-=n1; total+=1; index+=1;
    }
  }
  cout<<total<<"\n";
  for(int k=0;k<index;k++)
  cout<<number[k]<<" ";
  cout<<endl;

  return 0;
}
