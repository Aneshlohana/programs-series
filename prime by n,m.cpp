#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int n)
{

	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
		  return false;
		}
		
	}
	return true;
}
int main()
{
	int n,m;
	cout<<"Enter number:"<<endl;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		if(is_prime(i))
		cout<<i<<endl;
	}
	
}
