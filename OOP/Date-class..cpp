#include<iostream>
using namespace std;
class Date
{
	public://public methods
		void show();
		void setdate(int i);
		void setmonth(int i);
		void setyear(int i);
	private://private data members
	    int date , month , year;
	    
};
void Date::show()
{
	cout<<"date is: "<<date<<"-"<<month<<"-"<<year<<endl;
}
void Date::setdate(int i){
	date = i;
	
}
void Date::setmonth(int i){
	month = i;
	
}
void Date::setyear(int i){
	year = i;
}
int main(){
	
	//declaring instances/objects of class Date
	Date date1;
	// values for date1 objects
	date1.setdate(18);
	date1.setmonth(8);
	date1.setyear(2022);
	date1.show();
	
	//declaring instances/objects of class Date
	Date date2;
	// values for date1 objects
	date2.setdate(19);
	date2.setmonth(8);
	date2.setyear(2022);
	date2.show();
	
	//declaring instances/objects of class Date
	Date date3;
	// values for date1 objects
	date3.setdate(20);
	date3.setmonth(8);
	date3.setyear(2022);
	date3.show();
	//date3.year = 50; //cant use this bc Date::year is private and cant accessed from main.
	
	
	
	
	
	
	
	
	
	
	
	
	
}