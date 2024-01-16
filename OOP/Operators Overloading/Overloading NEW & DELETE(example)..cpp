//overloading new and delete operators.
#include <iostream>
#include<stdlib.h>
#include<stdexcept>
using namespace std;
class Student
{
	private:
		char* name;
		int age;
	public:
		Student(char* name ,int age)
		{
			this->name = name;
			this->age = age;
		}
		void diplay()
		{
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
		}
		
		void* operator new(size_t size)
		{
			void *p;
			p = malloc(size);
			cout<<"overloaded with new size is: "<<size<<endl;
			//checking for whether memory has been allocated successfulyy or not
			if(!p) // if no memory available malloc() will return NULL.
			{
				//throw an exception
				bad_alloc ba;
				throw ba;
			}
			return p;
		}
		
		//overloading delete operator.
		void operator delete(void *p)
		{
			cout <<"overloading delete opeartor: "<<endl;
			free(p);
		}
		
	};

int main()
{
	//creating objects of class Student.
	Student *obj1;
	try{
	
	obj1 = new Student("Shujah",26);
		}

		
	catch(bad_alloc b)
		{
			cout <<b.what()<<endl;
		}
	obj1->diplay();
	delete obj1;

	return 0;
}