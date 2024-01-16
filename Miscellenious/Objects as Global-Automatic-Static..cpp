//Class Objects a local global and static scopes.
#include<iostream>
using namespace std;
class test
{	private : char name;
	public:
	test(char c) 
	{	
		 this->name = c;
		cout<<"inside constructor of: "<<name<<endl;
	}
	
	~test()
	{
		cout<<"inside destructor of: "<<name<<endl;
	}
};

//defining Global object 
test A('A');

//defining Automatic object inside function.
void f1()
{
	test C('C');
}

//defining Static object inside function declared as static member.
void f2()
{
	static test D('D');
}

int main()
{
//defining Automatic object inside main
test B('B');
//calling f1
f1();
//calling f2
f2();
	
	
}






























