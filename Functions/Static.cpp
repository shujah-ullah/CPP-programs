#include<iostream>
using namespace std;
int Avg(int data)
{
	static int total = 0;
	static int count = 0;
	int average;
	count++;
	total += data;
	average = total / count;
	return average;
}
int main()
{
	int n = 1;
	int x;
	while( n > 0)
	{
		cout<<"enter no for average: 0 to terminate"<<endl;
		cin>>n;                            
		x = Avg(n);
		cout<<"new average is: "<<x<<endl;
	}  
}