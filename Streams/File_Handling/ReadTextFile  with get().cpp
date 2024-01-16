//program to read text file as input
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
	char c;
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
	while((c=myfile.get()) != EOF) 
	{
		cout<<c;
	}
	myfile.close();
	return 0;

}