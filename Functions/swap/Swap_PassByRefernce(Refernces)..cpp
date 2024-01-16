//swap using pass by refernces.
//refernce operator.
#include<iostream>
using namespace std;
//prototype swap recieves x and y and convert into adresses of x and y using &.
void swap(int &x , int &y);
int main()
{
	int x = 2;
	int y= 4;
	cout<<"before swap call: "<<endl<<"x is "<<x<<"     "<<"y is "<<y<<endl;
	//call swap by passing values in x and y;
	swap(x , y);
	cout<<"after swap call: "<<endl<<"x is "<<x<<"     "<<"y is "<<y<<endl;
}
void swap(int &x, int &y)
{
	int tmp;
	tmp =x;
	x =y;
	y=tmp;
}