//Functions overloading with string.
#include<iostream>
#include<string.h>
using namespace std;
	//declare overloading function
	inline stringCopy(char* dest, const char* src)
	{
		strcpy(dest, src);//call from string.h
	 } 
	 
	 	//declare overloading function
	inline stringCopy(char* dest, char* src, int len)
	{
		strncpy(dest, src,  len);//call from string.h
	 } 
	 char stringa[20], stringb[20];
	 
    int main()
    {
	
	//call stringCopy for strcpy
	stringCopy(stringa ,"that");
	
	//call stringCopy for strncpy
	stringCopy(stringb , "hy there, whatsup!",20);
	
	cout<<"stringa: "<<stringa <<endl<<"stringb: "<<stringb<<endl;
}