//program to read text file myfile.txt change its contents and save changes into a new file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char Name[50];
	char Depart[40];
	char Salary[40];
	
	ifstream myfile; //handle input file.
	ofstream newfile;
	//open file named myfile.txt
	myfile.open("InputFile.txt");
	newfile.open("NewOutputFile.txt");
	//check for whether file has opened successfully or not.
	if(!(myfile&&newfile))
	{
		cout<<"error opening file: "<<endl;
		exit(1);
		
	}
	//read the whole file word by word untill end of file.
	while(!myfile.eof())
	{
		myfile>>Name>>Depart>>Salary;
		
		
		newfile<<Name<<'\t'<<Depart<<'\t'<<Salary<<endl;
	}
	myfile.close();
	newfile.close();
}