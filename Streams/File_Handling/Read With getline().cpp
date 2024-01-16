//program to read text file as input
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
	char c[100];
	ifstream myfile; //handle input file.
	//open file named myfile.txt
	myfile.open("InputFile.txt");
	//check for whether file has opened successfully or not.
	if(!myfile)
	{
		cout<<"error opening file: "<<endl;
		exit(1);
		
	}
	//read the whole file word by word untill end of file.
	while(!myfile.eof()) 
	{
		myfile.getline(c,50); //getline is more effiecient then get as it reads whole line i.e specified by size 50 at once 
							  //while get() reads character by character.
		cout<<c<<endl;
	}
	myfile.close();
	return 0;

}