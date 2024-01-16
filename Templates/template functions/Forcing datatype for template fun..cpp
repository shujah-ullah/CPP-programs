//Forcing the template function for specific data type.
#include<iostream>
using namespace std;
template<class U, class V>
U reverse(V x) //reverse() have argument as V data type while return as U data type.
{
	return -x;
}

int main()
{
	float amount = -8.8;
	//forcing reverse function to take float type and return int type.
	cout<<reverse<double, int>(amount) << endl; 
	
	//forcing reverse function to take int type and return float type.
	cout<<reverse<int, double>(amount) << endl; 
	//forcing reverse function to take float type and return double type.
	cout<<reverse<double, double>(amount) << endl; 
	
	
}