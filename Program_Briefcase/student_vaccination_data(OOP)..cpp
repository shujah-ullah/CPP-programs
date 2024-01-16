#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		char std_id[20];
		char vac_name[10];
		int age;
		int num_dose;
	
	public:
		Student();
		Student(char studentid[], char vaccine[], int age, int numberdose);
		friend void display(Student s1, Student s2);
};
Student::Student()
{
	strcpy(std_id,"bc210401956");
	strcpy(vac_name ,"sinopharm");
	age = 24;
	num_dose = 3;
	
}
Student::Student(char studentid[], char vaccine[], int age, int numberdose)
{
	strcpy(std_id , studentid);
	strcpy(vac_name, vaccine);
	age = age;
	num_dose = numberdose; 
}
void display(Student s1, Student s2)
{
	cout<<"student1 data is "<<endl;
	cout<<"student id: "<<s1.std_id<<endl;
	cout<<"vaccine: "<<s1.vac_name<<endl;
	cout<<"student age: "<<s1.age<<endl;
	cout<<"Doses taken: "<<s1.num_dose<<endl;
	cout<<"......................................................"<<endl;
	cout<<"student2 data is "<<endl;
	cout<<"student id: "<<s2.std_id<<endl;
	cout<<"vaccine: "<<s2.vac_name<<endl;
	cout<<"student age: "<<s2.age<<endl;
	cout<<"Doses taken: "<<s2.num_dose<<endl;
	
}
int main()
{	char std2_id [20] ="bc256212721";
	char std2_vac[10] = "sinovac";
	int std2_age = 30;
	int std2_dose = 2;
	Student s1;
	Student s2(std2_id,std2_vac,std2_age,std2_dose);
	display(s1,s2);
}