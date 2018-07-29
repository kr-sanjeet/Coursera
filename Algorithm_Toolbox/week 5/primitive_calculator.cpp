#include<bits/stdc++.h>
using namespace std;

int minimum_number(int small1, int small2, int small3)
{
  int minimum;
  if(small1<=small2)
  {
    if(small1<=small3)
    {
      minimum=small1;
    }
    else
    {
      minimum=small3;
    }
  }
  else
  {
    if(small2<=small3)
    {
      minimum=small2;
    }
    else
    {
      minimum=small3;
    }
  }

  return minimum;
}

void result_sequence(int arr[], int sequence[], int n)
{ int small1, small2, small3, min; sequence[0]=n; int operation, index=1,result,n1=n;
  while(n!=1)
  { small1=n+1; small2=n+1; small3=n+3;
    if(n%3==0)
    {
     small3=arr[n/3];
    }
    if(n%2==0)
    {
      small2=arr[n/2];
    }

    small1 = arr[n-1];

    min=minimum_number(small1,small2,small3);

    if(n>=24)
    {
     if(min==small1)
    {
      n=n-1;
      operation = n;
    }
    else if(min==small3)
    {
      n=n/3;
      operation = n;
    }
  else if(min==small2)
    {
      n=n/2;
      operation = n;
    }
  }
  else
  {
    if(min==small3)
   {
     n=n/3;
     operation = n;
   }
 else if(min==small2)
   {
     n=n/2;
     operation = n;
   }
  else if(min==small1)
  {
    n=n-1;
    operation = n;
  }
  }

    sequence[index]=operation; index+=1;

   }
    result = arr[n1]-1;
    cout<<result<<"\n";

    for(int i=index-1;i>=0;i--)
    {
      cout<<sequence[i]<<" ";
    }
  cout<<endl;

}


int main()
{
  int n; cin>>n;
  int arr[n+1]; arr[0]=0; int small1,small2,small3,temp,min,operation;
  int index=0, sequence[n];
  for(int i=1;i<=n;i++)
  {
    small1=n+1; small2=n+1; small3=n+1;
    if(i%3==0)
    {
      temp=i/3;
      small3=arr[temp];
    }
    if(i%2==0)
    {
      temp=i/2;
      small2=arr[temp];
    }
    small1 = arr[i-1];
    min=minimum_number(small1,small2,small3);

if(min==small1)
{
  operation = i-1;
}
else if(min==small2)
{
  operation = i/2;
}
else
{
  operation = i/3;
}
      arr[i]=arr[operation]+1;

  }

 result_sequence(arr, sequence, n);
  return 0;
}
