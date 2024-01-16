//OBJECTS inside Classes.
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Constructor of A is called: "<<endl;
		}
		
		
		~A()
		{
			cout<<"Destructor of A is called: "<<endl;
		}
};

class B
{
	private: 
		A a; //instance of class A as a private data member of class B
	public:
		B()
		{
			cout<<"Constructor of B is called: "<<endl;
		}
		
		
		~B()
		{
			cout<<"Destructor of B is called: "<<endl;
		}
	
};
int main()
{
	B obj; //object of B
	
	/*                     */
	
	
	
	
	
	
	
	
	
}