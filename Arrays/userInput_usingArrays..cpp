//this program will take numbers from user and store them in an array as well display total nos entered by the user.
#include<iostream>
using namespace std;
int main()
{
	int i,z = 0;
	int nos[100];
	
	
	while(i<100 && i != -1 )
	{
		cout<<"enter nos upto 100 (-1 to end Input): "<<endl;
	    cin>>i;
		nos[z] = i;
		z++;
	}
	cout<<"total nos entered by user is: "<<z-1;
}