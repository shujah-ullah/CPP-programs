//program to read text file myfile.txt change its contents and save changes into a new file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
	char c;
	
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
	while((c=myfile.get()) != EOF)  
	{
		newfile.put(c); //put is better than << as it copies whole data including white spaces.
		
		
	}
	myfile.close();
	newfile.close();
}