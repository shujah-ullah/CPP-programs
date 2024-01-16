/*polymorphism means that different objects can behave in different 
ways for the same message function, sender of a message does not 
need to know the exact class of receiver.*/
#include<iostream>
/*In the example below fun( ) is function with same name implemented in base as well derived classes
when we invoke fun () by using base class pointer to derived class object it most derived method 
fun() sould be executed , which is done by declaring fun() as virtual function in base class.*/ 
using namespace std;
class Base
{
	public:
		virtual void fun()
		{
			cout<<"Base class here "<<endl;
		}
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