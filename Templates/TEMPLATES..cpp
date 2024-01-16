//Templates
#include<iostream>
using namespace std;
//defining template
template <class A> //template of data type class
//declare a class
class Student
{
	public:
		Student(A s) //A is generic data type i.e. it will convert itself according to data type passed by object.
		{
			cout<<s<<"  template adjusted according to datatype sent: "<<endl;
		}
		
};

//template made for specific data type.
template <>
class Student<char> //whenever char is passed to Student class this version of class will accept that 
{
	public:
		Student(char s)
		{
			cout<<s <<" character template here: "<<endl;
		}
};
 int main()
{
	//Student<int> s(786);
	Student<float> s1(3.14);
	Student<char> s2('c');
	
	
}