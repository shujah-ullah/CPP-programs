//Swap as  a template
#include<iostream>
using namespace std;
int main()
{
	int x =3;
	int y=9;
	cout<<"before swap call: "<<"x is "<< x <<",  y is  "<< y <<endl;
	swap(x,y);
	cout<<"after swap call: "<<"x is "<< x <<",  y is  "<< y <<endl;
}
template <class T> // we should adjust argument as generic datatype like class.
void swap(T &x, T &y)
{
	T tmp;
	tmp =x;
	x=y;
	y=tmp;
}