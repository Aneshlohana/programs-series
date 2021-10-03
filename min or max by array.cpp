#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int minNo=INT_MIN;
	int maxNo=INT_MAX;
	int n;
	cout<<"enter n :numbers for array:"<<endl;
	cin>>n;
	int num[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>num[i];	
	}

	
	
	for(int i=0;i<n;i++)
	{
		maxNo=max(maxNo,num[i]);
		minNo=min(minNo,num[i]);
	}
	cout<<"This is the Max_number:"<<maxNo<<endl;
	cout<<"this is the Min_number:"<<minNo<<endl;
	
    return 0;
}
