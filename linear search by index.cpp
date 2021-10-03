#include<iostream>
using namespace std;


int linear_search(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<"Index is :";
			return i;
		}
		
	}
	return -1;
}
int main()
{
	int n;
	cout<<"Enter size of array:"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		cout<<endl;
	}
	
	int key;
	cout<<"Enter key number you want to search:"<<endl;
	cin>>key;
	
	cout<<linear_search(arr,n,key);
}
