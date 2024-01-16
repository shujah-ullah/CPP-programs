#include <iostream>
using namespace std;


int main()
{
	int n, result;
	cin>>n;
	//SHIFT LEFT
	result = n << 1;
	cout<<"after shift left operator (multiplied by 2): "<<result<<endl;
	cout<<"after shift left again: "<<(result<<1)<<endl;
	//SHIFT RIGHT
	result = n >> 1;
	cout<<"after shift right operator: (divided by 2) "<< result<<endl;
	cout<<"after shift left again: "<<(result>>1)<<endl;
}