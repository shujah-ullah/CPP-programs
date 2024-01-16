/* below is program that pass struct to fun by three ways.
#1. pass by value: disadvantage of doing this is that new copy of struct is made and send to function as we have large sized variables in struct
i.e char[1000] so it will be load on memory/stack to load copy untill function returns back.

#2. pass by reference: we can do so by using pointers as in ptrfun() or using refernce as in reffun() advantage of doing so is that struct
doesnt copies on stack but original struct is send to function.
disadvantage of pass by reference: our function can know access to variables of struct and can make changes in it but our problem is 
that we have to pass struct (big data structure) to our function without copying our struct and also function has readonly access to 
variables of struct.

SOLUTION: Pass by reference with const keyword. */

#include<iostream>
using namespace std;
struct big {
	int serno;
	char text[1000]; //lots of chars	
}
//initialize struct variables
bo = {123,"a very big char"};

//Three functions that have struct as a parameter.
void valfun(big v1); //v1 is object/element to struct big.
void ptrfun(const big *p1);//pass by reference with readonly.
void reffun(const big &r1);//pass by reference with readonly.
int main()
{
	//function calls.
	valfun(bo);
	ptrfun(&bo);
	reffun(bo);
}
void valfun(big v1)
{
	cout<<v1.serno<<endl;
	cout<<v1.text<<endl;
}

void ptrfun(const big *p1)
{
	cout<<p1->serno<<endl;
	cout<<p1->text<<endl;
}

void reffun(const big &r1)
{
	cout<<r1.serno<<endl;
	cout<<r1.text<<endl;
	//r1.serno = 345;  cant assign bc all variables of struct 'big' is readonly within reffun(), this is done by const keyword.
	
}