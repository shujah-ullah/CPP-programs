#include<iostream>
#include <stdlib.h>
using namespace std;
int x;
int frequency1;
int frequency2;
int frequency3;
int frequency4;
int frequency5;
int frequency6;
int main()

{
	
	
	for (x = 1;x<=60000000;x++)
	{
	
	int face = 1+(rand()%6);
	

switch(face)
{ 
  case 1:
  	++frequency1;
  	break;
  	
  case 2:
  	++frequency2;
  	break;  
	  
   case 3:
  	++frequency3;
  	break; 	
  	
   case 4:
  	++frequency4;
  	break; 
  	
   case 5:
  	++frequency5;
  	break; 
  	
  	case 6:
  	++frequency6;
  	break; 
}
}
cout<<"Face"<<"\t"<<"Frequency"<<endl;
cout<<"1"<<"\t"<<frequency1<<endl;
cout<<"2"<<"\t"<<frequency2<<endl;
cout<<"3"<<"\t"<<frequency3<<endl;
cout<<"4"<<"\t"<<frequency4<<endl;
cout<<"5"<<"\t"<<frequency5<<endl;
cout<<"6"<<"\t"<<frequency6<<endl;

}



















