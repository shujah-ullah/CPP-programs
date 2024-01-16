// program to calculate average age by Dynamic Memory Allocation method.
#include<iostream>
//#include<stdlib.h>
//#include<string.h>
using namespace std;
int main(){
	int numStuds , totalage , i , *iptr ,*sptr;
	cout<<"how many students in your class? "<<endl;
	cin>>numStuds;
	// get starting adress of memory allocated from heap in pointer iptr
	iptr = (int *)malloc(numStuds * sizeof(int));
	// Check for succes of memory allocation
	if(iptr == NULL)
	{
		cout<<"unable to allocate memory for  "<<numStuds<<"students\n";
		return 1; // non zero return is usually used to indicate an error
	}
	sptr = iptr; //sptr is used for pointer manipulation/arithematic so that iptr did remain same.
	totalage = 0;
	// loop to get ages of students.
	for (int i=1 ; i<=numStuds; i++){
		cout<<"enter age of student "<<i<<" = ";
		cin>> *sptr;
		totalage = totalage + *sptr;
		sptr++;
	}
	//calculating average
	cout<<"average age of students is "<<totalage/numStuds<<endl;
	//now free the allocated memory that was point by the iptr
	free(iptr);
	sptr = NULL;
}