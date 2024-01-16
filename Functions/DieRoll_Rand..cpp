#include<iostream>
#include <stdlib.h>
using namespace std;
int x;
int main()

{
	int DieRoll = 0;
	
	for (x = 1;x<=20;x++)
	{
	cout<<"\t"<< 1+(rand()%6);
	if(x%5 == 0)
	{
		puts("");
	}
    }
}