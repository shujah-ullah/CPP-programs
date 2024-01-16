//operator overloading on complex number class(UDT).
#include<iostream>
using namespace std;

class Complex {
	private:
		int real , imag;
	public:
		Complex() //Default constructor.
		{
			real = 0;
			imag = 0;
		}
		Complex(int r = 0 , int i = 0) //parametrized constructor.
		{
			real =r;
			imag = i;
		}
		
		void print(){
			cout<<real<<" r, "<<imag<<" i"<<endl;
		}
		
		//function for operator  overloading on Complex.
		Complex operator +(Complex c)
		{
			Complex temp(0); //temp object of class complex.
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
};
int main()
{    //object 1 of class complex.
	Complex c1(2,2);
	Complex c2(2,8);
	Complex c3(0); //default constructor will called for c3.
	
	c3 = c1+c2; //c1.add(c2).
	c3.print();
	return 0;
}