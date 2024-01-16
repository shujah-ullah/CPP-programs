//program to describe use of friend function.
#include<iostream>
using namespace std;
class myclass
{     //friend function prototype
	friend void increment(myclass* ,int);
	
	public:
		//default constructor.
		myclass()
		{
			topsecret = 100;
		}
		void display()
		{
			cout<<"top secret: "<<topsecret<<endl;
			
		}
	private: 
	    int topsecret;	
};

//defining friend function outside of class.
void increment (myclass* a, int i)
{
	a->topsecret += i;
}
int main()
{
	myclass x;
	x.display();
	//calling friend function. 
	increment(&x , 10);
	
	x.display();
	
	increment(&x , 10);
	
	x.display();
	
	
	
	
	
	
	
	
	
	
	
	
}
