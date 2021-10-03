#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int rows,col;
	cout<<"Enter rows and col which you want to nake pattern!!"<<endl;
	cin>>rows>>col;
	for(i=1;i<=rows;i++)
	{
		for(int j=1;j<col;j++)
		{
			if(i>=1&&i<=rows)
			{
				cout<<"*";
			}
			else
			{
			cout<<" ";
			}
		}
		cout<<endl;
	}
}
