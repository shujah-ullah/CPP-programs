//STREAM Manuipulators in Cpp
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void floatPointPrecision()
{
	double root = sqrt(2.0);
	int places;
	cout<<fixed;
	//cout.precision()
	 for(places=0; places<=10; places++)
	 {
	 	cout.precision(places);
	 	cout<<root<<endl;
	 }
	 //setprecision
	 for(places=0; places<=10; places++)
	 {
	 	cout<<setprecision(places);
	 	cout<<root<<endl;
	 }
}
void fieldWidth()
{
	int x = 10000;
	cout<<x<<endl;
	//left justified with set width 10.
	cout<<showbase<<setw(10)<<x<<endl;
	cout<<left<<setw(10)<<x<<endl; //left padding
	cout<<right<<setw(10)<<x<<endl; //right padding
	cout<<internal<<setw(10)<<hex<<x<<endl; 
	cout<<left<<setw(10)<<x<<endl; 
	//filling white spaces of width with *.
	cout<<right;
	cout.fill('*'); 
	cout<<setw(10)<<dec<<x<<endl;
	cout<<"----------------------"<<endl;
	cout<<left<<setw(10)<<setfill('$')<<x<<endl;
	cout<<internal<<setw(10)<<setfill('$')<<hex<< x<<endl;
	
}

























int main(){
	//floatPointPrecision();
	fieldWidth();
}