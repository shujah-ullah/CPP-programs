#include <iostream>
using namespace std;

int main(){
	int n =10;
	cout<<"value in n:"<<n<<endl;
	//& (ampersand operator) is used with a varible to give adress of variable in memory.
	cout<<"adress of n: "<< &n<<endl; 
	
	// pointer is a variable represented as *p is used to store address of a variale.
	int *p  = &n;
	cout << "value in pointer: "<<p<<endl;
	//dereference a pointer, goto adress stored in p and print value at that adress
	cout<<"dereferencing p: "<<*p<<endl;
	// changing value of n using pointer
	*p = 20;
	cout<<"value of n changed by pointer: "<<n<<endl;
	 
	//POINTER ARITHEMATIC.
	p++;
	cout<<"value of p after incrementing is: "<<p<<endl;
	
}