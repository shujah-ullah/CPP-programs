//program that reads names and salaries from input txt file
//calculate total salary and outputs in output txt file.
#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{	
	const int max_chars =100;
	char data[max_chars];
	char *tokenptr;
	int salary = 0;
	int totalsalary = 0;
	ifstream infile;
	ofstream outfile;
	//open text file
	infile.open("SalaryInput.txt");
		//confirm file opening
		if(!infile)
		{
			cout<<"error opening input file: ";
			exit(1);
		}
		//Read whole file
		while(!infile.eof())
		{
			infile.getline(data,max_chars);
			//tokeninzing strings in data array
			tokenptr=strtok(data," "); //first argument = whole string, second arg = delimiter
			tokenptr=strtok(NULL," "); //2nd toke is salary 
			salary = atoi(tokenptr); //atoi() converts char to int.
			totalsalary+= salary;
		}	
		
	//open output file
	outfile.open("SalaryOutput.txt");
		//confirm opening of output file
		if(!outfile)
		{
			cout<<"error opening output file: ";
			exit(1);
		}
			//Write total salary in new file
		outfile<<"total salary is: "<<totalsalary;
		infile.close();
		outfile.close();
	
	
	return 0;
}