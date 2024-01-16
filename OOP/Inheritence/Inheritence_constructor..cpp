#include<iostream>
using namespace std;
class Base 
{
	public:
		Base()
		{
			cout<<"base constructor: "<<endl;
		}
		~Base()
		{
			cout<<"base destructor: "<<endl;
		}
};
class Derived :public Base 
{
	public:
		Derived()
		{
			cout<<"derived constructor: "<<endl;
		}
		~Derived()
		{
			cout<<"derived destructor: "<<endl;
		}
};
int main()
{
	Derived obj;
}


