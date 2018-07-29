#include<bits/stdc++.h>
using namespace std;

int majority(long long int number[], int n1)
{ int total=1;
	for(int k=0;k<n1;k++)
	{
	if(number[k]==number[k+1])
		total +=1;
	else
	total=1;

	if(total>n1/2)
		return 1;
	}
	return 0;
}

int main()
{
	int n1;int check=0; cin>>n1;
	long long int number[n1];

	for(int i=0;i<n1;i++)
	cin>>number[i];

	sort(number, number+n1);

	check = majority(number,n1);
	if(check==1)
	cout<<"1"<<endl;
	else
	cout<<"0"<<endl;
	return 0;
}
