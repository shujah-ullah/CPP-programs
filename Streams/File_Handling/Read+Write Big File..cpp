//Reading qnd writing a big file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char str[10000];
	int position;
	int i;
	char c;
	int z = 0;
	ifstream inputfile;
	ofstream outputfile;
	inputfile.open("Bigfile.txt",ios::in);
	outputfile.open("BigOutFile.txt",ios::out);
	
	inputfile.seekg(0,ios::end); //move to the end of file.
	position = inputfile.tellg();//get the position.
	inputfile.seekg(0,ios::beg); //go to the start of input file.
	outputfile.flush();
	
	for( i =0 ;i<position/10000 ;i++)
	{
		inputfile.read(str,10000); //read chunks of 100000 bytes per iteration
		outputfile.write(str,10000); //write chunks of 100000 bytes per iteration
    }
    //or we can do with get function as under

	/*while(( c=inputfile.get()) != EOF) 
	{
		outputfile<<c;
		
		z=z+1;
    }
	cout<<"total calls to get functions are: "<<z;*/
	

	inputfile.read(str, position-(i*10000)); //i*10000 = total bytes already read.
	outputfile.write(str, position-(i*10000));
	inputfile.close();
	outputfile.close();
	return 0;
}