#include<iostream>
using namespace std;
  
int main() 
{
   int n;
   cout<<"Enter n: matrix :"<<endl;
   cin>>n;
   int A[n][n];
   
   cout<<"Enter elements of matrix:"<<endl;
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		cin>>A[i][j];
   		
	   }
   }
   for(int i=0; i<n; i++) 
   {

   for(int j=i; j<n; j++) 
   {
//swap
    int temp = A[i][j];
    A[i][j] = A[j][i];
    A[j][i] = temp;
   }
}
//print transpose
cout<<"Elements after transpose::"<<endl;
    for(int i=0; i<n; i++) 
	{
    for(int j=0 ;j<n; j++) 
	{
    cout << A[i][j] << " ";
    }
    cout << "\n";
}
    return 0;
}
