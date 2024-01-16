#include<iostream>
using namespace std;
class test
{

	private:
		int x;
	public:
			//default constructor
		test(){
			cout<<"default constructor is called: "<<endl;
			x =1;}
			
			//parametrized constructor.
		test(int x)
		{
			this->x = x;
			cout<<"paramerized constructor called: "<<endl;
		}
		
		
	
		
		
};
int main()
{
	test objects[10]; //default constructor will be called for 10 objects now.
	cout<<"------------------------------------------------------------"<<endl;
	//initaializing array objects.
	test obj[5] ={1,2,3,4,5}; //parametrized constructor will be called 
	cout<<"------------------------------------------------------------"<<endl;
	//creating 4 objects while initializing 2 of them.
	test obj4[4]={1,2};
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}