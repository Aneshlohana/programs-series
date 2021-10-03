#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number"<<endl;
	cin>>n;
	int last_digit,sum=0;
	int orginal=n;
	
	
	while(n>0)
	{
		last_digit=n%10;
		sum+= pow(last_digit,3);
		n=n/10;
	}
	if(sum==orginal)
	{
		cout<<"Armstrong number"<<endl;
	}
	else
	{
		cout<<"Not armstrong number "<<endl;
	}
	return 0;
}

