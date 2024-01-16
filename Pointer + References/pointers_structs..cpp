//pointers to a structs
#include<iostream>
using namespace std;
//structs
struct abc
{
	int integer;
	float fp;
};



int main()
{
	//object to a struct
struct abc xyz; //xyz is object of struct abc

//accessing elements of abc from xyz
xyz.integer = 12;
xyz.fp = 12.02;

cout<<"before: "<<xyz.integer<<endl;
cout<<"before: "<<xyz.fp<<endl;

//pointer to struct
struct abc* abcptr;
cout<<abcptr<<endl;

abcptr = xyz;//pointer is pointing to xyz now
cout<<"pointer to xyz: "<<abcptr<<endl;
abcptr->integer = 20;

}