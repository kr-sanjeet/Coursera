#include<bits/stdc++.h>
using namespace std;

int main()
{
  int change; cin>>change; int denomination[3]={1,5,10}; int count;
 count =0;
  while(change!=0)
  {
    for(int i=3-1;i>=0;i--)
    {
      if(denomination[i]<=change)
      {
       count += change/denomination[i];
       change = change%denomination[i];
       break;
      }
    }
  }

  cout<<count<<"\n";
  return 0;
}
