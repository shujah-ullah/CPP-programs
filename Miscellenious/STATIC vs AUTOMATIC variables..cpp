//program showing STATIC vs AUTOMATIC variables.
#include<iostream>
using namespace std;
//function definition using static variables.
void f1()
{
	static int i  = 0; //static variables should be initialized right when they declare.
	i++;
	cout<<"Static variable i: "<<i<<endl;
}
//function definition using Automatic variables
void f2()
{
	int i  = 0; //static variables should be initialized right when they declare.
	i++;
	cout<<"Automatic variable i: "<<i<<endl;
}
int main()
{
	cout<<"calling function with static variables: "<<endl;
	for (int i=0; i<10; i++)
	f1();
	
	cout<<"calling function with Automatic variables: "<<endl;
	for(int i=0; i<10; i++)
	f2();
	
	
}