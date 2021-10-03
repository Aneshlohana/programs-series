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
	int a;
	cout<<"Enter number for factorial"<<endl;
	cin>>a;
	cout<<"Factoial of "<<a<<" is :";
	int ans=fac(a);
	cout<<ans<<endl;
}
