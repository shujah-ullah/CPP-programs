//pointers to pointers.
#include <iostream>
using namespace std;
int main(){
	int a=10;
	int *p =&a;
	cout<<"*p: "<<*p<<endl;
	cout<<"address of a: "<<p<<endl;
	//pointer to pointer
	int **q =&p;
	//dereferncing one time
	cout<<"dereferencing *q: "<<*q<<endl;
	//derefrencing two times
	cout<<"dereferencing **q: "<<**q<<endl;
}