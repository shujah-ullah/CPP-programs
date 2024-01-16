//Assignment operator overloading
/* Error checking for self assignment*/
\
#include <iostream>
#include<string.h>
using namespace std;
class String
{
	private: char *buf;
	public:
		String(); //constructors
		String (const char *s)
		{
			buf = new char[30];
			strcpy (buf,s);
			
		}
		//getting length of string 
		int length() const
		{
			return strlen(buf);
		}
		void display()
		{
			cout <<buf<<endl;
		}
		
		 String& operator=(const String &other); //&other is reference to object2.
};
    String& String::operator=(const String &other)
   
 {
 	if (this == &other) //if addresses of both object are at same location. this = pointer to obj1 , other = adress of obj2.
 		{
 			return *this; //if same then do nothing and return.
		}
	int length;
	length = other.length();
	delete buf; //this buf is of object 1.
	buf = new char[length+1];
	strcpy(buf,other.buf);
	
	return *this; //returning obj2 for multiple assignments.
	
 }


int main()
{
String obj1("my string 1");
String obj2("my string 2");
String obj3("my string 3");
cout<<"before: "<<endl;
obj1.display();
obj2.display();
obj3.display();
//multiple assignments.
obj3 = obj2 = obj1;
cout<<"after obj2 = obj1: "<<endl;
obj1.display();
obj2.display();
obj3.display();


return 0;	
}