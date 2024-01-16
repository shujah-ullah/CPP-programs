#include<iostream>
using namespace std;
class Fraction
{
	private:
		int num;
		int den;
	public:
		Fraction(int n=0, int d=1);
		~Fraction();
		void display();
		add(const Fraction&);
		sub(const Fraction&);
			
};
void Fraction::display()
{
	cout<< num <<"/"<<den<<"\n";
}
Fraction::Fraction(int n, int d)
{
	num =n;
	if (d == 0)
		d = 1;
	den = d;
}
Fraction::~Fraction()
{	
}
Fraction::add(const Fraction&)
{
	num = this->num + num;
	den = this->den + den;
	cout <<num <<"/"<<den;
	
}
int main()
{
	Fraction f1(2,3);     //2/3
	Fraction f2(5,4);	 //5/4
	f1.display();
	f2.display();
	Fraction f3;
	f3 = f1.add(f2);
	f3.display();
	return 0;
}