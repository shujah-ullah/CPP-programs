// program that prompt user for guessing a character stored in a variable in 5 attempts and congratulate if guess is true.
#include<iostream>
using namespace std;
main(){
	
	
	char input ;
	int counter = 1;
	do
	{
	
	cout<< "guess a character I have: "<<endl;
	cin>> input;
	
	if (input == 'd')
	{
		cout<< "congratulations you entered a right character: "<<endl;
	
	}
	else
	{
	counter++;	
	}
	
}
while( counter <= 5 && input != 'd');


	
	
}