#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	bool flag=0;
	cout<<"Enter number you want to check wether it is prime or Not prime:"<<endl;
	cin>>n;
	
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<"Not prime"<<endl;
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	{
		cout<<"prime number "<<endl;
	}
	return 0;
}

