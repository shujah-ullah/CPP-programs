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
};
int main()
{
	B b;
	b.fun();
}