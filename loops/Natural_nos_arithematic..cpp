// program to calcuate sum, sum of squares, sum of cubes of natural numbers upper limit given by user.
#include<iostream>
using namespace std;
main(){
	
	int input ;
	int x = 1;
	int sum =0;
	int squares_sum = 0;
	int cubes_sum = 0;
	
	
	cout<< "Enter any number and i will calculate its sum, sum of squares and sum of cube: "<<endl;
	cin>>input;
	
	while( x <= input )
	{
		sum = sum + x;
		squares_sum += x*x;
		cubes_sum += x*x*x;
		x++;
		
		
	}


	cout<<"sum of natural numbers till "<<input<<" is: "<<sum<<endl;
	cout<<"sum of squares of numbers till "<<input<<" is: "<<squares_sum<<endl;
	cout<<"sum of cubes of numbers till "<<input<<" is: "<<cubes_sum<<endl;
	
}