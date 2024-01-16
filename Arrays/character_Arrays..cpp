#include <iostream>
using namespace std;
int main()
{
	char name[100];
	cout<<"enter your name: "<<endl;
	cin>>name;
	
	for (int i=0;i<=100;i++)
	{
		cout<<name[i];
		if(name[i] == '\0')
		break;
	}
	
}