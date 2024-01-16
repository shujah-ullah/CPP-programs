#include<iostream>
using namespace std;
int main()
{   int counter = 1;
	int amount = 0;
	char month[10];
	float country_tax;
	float state_tax;
	float total_sales;
	float total_tax;
    while(counter<2)

	{ 
	cout<< "enter total amount collected: "<<endl;
	cin>>amount;
	counter++;
	if (amount != -1){
	
	
	cout<<"enter name of month: "<<endl;
	cin>>month;
	cout<<"Total collections: $ "<<amount<<endl;
	country_tax = 0.05*amount;
	state_tax = 0.04*amount; 
	
	total_tax = country_tax + state_tax;
	total_sales = amount - total_tax;
	
	cout<<month<<": sales $:  "<<total_sales<<endl;
	cout<<month<<": country tax: "<<country_tax<<endl;
	cout<<month<<": state tax: "<<state_tax<<endl;
	cout<<month<<": total tax: "<<total_tax<<endl;}
	
	}

	
	
	
	
}