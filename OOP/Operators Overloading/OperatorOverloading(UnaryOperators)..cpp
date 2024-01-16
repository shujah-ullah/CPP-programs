//operators with user defined data types.
//unary operators overload.
#include<iostream>
using namespace std;

class Test
{
	private:
		int n;
		
	public:
	//default constructor
	   Test()
	   {
	   	n = 1;
	   }  
	// function for operator ovetrload on class datatype.
	
	//for prefix.
	void operator++(){
		++n;
	}
	//for postfix.
	void operator++(int){
		n++;
	}
	
	//for prefix.
	void operator--(){
		--n;
	}
	//for postfix.
	void operator--(int){
		n--;
	}
	
	void display(){
		cout<<"value of n is: "<<n<<endl;
	}
	
};

int main()
{
	Test t1 , t2;
	// ++t1; //cant do so bc '++' operator is not overloaded on class object but only on default datatypes.
	
	t1.display();
	++t1; //prefix
	t1.display();
	
	t1++; //postfix
	
	--t1; //prefix
	t1--; //postfix
}

