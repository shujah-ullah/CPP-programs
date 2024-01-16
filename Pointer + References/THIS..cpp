#include<iostream>
using namespace std;
class one
{
	int a;
	public:
		void getdata(int a)
		{
			this->a = a;
		}
		void display()
		{
			cout<<"simple: "<<a<<endl;
			cout<<"this->"<<this->a<<endl;
			cout<<"(*this). :"<<(*this).a<<endl;
		}
};
int main()
{
	one d;
	d.getdata(2);
	d.display();
	
}