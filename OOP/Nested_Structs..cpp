#include <iostream>
using namespace std;
struct unit
{
	int feet;
	float inches;
};
struct measure
{
	unit length;
	unit width;
};
int main(){
	measure m1;
	m1.length.feet = 12;
	m1.length.inches = 144.0;
	
	m1.width.feet = 16;
	m1.width.inches = 191.99;
	cout<<m1.length.feet<<endl;
	cout<<m1.length.inches;
}