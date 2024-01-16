/*#include<iostream>
using namespace std;

int main()
{
	int x [3] = {1,2,3};
	
	for (int i =0; i<15; i++)
	{
		cout<<x[i]<<endl;
	}
}*/
#include<iostream>
using namespace std;
class array;{

	private:
		int *arr;
		int length;
	public:
		//constructor.
		array(int len)
		{
			if (len>0){
			
			length = len;
			//declaring array of size len.
			arr = new int[len];
			arr = 0;
					}
					
			else
				length = 0;
				arr = 0;
		}
		//overloadiing subscript [] operator.
		int array operator [] (int index)
		{
			if (index>0 && index < length)
			return arr[i];
			else 
 		{ 
		 cout << "Error: index out of range.\n"; 
		 return dummy; 
 		}
		}
		// ------------ Destructor 
		~array() 
		{ 
 			delete arr; 
		}		 
};
int main()
{
	IntArray numbers( 10 ); 
 int i; 
 for( i = 0; i < 10; i ++ )
 numbers[i] = i; // Use numbers[i] as lvalue 
 for( i = 0; i < 10; i++ ) 
 cout << numbers[i] << '\n'
 
 
 
 
	return 0;
}