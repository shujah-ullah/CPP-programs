//program to flip rows 
#include<iostream>
using namespace std;

const int MaxRows =3;
const int MaxCol =3;
// functions declaration: prototype
int ReadArray(int Array[][MaxCol]);
int DisplayArray(int Array[][MaxCol]);
int FlippedArrayRow(int Array[][MaxCol]);
int FlippedArrayCol(int Array[][MaxCol]);

int main(){
	int Array[MaxRows][MaxCol];
	//function call
	ReadArray(Array);
	
	cout<<"\n\n"<<  "original matrix is" <<"\n";
	cout<<DisplayArray(Array);//func call
	
	cout<<"\n\n"<<"flipped matrix rows are:"<<"\n";
	cout<<FlippedArrayRow(Array);//func call
		
	cout<<"\n\n"<<"flipped matrix Columns are:"<<"\n";
	cout<<FlippedArrayCol(Array);//func call
	
}   
   //Read Array function Definition
	int ReadArray(int Array[][MaxCol] ){
	 
	
	
		for(int rows = 0; rows < MaxRows; rows++){
			for (int col = 0;col<MaxCol; col++){
				cout <<"enter  "<<rows<<" , "<<col<<"element";
				cin>>Array[rows][col];
			}
			"\n";
		}
	}
	//function definition display array
	int DisplayArray(int Array[][MaxCol]){
	
	for(int rows = 0;rows<MaxRows;rows++){
		for(int col = 0;col<MaxCol;col++){
		
		cout<<Array[rows][col]<<"\t";}
		cout<<"\n";
	}
	return 0;
	}
	//function definition flipped array rows
	int FlippedArrayRow(int Array[][MaxCol]){
		
		for(int rows = MaxRows -1;rows>=0;rows--)
		{
			for(int col=0; col<MaxCol; col++){
				
				cout<<Array[rows][col]<<"\t";
			}
			cout<<"\n";
		} return 0;
	}
	// function definition flip array columns
		int FlippedArrayCol(int Array[][MaxCol]){
		
		for(int rows = 0;rows<MaxRows;rows++)
		{
			for(int col=MaxCol-1; col>=0; col--){
				
				cout<<Array[rows][col]<<"\t";
			}
			cout<<"\n";
		} return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	