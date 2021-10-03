#include<iostream>
using namespace std;
int main()
{
	int number,last_digit,reverse=0;
	cout<<"Enter number u want to reverse :"<<endl;
	cin>>number;
	while(number>0)
	{
		last_digit = number % 10;
		reverse= reverse*10 + last_digit;
		number=number/10;
	}
	cout<<reverse;
}
