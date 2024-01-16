//comparing size of two inputs using templates
#include<iostream>
using namespace std;

template <class T> // we should adjust argument as generic datatype like class.

T bigger(T x, T y)
{
	T big;
	if(x>y)
	{
		big = x;
	}
	else
		big =y;
	
	return big;
}
int main()
{
	float x =9;
	float y=9.1;
	cout<<bigger(x,y)<<endl;
	
	char a = 'a';
	char b = 'b';
	cout<<bigger(a,b)<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
}