//swap using pass by value. 

#include<iostream>
using namespace std;
void swap(int , int);
int main(){
	
	int x =2;
	int y =4;
	//passing values of x and y as arguments.
	cout<<"before calling swap: "<<endl<<"x is: "<<x<< "     "<<"y is: "<<y<<endl;
	swap(x , y);
	
	cout<<"after calling swap: "<<endl<<"x is: "<<x<<"     "<<"y is: "<<y<<endl;
	
}
//recieving values of x and y..
void swap(int x ,int y)
{
	
	int temp;
	temp =x; 
	x = y; 
	y=temp; 
	
}

