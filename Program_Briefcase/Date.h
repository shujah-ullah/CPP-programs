
//Date.h date class is defined here.
#include<iostream>
using namespace std;          
class Date{
		private: 
		 	int day, year,month;
		 	int daysOfMonth(Date d);
		 	static const int daysInMonth[]; //arrays containing 12 months days.
		 	bool leapYear(int); // tells whether its leap year or not.
		 	
		public:
			Date(int d=1 ,int m=1, int y =1900);//constructor with default arguments.
			void setDate(int, int, int);//set date with given arguments.
			void display();
			//operators prototypes.
			Date operator ++();//preincrement opertor used as ++ date object.
			Date operator +(int );//+operator used a date1+5.
		 	
};
//implementation of date class.
//initializing the no of days, 0 for month 0.
const int Date ::daysInMonth[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
//Displayiing the function on  the screen.
void Date::display()
{
		cout <<"\nDate:"<<day<<"-"<<month<<"-"<<year<<endl;
		
}
//constructor of date class.
Date::Date(int d,int m, int y)
{
	setDate(d,m,y);
}
//setting date as given arguments.
void Date::setDate(int d, int m, int y)
{
	year = y;
	//if month is wrong i.e. exceeds from 12 then set it to 1.
	if(month < 1 && month >12)
		month = 1;
	else
		month = m;
	//if day is wrong i.e. greater than days of current month set it to 1.
	if (month == 2 && leapYear(y))
		if (d>=1 && d<=29)
		  day = d;
		else
		  day = 1;
	else
	  if(d>=1 && d <= daysInMonth[month])
	  	day = d;
	  else
	    day = 1;
}

//function to return NO of days in a month.
int Date::daysOfMonth(Date d)
{
	if (d.month ==2 && leapYear(d.year))//if leap year then feb is 29.
		return 29;
	else
		return daysInMonth[d.month];
}

//testing the year is leap or not.
bool Date::leapYear(int y)
{
	if ((y%400 == 0) || (y%100 != 0 && y%4 == 0))
		return true;
	else
	return false;
	
}
//opearator overloaded for date used as date1 +5.
Date Date::operator+(int numberOfDays)
{
	for(int i = 1;i<=numberOfDays;i++)
	{
		++(*this);//calling preincrement operator.
	}
	return *this;
}
//preincrement operator
Date Date::operator ++()
 {
 	if(day == daysOfMonth(*this) && month ==12)//end year
	 {
	 	day = 1;
	 	month = 1;
	 	++year;
	 }
	else if(day == daysOfMonth(*this))//end of month.
		{
			day = 1;
			++month;
		}
	else //not last day of month.
		{
			day++;
		}
 }
















