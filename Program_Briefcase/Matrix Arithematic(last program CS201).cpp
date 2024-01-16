/*
matrix  | A0,0	A0,1 	A0,2|			
	
		|A1,0	A1,1	A1,2|
						 
		|A2,0	A2,1	A2,2|
		
indexing above matrix in an array

		Array[A0,0	A0,1  A0,2	A1,0  A1,1  A1,2	A2,0  A2,1  A2,2]
		
		..............formula..................
		
		linearIndex = (row * numberOfColumns) + col;
		
		i.e.
		to access A0,2  ....linearIndex = (0 * 3) + 2 = 2th element in our Array.
		to access A1,2 .....linear index = (1 * 3) + 3 = 6th element in our Array.
		
		iterating over Array elements
		for (int row =0 ;row < numberofRows; row++) 
		{
			for(columns =0; columns<NoofColumns; column++)
			{
				Array[rows][columns]; *********row will be incremented after columns iteration upto N columns.
				column++;
			}
			row++;
			}
*/

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip>
using namespace std;

class Matrix
{
	private:
		int numRows, numCol;
		double **elements; //we have one * for rows of matrix and other for each element of the row.
		
	public:
		Matrix(int , int);  //default constructor
		Matrix(const  Matrix& ); //copy constructor
		~Matrix(); //destructor
		
		int getRows(void) const; //func return no of Rows
		int getCols(void) const; //func return no of col
		const Matrix & input(istream &is = cin); //read matrix from keyboard 
		//const Matrix & input(iftream &is ); //read matrix from file
		void output(ostream & os =cout) const; //prints matrix
		//void output(ofstream &os =cout) const; //prints matrix
		//Functions for Arithematic manipulations on Matrices.
		const Matrix& transpose(void); //transpose of matrix
		const Matrix & operator = (const Matrix &m);
		
		Matrix operator +  (Matrix &m) const;
		Matrix operator +(double d) const;
		const Matrix & operator += (Matrix &m);
		friend Matrix operator + (double d,Matrix &m);
		
		Matrix operator -(Matrix &m) const;
		Matrix operator -(double d) const;
		const Matrix & operator -= (Matrix &m);
		friend Matrix operator - (double d,Matrix &m);
		
		Matrix operator*(const Matrix & m); 
 		Matrix operator * (double d) const; 
 		friend Matrix operator * (const double d, const Matrix& m);
		
		Matrix operator/(const double d); 
 		friend ostream & operator << ( ostream & , Matrix & ); 
 		friend istream & operator >> ( istream & , Matrix & ); 
		friend ofstream & operator << ( ofstream & , Matrix & ); 
 		friend ifstream & operator >> ( ifstream & , Matrix & ); 
 		
 		void display();
			
	};
//..........Defining Default constructor..............................................................

Matrix :: Matrix (int row, int col)
{
	numRows = row ;
	numCol = col;
	//Allocating memory for the elements of the matrix.
	elements = new double* [numRows]; //allocating pointers of type double for row elements.
	
	//allocating memory for inidividual elements of each row.
	for (int i=0; i<numRows; i++)
	{
		elements[i] = new double [numCol];
		
	//initialize array to zero.
		for(int j=0; j<numCol; j++)
		{
			elements [i][j] = 0;
		}
	}
}
//............Defining COPY constructor...................................................................

Matrix :: Matrix (const Matrix &obj)
{
	numRows = obj.numRows;
	numCol = obj.numCol;
	//Allocating memory for the elements of the matrix.
	elements = new double* [numRows]; //allocating pointers of type double for row elements.
	
	//allocating memory for inidividual elements of each row.
	for (int i=0; i<numRows; i++)
	{
		elements[i] = new double [numCol];
		
	//initialize array to zero.
		for(int j=0; j<numCol; j++)
		{
			elements [i][j] = obj.elements[i][j];
		}
	}
} 
//...........DESTRUCTOR........................................................................

Matrix::~Matrix(void)
{
	delete[] elements;
}

int Matrix :: getRows() const
{
	return numRows;
}

int Matrix::getCols() const
{
	return numCol;
}
//...........defining output function..................................................................

void Matrix::output(ostream &os) const
{    
   //put space in  first row
	for(int j=0; j<numCol; j++)
		os<<setw(5)<<" ";
	os<<"\n";
    // traverse over elements of matrix and print.
	for (int i=0; i<numRows; i++)
	{
		os<<(char)179; //vertical bars
		for(int j=0; j<numCol; j++){
			os<<"  "<<elements[i][j]<<"  ";	
		}
		os<<(char)179; //vertical bars
		cout<<endl;
	}
}
//............Defining INPUT function......................................................................

const Matrix & Matrix::input(istream &is)
{
	cout<<"input matrix size: "<<numRows <<"rows by "<<numCol <<"Columns\n";
	for(int i=0; i<numRows; i++){
	
	cout<<"please enter "<<numCol<<" values seperated by spaces for row no."<<i+1<<":";
	for (int j=0; j<numCol;j++){
		cin>>elements[i][j];
	}
}
return *this;
}
//............................TRANSPOSE Of Matrix................................
const Matrix & Matrix::transpose()
{
	// for square matrix.
	if (numRows == numCol)
	{
		double temp; // temperory variable to store value at given index
		for(int i =0; i<numRows; i++){
			for(int j=i+1; j<numCol; j++){
				//reverse indexes and swap values at original and reversed index with each other.
				temp = elements[i][j];
				elements[i][j] = elements [j][i];
				elements[j][i] = temp;
			}
		}
		
	}
	// for Rectangular matrix.
	else
	{
		Matrix temp(numCol, numRows); //matrix obj of size col*rows of original matrix.
		for(int i=0; i<numRows; i++)
		{
			for(int j=0; j<numCol; j++)
			{
				//pick elements at index i,j and place at index j,i of temp array.
				temp.elements[j][i] = elements[i][j];	
			}
			
		}
//*this = temp;
}
return *this;
}
//.......................................= operator overloading................................./
const Matrix & Matrix :: operator = (const Matrix & m)
{	
	if (&m != this) //checking for self Assignment.
	{
		if(numRows != m.numRows || numCol != m.numCol)
		{
			delete[]elements;
			//allocate space for Matrix object m
			elements = new double* [m.numRows];
			for (int i=0 ;i<numRows ;i++){
				elements [i] = new double [m.numCol];
			}
		}
	}
	numRows = m.numRows;
	numCol = m.numCol;
	for(int i=0; i<numRows; i++){
		for(int j=0; j<numCol; j++)
		{
			elements [i][j] = m.elements [i][j];
		}
	}
	return *this;
}
//..................................................Matrix to Matrix Addition A+B........................................................//
Matrix Matrix ::operator + (Matrix &m) const
{
	//check for conformability
	if(numRows == m.numRows && numCol == m.numCol){
	
	Matrix temp(m);
	for(int i=0; i < numRows; i++){
		for(int j=0; j<numCol; j++){
			temp.elements[i][j] += elements[i][j];
		}
	}
	return temp;
}
}

//.....................................................A+=B..........................................................//
const Matrix &Matrix :: operator += (Matrix &m)
{
	*this = *this + m;
	return *this;
}

//...........................................SCALAR ADDITION (Matrix + variable M+4)..............................................//
Matrix Matrix :: operator + (double d) const
{
	Matrix temp(*this);
	for(int i=0; i<numRows ;i++){
		for(int j=0; j<numCol; j++){
			temp.elements[i][j] += d;
		}
	}
	return temp;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> - operators overloading>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//..................................................Matrix to Matrix Addition A-B........................................................//

Matrix Matrix ::operator - (Matrix &m) const
{
	//check for conformability
	if(numRows == m.numRows && numCol == m.numCol){
	
	Matrix temp(*this);
	for(int i=0; i < numRows; i++){
		for(int j=0; j<numCol; j++){
			temp.elements[i][j] -= m.elements[i][j];
		}
	}
	return temp;
}
}

//.....................................................A - = B..........................................................//
const Matrix &Matrix :: operator -= (Matrix &m)
{
	*this = *this - m;
	return *this;
}

//...........................................SCALAR ADDITION (Matrix - variable M+4)..............................................//
Matrix Matrix :: operator - (double d) const
{
	Matrix temp(*this);
	for(int i=0; i<numRows ;i++){
		for(int j=0; j<numCol; j++){
			temp.elements[i][j] -= d;
		}
	}
	return temp;
}

//......................................... Multipication function A*B.............................................//
Matrix Matrix :: operator*(const Matrix & m)
{	
	//declaring Matrix object of size equal to No of Rows of first * No of columns of second Matrix
	Matrix temp(numRows, m.numCol);  //default constructor call
	//check for conformability ...See Matrix multiplication Rule.
	if(numCol == m.numRows)
	{
		for(int i=0; i<numRows; i++){
			for(int j=0; j < m.numCol; j++)
			{
				temp.elements[i][j] = 0;
				for(int k = 0; k < numCol; k++){
					temp.elements[i][j] += elements[i][k] * m.elements[k][j];
				}
			}
		}
	}
	return temp;
}

//.................................overloading << .............................//
ofstream & operator << (ofstream & os, Matrix & m)
{
	m.output(os); //writing Matrix object m to the file stream class object named os
	return os; 
}

ostream & operator << (ostream & os, Matrix & m)
{
	m.output(); 
	return os; 
}

//.................................overloading << .............................//
ifstream & operator >> (ifstream & is, Matrix & m)
{
	m.input(is); //Reading Matrix object m from the file stream class object named is
	return is; 
}
istream & operator >> (istream & is, Matrix & m)
{
	m.input(is); 
	return is; 
}

int main()
{
	//declaring matrices
	Matrix m(2,2), n(2,2);
	//getting input from keyboard.
	cout<<"taking input for m(4,5) and n(5,4)\n";
	m.input();
	n.input();
	
	m.output();
	n.output();
	
	cout<<"............................................Transposed Matrix is................................."<<endl;
	cout<<" M = "; m.output(); cout<< "M transpose is ";
	m.transpose();
	m.output();
	 
	
	cout<<".............................................calling M= M+N......................................"<<endl;
	cout<<"M = ";  m.output(); cout<<"N = ";  n.output();  cout <<"M + N = ";
	m += n;
	m.output();
	
	cout<<"..............................................M = m + 4..............................................."<<endl;
	cout<<"M = ";  m.output(); cout<<"M + 4 = ";
	m = m+4;
	m.output();
	
	
	cout<<".............................................calling M= M-N......................................"<<endl;
	cout<<"M = ";  m.output(); cout<<"N = ";  n.output();  cout <<"M - N = ";
	m -= n;
	m.output();
	
	cout<<"..............................................M = m-4..............................................."<<endl;
	cout<<"M = ";  m.output(); cout <<"M - 4 = ";
	m = m-4;
	m.output();
	
	cout<<".............................................calling C = M*N......................................"<<endl;
	cout<<"M = ";  m.output(); cout<<"N = ";  n.output();  cout <<"M * N = ";
	Matrix c(5,5);
	c = m*n;
	c.output();
	
	cout<<" Writing into the file matrix.txt \n";
	ofstream fo("Matrix.txt");
	fo<<c;
	fo.close();
	
	cout<<" Reading from file matrix.txt \n";
	ifstream fi("Matrix.txt");
	fi>>c;
	
	fi.close();
	
	cout<<c;
	system("PAUSE");
	return 0;
	
	
	
	
	
	
	
	
}