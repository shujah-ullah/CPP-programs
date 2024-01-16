#include <iostream>
#include <string.h>
using namespace std;

    // class
class Student 
{
private:
char std_id[20];
char vac_name[10];
int age;
int num_dose;

public:
Student();
Student(char students_id[],char Vacine[],int AGE,int Dose);

void  setName(char student_id[]){
    strcpy(std_id,student_id );

 }
 void  setVaccine(char Vaccine[]){
    strcpy(vac_name,Vaccine);
    
 }
 
 void  setAge(int Age){
    age=Age;
    
 }
 
  void  setDose(int dose){
    num_dose=dose;
    
 }


void getName(){

	cout<<"Student ID :"<<" " <<std_id<<endl;
        
        }

void getVaccine(){

	cout<<"Vaccination:"<<" " <<vac_name<<endl;
        
        }

        void getAge(){

	cout<<"Age:"<<" " <<age<<endl;
        
        }
void getDose(){

	cout<<"Vaccination Doses:"<<" " <<num_dose<<endl;
        
        }


//  setVaccine(const char[])
//  setAge(int)
//  setDose(int)
//  getName()
//  getVaccine();
//  getAge();
//  getDose();

friend void display(Student std1, Student std2);

};


Student::Student(){
    // for std1
       strcpy(std_id,"BC210401956" ); // First Student ID
       strcpy(vac_name,"Sinovac" ); // Vaccaine Name
 age=20;
 num_dose=1;

// cout<< std_id<<vac_name<< age<<num_dose<<endl;
}

Student::Student(char students_id[],char Vacine[],int AGE,int Dose){
     strcpy(std_id,students_id);
       strcpy(vac_name,Vacine );
 age=AGE;
 num_dose=Dose;

// cout<< std_id<<vac_name<< age<<num_dose<<endl;
}


void display(Student std1, Student std2){
     cout<<"  "<<endl;
cout<<"Printing std1 object values using display()...."<<endl;
    	cout<<"Student ID :"<<" " <<std1.std_id<<endl;
cout<<"Vaccination:"<<" " <<std1.vac_name<<endl;
cout<<"Age:"<<" " <<std1.age<<endl;
	cout<<"Vaccination Doses:"<<" " <<std1.num_dose<<endl;
        cout<<"  "<<endl;
cout<<"Printing std2 object values using display()...."<<endl;
    	cout<<"Student ID :"<<" " <<std2.std_id<<endl;
cout<<"Vaccination:"<<" " <<std2.vac_name<<endl;
cout<<"Age:"<<" " <<std2.age<<endl;
	cout<<"Vaccination Doses:"<<" " <<std2.num_dose<<endl;
    cout<<"  "<<endl;
}

int main(){

// for std2
char student_2_id[20] ="BC123456789"; // Second Student ID
char student_2_vaccaine[10]="Sinopharm"; // Vaccaine Name
int student_2_age=21;
int student_2_dose=2;

Student std1,std2(student_2_id,student_2_vaccaine,student_2_age,student_2_dose),std3;
display(std1,std2);
// for std3
char id[20] ="MC123456789;"; // Third Student ID
char vaccaine_name[10]="Moderna"; // Vaccaine Name
int age=22;
int dose=3;
// setter
std3.setName(id);
std3.setVaccine(vaccaine_name);
std3.setAge(age);
std3.setDose(dose);
// getter
 cout<<"  "<<endl;
cout<<"Printing std3 object values using getter() method"<<endl;
std3.getName();
std3.getVaccine();
std3.getAge();
std3.getDose();
 cout<<"  "<<endl;

    return 0;
}
