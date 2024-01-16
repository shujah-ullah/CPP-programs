#include<iostream>
#define SUM(a, b) (a)+(b)
#define PRODUCT(a, b) (a)*(b)
#define DIV(a, b) (a)/(b)
using namespace std;

int main()
{
	cout <<SUM (2, 4)<<endl;
	cout <<PRODUCT (2, 4)<<endl;
	cout <<DIV (4, 2)<<endl;
	#undef SUM
	#undef PRODUCT
	#undef DIV
}