//swap using pass by refernce 
//address of '&' operator + pointer*.
#include<iostream>
using namespace std;
void swap(int* , int*);
int main(){
	
	int x =2;
	int y =4;
	cout<<"before calling swap: "<<endl<<"x is: "<<x<<"    "<<"y is: "<<y<<endl;
	//passing adresses of x and y as arguments.
	swap(&x , &y);
	
	cout<<"after calling swap: "<<endl<<"x is: "<<x<<"    "<<"y is: "<<y<<endl;
	
}
//recieving addresses of x and y in pointers.
void swap(int* x ,int* y)
{
	
	int temp;
	temp =*x; //temp = adress of x.
	*x = *y; //address of x is now adress of y.
	*y=temp; //adress of y is now adress of x.
	
}

