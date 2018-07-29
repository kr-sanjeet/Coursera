#include<bits/stdc++.h>
using namespace std;

int binary_search_element(long long int elements[], int high, long long int number)
{
  int low=0,mid; high -=1;


   while(mid!=low || mid!=high)
   {
     mid = (low+high)/2;
   if(elements[mid]<number && low!=high)
    {
     low=mid+1;
    }
   else if(elements[mid]>number && low!=high)
   {
     high=mid-1;
   }
   else if(elements[mid]==number)
   {
     return mid;
   }
   else
      return -1;

   if(high<low)
     return -1;
 }
}

int main()
{
  int number1,number2,result; long long int search_element;
  cin>>number1; long long int elements[number1];

  for(int j=0;j<number1;j++)
  cin>>elements[j];

    cin>>number2;

  for(int i=0;i<number2;i++)
  {
    cin>>search_element;
    result = binary_search_element(elements,number1,search_element);

    if(search_element==elements[result])
    cout<<result<<" ";
    else
    cout<<"-1"<<" ";
  }
  return 0;
}
