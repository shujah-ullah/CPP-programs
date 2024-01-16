#include<iostream>
using namespace std;
class Date
{
	private: 
	
	   int date , month , year;
	
	public:
		//Default constructor
		Date();
		
		//constructor with default arguments
		Date (int ,int ,int);

		void show();
		
		void setdate(int i, int j, int k);
};

//defining default constructor.
//setting the date to default date(simple constructor

Date::Date()
{
	date =1;
	month =1;
	year =1999;
}
//constructor with default argument (parametrized constructor)
Date::Date(int date, int month, int year =2022)
{
	date =date;
	month = month;
	year =year;
}

void Date::setdate(int i, int j, int k)
{
	date =i ;
	month =j;
	year = k;
}
void Date::show() {
	cout<<"date is: "<<date<<"-"<<month<<"-"<<year<<endl;
}

int main()
{
	//object1
	Date date1;
	date1.setdate(8,22,2022);
	date1.show();
	//obj 2
	Date date2;  // when no value is passed to date2 object it will initialize as default through default constructor.
	cout<<"default date is: "<<endl;
	date2.show();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}