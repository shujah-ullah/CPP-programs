//pointers and arrays.
#include<iostream>
using namespace std;
int main(){
	int arr[]={20,30,40};
	cout<<*arr<<endl;
	
	//arr++; //illegal bc *arr is a static pointer.
	cout<<*(arr+1)<<endl;//legal *(arr+1) is a new pointer. 
	
	int *ptr = arr;
	cout<<"traverse through *ptr"<<endl;
    for(int i=0; i<3; i++){
    	cout<<*ptr<<endl;
    	ptr++;
	}
}