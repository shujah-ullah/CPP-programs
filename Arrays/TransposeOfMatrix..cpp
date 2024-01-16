//  program to Transpose a matrix
#include <iostream>
using namespace std;
const int ArraySize = 3;

int ReadArray(int Array[][ArraySize]);
int DisplayArray(int Array[][ArraySize]);
int TransposedArray(int Array[][ArraySize]);



int main()
{
	int Array[ArraySize][ArraySize]; 
	
	//function call
	ReadArray(Array);
	
	cout<<"\n\n"<<  "original matrix is" <<"\n";
	cout<<DisplayArray(Array);//func call
	
	//transposed matrix
	cout<<TransposedArray(Array);//func call
	
	//display transposed array
	cout<<"\n\n"<<  "transposed matrix is" <<"\n";
	cout<<DisplayArray(Array);//func call
	
	
}
//Read Array function Definition
	int ReadArray(int Array[][ArraySize] ){
	 
	
	
		for(int rows = 0; rows < ArraySize; rows++){
			for (int col = 0;col<ArraySize; col++){
				cout <<"enter  "<<rows<<" , "<<col<<"  element:  ";
				cin>>Array[rows][col];
			}
			"\n";
		}return 0;
	}
	//function definition display array
	int DisplayArray(int Array[][ArraySize]){
	
	for(int rows = 0;rows<ArraySize;rows++){
		for(int col = 0;col<ArraySize;col++){
		
		cout<<Array[rows][col]<<"\t";}
		cout<<"\n";
	}
	return 0;
	}
	//function definition of Transpose of Array.
	int TransposedArray(int Array[][ArraySize])
	{
		for (int row = 0 ; row < ArraySize; row++){
			for(int col = row;  col< ArraySize; col++)
		{
			//swap columns of array with rows of array
			int Temp = Array[row][col];
			Array[row][col] = Array[col][row];
			Array[col][row] = Temp;
			
		} 
		}return 0;
	}
	
	
	
	
	
	
	
	
	