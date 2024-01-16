//classes inside classes.
#include<iostream>
using namespace std;
class Parent
{
	public: 
		string username;
		
		class Child
		{
			public:
				string name;
				int age;
		};
		//In case of child class create object right after that class.
		Child c;
		
		void display()
			{
				cout <<username<<endl;
				cout<< c.name<<endl; //by using class object of child class we can access its public members from parent class
				cout<< c.age<<endl;
			}
};
int main()
{
	Parent P;
	P.username = "shujah";
	P.display();
	P.c.name = "khan";
	P.c.age = 22; //Parent object >> Child object >>child members.
	P.display();
}