#include <iostream>
using namespace std;
//define class.
class Square
{
	int size;
	
	public:
		void set_size(int s);
		int get_size();
		int Area();
};

//define utility functions outside class scope using scope resolution operator.
void Square::set_size(int s) //SETTER
{
	size = s;
}

int Square::get_size()  //GETTER
{
	return size;
}

int Square::Area() //Area function.
{
	return size*size;
}
int main()
{
	//creating object of our class
	Square s1;
	s1.set_size(10);
	cout<<"Area of squre with width "<<s1.get_size()<<" is: "<<s1.Area()<<endl;
}