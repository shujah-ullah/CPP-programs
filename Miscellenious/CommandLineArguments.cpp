//Command line Arguments.

//passing arguments to main function through command line.
#include<iostream>
using namespace std;
//main is called by operating system ,we may pass arguments through command prompt (DOS).

int main(int argc, char *argv[] ) 
//argc = no of arguments passed by OS. //argv = array of pointers having adress of arguments passed.
{
	for (int i =0 ;i<= argc ;i++)
	{
		cout<<argv[i]<<endl;
	}
}