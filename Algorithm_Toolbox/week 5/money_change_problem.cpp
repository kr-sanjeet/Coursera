#include<bits/stdc++.h>
using namespace std;

int main()
{
  int den[3] = {1,3,4}; int count =0;
  int n1; cin>>n1; int arr1[3]={0,0,0};
  while(n1!=0)
  {
    if(n1>=4)
    {
      arr1[2]=n1/4;
      n1=n1%4;
    }
    else if(n1>=3)
    {
      arr1[1]=n1/3;
      n1=n1%3;
    }
    else
    {
      if(n1==2)
      {
        n1=n1+4;
        arr1[1]=n1/3;
        n1=n1%3; arr1[2]-=1;
      }
      else
      {
      arr1[0]=n1/1;
      n1=n1%1;
    }
    }
  }
  for(int i=0;i<3;i++)
  {
  count +=arr1[i];
  }
  cout<<count<<endl;
  return 0;
}
