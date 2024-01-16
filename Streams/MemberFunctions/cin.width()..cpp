#include<iostream>
#include<iomanip>
using namespace std;

void fieldWidth()
{

int widthValue = 4;
char sentence[10];

cout<<"Enter a sentence"<<endl;
cin.width(5);//allows to take 5 characters at a time i.e. including null.

cout.fill('*');
while(cin>>sentence) //as long as cin transfers data to array sentence.
{
	cout.width(widthValue);
	cout<<sentence<<endl;
	cin.width(5);
	
}}
int main()
{
	fieldWidth();
}