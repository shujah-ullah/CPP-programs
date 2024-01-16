//reading file in reverse order and save it in new file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
	char c;
	int startpos;
	ifstream myfile; //handle input file.
	ofstream otherfile;
	//open file named myfile.txt
	myfile.open("InputFile.txt",ios::in);
	otherfile.open("ReverseOrder.txt",ios::out);
	//check for whether file has opened successfully or not.
	if(!myfile&&otherfile)
	{
		cout<<"error opening file: "<<endl;
		exit(1);
		
	}
	//read the whole file word by word untill end of file.
	startpos = myfile.tellg();
	myfile.seekg(-1, ios::end); //move to the one position back to the EOF.
	while(myfile )
	{	
		cout << myfile.tellg() << endl;
		
		cout<<c;
		myfile.get(c);
		otherfile.put(c);
		myfile.seekg(-2,ios::cur);
		
		
	}
	myfile.close();
	return 0;

}