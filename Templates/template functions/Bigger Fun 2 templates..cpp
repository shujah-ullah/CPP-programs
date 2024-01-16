//comparing size of two diffrent data types.
#include<iostream>
using namespace std;

template <class T, class U> // we should adjust argument as generic datatype like class.

void bigger(T val1, U val2)
{
	if (val1 > val2)
		
			cout<<val1<<" is bigger"<<endl;
	else 
		 cout<<val2 << " is bigger"<<endl;
}
int main()
{
	float x =1.101;
	int y =1;
	bigger (x , y);// comparing float to int
	bigger('c', 6); //comparing char to int.
	
	
	
	
	
	
	
	
	
	
	
	
}