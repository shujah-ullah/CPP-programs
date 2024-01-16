// 2D Array 
#include <iostream>
using namespace std;
int main(){
	int maxRows = 3;
	int maxCol = 3;
	//declare 3*3 array
	int array[3][3];
	
	// loop for rows
	for(int rows = 0; rows <= maxRows; rows++){
		
		//loop for columns
		for (int col = 0; col <= maxCol; col++){
			
			cout<<"\n"<<"Enter"<<rows<<","<<col<<"elements";
			cin >>array[rows][col];
			
			
		}
	}
	for( int i = 0; i<=3; i++){
		
		for ( int j=0; j<=3;j++){
			cout<<array[i][j];
			
		}
      
        cout<<"\n";
	}
	
 
   	
}