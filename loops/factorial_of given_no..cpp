// program to calculate factorial of given number by the user.
#include<iostream>
using namespace std;
main()
{ 
 int factorial = 1;
 int number = 1;
 
 cout<< "enter the number of which you want to get factorial: "<< endl;
 cin >> number;
 
 while ( number>1 ){
 	
 	factorial = factorial*number;
 	number= number-1;
 	
 }
	
cout << "Factorial of given number is: "<<factorial <<endl;
	
}