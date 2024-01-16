#include<iostream>
using namespace std;
 class test 
 {
 	private: 
 	   int n;
 	
 	public:
 		//constructor.
 		test(int a)
 		{
 			n = a;
		 }
		//operator overloading function
		//left = function call.
		//right = Argument.
		test operator+(test t2){
			//create temp object
			test temp(0);
			temp.n = n + t2.n; // n = n of t1 bc function call is for t1 .
			return temp;
		}	
		
		//for - operator.
		test operator-(test t2){
			//create temp object
			test temp(0);
			temp.n = n - t2.n; // n = n of t1 bc function call is for t1 .
			return temp;
		}	
		
		void print(){
			cout<<"sum: "<<n<<endl;
		}
		
		//for / operator.
	test operator/(test t2){
			//create temp object
			test temp(0);
			temp.n = n / t2.n; // n = n of t1 bc function call is for t1 .
			return temp;
		}	
 		
 };
 
 int main()
 {
 	test t1(4);
 	test t2(2);
 	test sum(0);
 	sum = t1/t2;
 	sum.print();
 	
 	
 	
 }