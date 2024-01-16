//A sample program showing the use of friend function, 
//which access the private data members of two classes. 
#include<iostream>
using namespace std;
//prototype of myclass 2 so that compiler dont put error when used in class 1.
class myclass2;

//definition of class1.
class myclass1

{     //friend function prototype
	friend void addboth(myclass1 ,myclass2);
	
	public:
		//default constructor.
		myclass1()
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
	    
	    
class myclass2

{     //friend function prototype
	friend void addboth(myclass1 ,myclass2);
	
	public:
		//default constructor.
		myclass2()
		{
			topsecret = 200;
		}
		void display()
		{
			cout<<"top secret: "<<topsecret<<endl;		
		}                                      
	
	private: 
	    int topsecret;	
};


//defining friend function outside of class.
void addboth (myclass1 x, myclass2 y)
{
	cout<<x.topsecret + y.topsecret;
}
int main()
{
	myclass1 x;
	x.display();
	
	myclass2 y;
	y.display();
	//passing objects to friend function.
	cout<<"after adding both: "<<endl;
	addboth(x , y);


	
}
