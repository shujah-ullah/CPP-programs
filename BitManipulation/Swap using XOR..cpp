#include <iostream>
using namespace std;


int main()
{
	int a, b;
	
	
	//swap using XOR witout temp
	cout<<"enter values for a , b for swap: "<<endl;
	cin>>a>>b;
	a =a^b;
	b = b^a;
	a = a^b;
	cout<< " a is: "<<a;
	cout<<"  b is: "<<b;
}