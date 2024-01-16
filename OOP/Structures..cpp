//structure is a colection of heterogenious datatypes.
#include <iostream>
using namespace std;
struct headphone
{
	int price;
	char model;
};
//passing structures to functions
void show(headphone);

int main(){
	//struct element 1
	headphone Audionic;
	Audionic.price = 2000;
	Audionic.model = 'B';
	//struct element 2
	headphone Xiomi = {2500,'A'};
	cout<<Xiomi.price<<endl;
	cout<<Xiomi.model<<endl;
	//calling function
	show(Audionic);
}
// function with structure as an argument
void show(headphone Audionic)
{
	cout<<Audionic.price<<endl;
	cout<<Audionic.model<<endl;
	cout<<"adress of price: "<<&Audionic.price<<endl;
	cout<<"adress of model: "<<&Audionic.model<<endl;
	
}