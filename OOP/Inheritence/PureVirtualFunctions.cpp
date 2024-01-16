/*polymorphism means that different objects can behave in different 
ways for the same message function, sender of a message does not 
need to know the exact class of receiver.*/
#include<iostream>

using namespace std;
//base is abstract class as it has virtual function equal to zero.
class Base
{
	public:
		virtual void fun() = 0;
		//if virtual function inside base class is intialized as zero i.e. not implemented
	   //then its called Pure Virtual.
	   //unique property: it enforces all derived classes to have virtual function implemented
	  // whereas Virtual function doesnt do so. 
};
class Derived1: public Base
{
	public:
		void fun()
		{
			cout<<"derived1 class here: "<<endl;
		}
		
};
class Derived2: public Base
{
	public:
		void fun()
		{
			cout<<"derived2 class here: "<<endl;
		}
		
};
int main()
{
	//base class pointer pointing on derived class object
	Base *ptr1 = new Derived1;
	//base class pointer pointing on derived class object should invoke most recent derived class method
	ptr1->fun();
}