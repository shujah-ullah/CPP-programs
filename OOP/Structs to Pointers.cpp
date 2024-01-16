//program to access structures data members with pointers to structures.
#include<iostream>
using namespace std;
	//declaration of student structure
	struct student{
		char name[64];
		char course[100];
		int age;
		int year;
	};
int main()
{

	//initialize object s1.
	student s1 = {"shujah"," CS-201 Introduction to programming ",25,2022};
	
	student *sptr;
	//assigning a structure to pointer
	sptr = &s1;
	cout<<"accessing data members using * opertor"<<endl;
	cout<<"name: "<<(*sptr).name << endl;
	cout<<"course: "<<(*sptr).course << endl;
	cout<<"age: "<<(*sptr).age << endl;
	cout<<"year: "<<(*sptr).year << endl;
	
	cout<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"accessing data members using -> opertor"<<endl;
	cout<<"name: "<<sptr->name << endl;
	cout<<"course: "<<sptr->course << endl;
	cout<<"age: "<<sptr->age << endl;
	cout<<"year: "<<sptr->year << endl;
}