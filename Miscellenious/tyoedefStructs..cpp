//type def to structs.
#include<iostream>
#include<string.h>
using namespace std;

typedef struct {
	int rollno;
	char name[7];
	int age ;
}STUDENT;

int main()
{
	STUDENT s1; //STUDENT is data type of struct.
	strcpy(s1.name , "shujah");
	s1.rollno =20;
	s1.age = 26;
},