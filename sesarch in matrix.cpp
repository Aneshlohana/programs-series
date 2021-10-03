#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter value of matrix:"<<endl;
	cin>>n>>m;
	int arr[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	int key;
	cin>>key;
	
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==key)
			{
				cout<<i<<" "<<j<<endl;
				flag=true;
			}
		}
	 } 
	 if(flag)
	 {
	 	cout<<"Key founded:"<<endl;
	 }
	 else
	 {
	 	cout<<"Key not founded:"<<endl;
	 }
}
