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
		int display()
		{
			cout <<buf<<endl;
		}
		void operator = (const String &other); //&other is reference to object2.
};
   void String::operator=(const String &other)
   
 {
 	if (this == &other) //if addresses of both object are at same location. this = pointer to obj1 , other = adress of obj2.
 		{
 			return;
		}
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
