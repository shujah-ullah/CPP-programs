//Random access files
//open a file as Write/OUT.
//write string "this is an apple"
//change string to the "this is a car "

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int position;
	//open file as write.
	ofstream outfile;
	outfile.open("InputFile.txt",ios::out);
	//clear contents of file if any/
	outfile.flush();
	//write string to the file.
	outfile.write("this is an apple\n",17);
	//modify our string to this is a car by jumping file pointer to position 9 
	position = outfile.tellp();
	cout<<"end of file position is: "<<position<<endl;
	//set position of file pointer
	outfile.seekp(position-9);
	//write string after this position
	outfile.write(" car   \n",10);
return 0;	
}