//preprocessor command #include.
/*preprocessor runs before compiler #include replaces code of file mentioned after #include.
there is diffrence bw preprocessor and linker linker runs after complier and links library files (.lib) containing function definitions
to the object file to produce executable file. */

#include<iostream>
#include "C:\Users\LENOVO\Documents\CPP_Programs\typedef.h"
using namespace std;
int main()
{
	length a = 4;
	cout <<a;
}