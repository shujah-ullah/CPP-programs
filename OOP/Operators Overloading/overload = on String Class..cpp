//Assignment operator overloading on String class.
#include <iostream>
#include<string.h>
using namespace std;
class String
{
	private: char *buf;
	public:
		String(); //constructors
		String (const char *s) //copy constructor
		{
			buf = new char[30];
			strcpy (buf,s);
			
		}
		//getting length of string 
		int length() const
		{
			return strlen(buf);
		}
		int display()
		{
			cout <<buf<<endl;
		}
		void operator = (const String &other); //&other is reference to object2.
};
   void String::operator = (const String &other)
   
 {
	int length;
	length = other.length();
	delete buf; //this buf is of object 1.
	buf = new char[length+1];
	strcpy(buf,other.buf);
	
 }


int main()
{
String obj1("my string 1");
String obj2("my string 2");
cout<<"before: "<<endl;
obj1.display();
obj2.display();
obj2 = obj1;
cout<<"after obj2 = obj1: "<<endl;
obj1.display();
obj2.display();















return 0;	
}
