#include<iostream>
using namespace std;
class Complex
{
	private: 
		int real;
		int imag;
		
	public:
		Complex(int real ,int imag)
		{
			this->real = real;
		 	this->imag = imag;
		}
		Complex operator+(Complex C2)
		{
			Complex tmp(0 , 0);
			tmp.real = real + C2.real;
			tmp.imag = imag + C2.imag;
			return tmp;
		}
		void display()
		{
			cout<<real<<"  "<<imag;
		}
};

int main()
{
	Complex C1(10,12);
	Complex C2 (3,5);
	Complex C3(0,0);
	
	C3 = C1+C2;
	C3.display();
}








