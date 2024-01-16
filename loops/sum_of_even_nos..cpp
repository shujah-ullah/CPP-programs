// program to calculate sum of even numbers of given upper limit.s
#include <iostream>
using namespace std;
main(){
int upperlimit;
int number = 1;	
int sumE = 0;
int sumO = 0;
cout<< "enter the upper limit number: "<<endl;
cin>> upperlimit;

 while( number <= upperlimit  )
 {  /*we can also fliter even numbers by this expression without using % operator : if ((2*(number/2 ))==0)*/
 	if( (number % 2) == 0   ) // checking if number is even
 	{
 		 sumE = sumE+number;
		  
	 }
	else if( (number % 2) ==! 0   ) {
		
		sumO = sumO+number;
	}
 	number++;
}	
    cout<< "sum of even numbers from 0 to "<< upperlimit << " is: "<<sumE<<endl;
     cout<< "sum of odd numbers from 0 to "<< upperlimit << " is: "<<sumO<<endl;
	
}