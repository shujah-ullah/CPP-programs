#include<iostream>
using namespace std;
class  A
{
	public:
		void fun()
		{
			cout<<"inherited";
		}
};
class B: public A
{
	public:
		void fun2()
		{
			cout<<"  inherited2 ";
		}
};
class C: public B
{
	
};
int main()
{
	C c;
	c.fun();
	c.fun2();
}