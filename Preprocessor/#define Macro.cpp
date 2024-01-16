//preprocessor commands #def #undef.
#include<iostream>
# define PI 3.14 //PI is macro preprocessor will replace PI with 3.14 everywhere in our source file.
using namespace std;
int main()
{
	int r = 2;
	float a;
	a = PI * r*r;
	cout<<a;
	#undef PI
}