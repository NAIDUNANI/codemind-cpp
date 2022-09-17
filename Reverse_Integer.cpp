#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,sum=0;
	cin>>a;
	while(a)
	{
		b=a%10;
		sum=sum*10+b;
		a=a/10;
	}
	cout<<sum;
}