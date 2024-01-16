#include <iostream>
using namespace std;
// function declaration 
double raiseTopow (double,int); 

int main()
{
	int power;
	double number;
	 cout << "please enter number : "<<endl;
	 cin>>number;
	 
	 cout<< " please enter power to the number in real format : "<<endl;
	 cin>>power;
	 
	// function call 
	cout<< number<<" raise to power: "<<power<<" is: "<<raiseTopow(number,power)<<endl;	
	
}
//function definition 
double raiseTopow ( double number, int power)
{
	int i;
	double result = 1.0;
	for(i=1 ; i<=power;i++)
	{
		result = result*number;
	}
	return (result);
	
	
	
 } 