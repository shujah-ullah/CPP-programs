#include<iostream>
using namespace std;
int square(int); //function declaration
int main()
{
	int number;
	int result;
	cout<<"Enter any number for square: "<<endl;
	cin>> number;
	// function call
	result = square(number);
	cout << "square of "<<number<<" is: "<<result;
	
	
}
// function definition here.
int square(int number)
{
return (number*number);
}