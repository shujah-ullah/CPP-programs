//functions overloading
#include<iostream>
using namespace std; 
void print( int i){
	cout<<"value of int is: "<< i<<endl;
}
void print(float f){
	cout<<"value of float is: "<<f<<endl;
}
void print(char* s){
	cout<<"value of char is: "<<s<<endl;
}
int main(){
	int i = 10;
	float f= 2.05;
	char* s= "test string: ";
	print(i);
	print(f);
	print(s);
}