// program to  calculate circle area with macros:
#include <iostream >
#define PI 3.14159
//define a macro for calcultaing area of any circle by taking radius as an Input.
#define square(X)(PI*X*X)
using namespace std;
int main(){
	float radius;
	cout<<"radius of circle? : "<<endl;
	cin>>radius;
	//pass radius as a argument to macro square.
	cout<<"Area of given circle is: "<<square(radius)<<endl; //notice that macro is saving us from a function call
	/*macros prevent from stack over flow while function do */
}