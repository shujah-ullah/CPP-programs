#include<iostream>
using namespace std;
int main(){
	//declaring and initializing an array.
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	int array2[20];
	int i;
	int x;
	//accessing array elements.
	cout<<"element at index 9 is: "<<array[9]<<endl;
	for (i=0;i<=5;i++)
	{
		cout<<"enter any number and i will save it in an array: "<<endl;
		cin>> array2[i];
	}
	
	
	cout<<"enter index number to access element: "<<endl;
	cin>>x;
	cout<<"element at index "<<x<<" is: "<<array2[x];
}