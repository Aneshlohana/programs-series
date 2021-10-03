//Write a program to display all factors of a number.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number : for finding factors !"<<endl;
	cin>>n;
	
	cout<<"Factors are :"<<endl;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
