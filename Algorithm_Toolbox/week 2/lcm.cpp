#include<bits/stdc++.h>
using namespace std;
int main()
{

	unsigned long long int n1, n2, n3, n4, t, hcf, lcm;
	cin>>n3>>n4;
	n1=n3;
	n2=n4;
	while(n2!=0)
	{
		t=n2;	n2=n1%n2;	n1=t;
	}
	hcf=n1;
	lcm=(n3*n4)/hcf;
	cout<<lcm<<"\n";
	return 0;
}
