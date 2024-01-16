//program to read text file as input
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char Name[50];
	char Depart[40];
	char Salary[40];
	
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
		myfile>>Name>>Depart>>Salary;
		cout<<Name<<'\t'<<Depart<<'\t'<<Salary<<endl;
	}
	myfile.close();
	return 0;

}