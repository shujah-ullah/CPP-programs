// program that prompt user for guessing a character stored in a variable in 5 attempts and congratulate if guess is true.
#include<iostream>
using namespace std;
main(){
	
	
	char input;
	int counter = 0;
	while( counter <= 5 && input != 'd')
	{
	
	cout<< "guess a character between a-z that I have: "<<endl;
	cin>> input;
	
	if (input == 'd')
	{
		cout<< "congratulations you entered a right character: "<<endl;
	
	}
	else
	{
	cout<<"sorry try another attempt: "<<endl;
	counter++;	
	}
	
}


	
	
}