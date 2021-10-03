#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter character for finding vowel and consonant:"<<endl;
	cin>>c;
	
	if(c >='a' || c<='z' || c>='A' || c<='Z')
	{
		if(c=='a'||c=='A'||c=='i'||c=='I'||c=='o' ||c=='O' ||c=='u' ||c=='U' ||c=='e' ||c=='E')
		{
			cout<<"Vowel"<<endl;
		}
		else
		cout<<"Consonant"<<endl;
	}
	else
	cout<<"Enter valid character:"<<endl;
	return 0;
}
