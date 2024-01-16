//progarm to calculate Avg age and Avg GPA ,GRADE and student with max GPA.
//using student structure.
#include<iostream>
using namespace std;
int main()
{
//declaration of student structure
struct student
{
	char name[30];
	char course[15];
	int age;
	float GPA;
	
};
    const int noOfstudents = 2;
    student students[noOfstudents]; //array to struct student.
    int totalAge, index, averageAge;
    float totalGPA, maxGPA,averageGPA;
    
    //getting input from user and initializing data members of structure
    for (int i=0; i<noOfstudents ;i++)
    {
    	cout<<"Enter data for student #: "<< i+1 <<endl;
    	cout<<"student's name: ";
    	cin>>students[i].name;
    	
    	cout<<"student's course: ";
    	cin>>students[i].course;
    	
    	cout<<"student's Age: ";
    	cin>>students[i].age;
    	
    	cout<<"student's GPA: ";
    	cin>>students[i].GPA;
    	
    	
	}
	maxGPA = 0;
	//calculating total age, total GPA and max GPA
	for ( int j =0 ; j< noOfstudents ; j++)
	{
		totalAge = totalAge + students[j].age;
		totalGPA = totalGPA + students[j].GPA;
		
	    //determining the max GPA and storing its index
	    if ( students[j].GPA > maxGPA)
	    {
	    	maxGPA = students[j].GPA;
	    	index = j;
		}
		
	}
	
	
	//calculating averge age
		averageAge = totalAge/noOfstudents;
		cout<<"average age is: "<<averageAge<<endl;
		cout<<"total GPA of all students: "<<totalGPA<<endl;
		
		//calculating average GPA.
		averageGPA = totalGPA / noOfstudents;
		cout<<"average GPA is: "<<averageGPA<<endl;
		cout<<"student with max GPA is: "<<students[index].name<<endl;
	    
	    //determining the GRADE of class.
	    if(averageGPA > 4)
	    {
	    	cout<<"wrong grades have been entered "<<endl;
	    	
		}
		else if( averageGPA == 4)
		{
			cout<<"average GRADE of class is: A "<<endl;
		}
		else if( averageGPA >3)
		{
			cout<<"average GRADE of class is: B "<<endl;
		}
		else if( averageGPA >2)
		{
			cout<<"average GRADE of class is: C "<<endl;
		}
		else 
		{
			cout<<"average GRADE of class is: F "<<endl;
		}
	
	
	
	
	
	
}