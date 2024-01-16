/* Following program demonstrates the new operator. This program has the problem of 
memory leak because delete operator is not called for the allocated memory. */ 
#include <iostream>
using namespace std;
class Date
{
	public:
	//calling parameterless constructor.
	Date()
	{
		cout<<"parameter less constructor is called: "<<endl;
		month = day = year = 0; 
	}
	//parametrized constructor assigns values to private data members.
	Date(int day ,int month ,int year)
	{
		cout<<"paramterized constructor is called: "<<endl;
		
		this->day = day; //whenever object calls constructor function "this" pointer returns to that obj.
		                 //through which it can access to private data members of class.
		this->month = month;
		
		this->year = year; //assigns value passed to constructor by object to data member "year" through "this" pointer.
	}
	//destructor of Date class.
	~Date()
	{
		cout<<"destructor is called: "<<endl;
	}
	int show()
	{
		cout<<"date is: "<<day<<"-"<<month<<"-"<<year<<endl;
	}
	
	private:
		int day ,month ,year;
};

int main()
{

 Date *dptr; // Declared a pointer dptr to MyPointer class object 
//Whenever new operator is called to create an object, the constructor is also called for that object.
dptr = new Date [1]; // Created 10 objects of MyDate and assigned the 
// pointer to the first object to dptr pointer variable. 
delete [] dptr; // Deleted (freed) the assigned memory to the objects 
Date dt (25 , 8 ,2022);
dt.show();

}





