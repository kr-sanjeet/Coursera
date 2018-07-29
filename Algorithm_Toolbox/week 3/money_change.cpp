#include<bits/stdc++.h>
using namespace std;

int main()
{
  int money; cin>>money; int den[3]={1,5,10}; int count;
 count =0;
  while(money!=0)
  {
    for(int k=3-1;k>=0;k--)
    {
      if(den[k]<=money)
      {
       count += money/den[k];
       money = money%den[k];
       break;
      }
    }
  }

  cout<<count<<endl;
  return 0;
}
