//program to write into a text file.
#include<iostream>//iostream is a template for I/O processing i.e cin, cout ,cerr, clog.
#include<fstream> //fstream is a template for file I/O processing
using namespace std;

int main()
{
	char data= {"Written by put() which copies all characters including tabs and new lines"};
	char c;
	
	ofstream myfile; //handle input file.
	//open file named myfile.txt
	//creates new text file and write data in it. 
	myfile.open("OutputFile.txt", ios::out); // out flag from ios class allow us to write in a file.
	//check for whether file has opened successfully or not.
	if(!myfile)
	{
		cout<<"error opening file: "<<endl;
		exit(1);
		
	}
	//writing string stored in data variable to the MyOutFile.txt
	while((c = cin.get(data)) != EOF)
	{
		myfile.put(data);
	}
	myfile.close();
	return 0;

}