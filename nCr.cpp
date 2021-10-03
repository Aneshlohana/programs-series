#include<iostream>
using namespace std;


int fac(int n)
{
	int factorial=1;
	for(int i=2;i<=n;i++)
	{
		factorial*=i;
	}
	return factorial;
}
int main()
{
	int n,r;
	cout<<"Enter number for factorial"<<endl;
	cin>>n>>r;
	int ans=fac(n)/fac(n)*fac(n-r);
	cout<<ans<<endl;
}
