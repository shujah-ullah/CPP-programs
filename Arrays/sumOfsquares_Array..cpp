// program will take values by user and store them in an array, will calculate sum of squares of all values and display result.
#include<iostream>
using namespace std;
int main()
{
	int i;
	int sumOfsquares = 0;
	int a[10];
	
	cout <<"Enter 10 numbers one by one: "<<endl;
	
	for (i=0; i<10;i++)
	{
		cin >> a[i];
		sumOfsquares += a[i] * a[i];
		
	}
	cout<<"sum of squares is: "<<sumOfsquares<<endl;
}