//progarm using cin.getline() function
//getline() is a member function of cin object.
#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 80;
	char buffer[SIZE];
	
	cout<<"enter some text string: "<<endl;
	cin.getline(buffer,SIZE); //takes whole senetence including white spaces.
	
	cout<<"entered text is "<<endl<<buffer<<endl;
}