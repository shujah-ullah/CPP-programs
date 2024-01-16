#include<iostream>
void abc (int a);
using namespace std;
int main(){
int h;
cin>>h;
abc(h);

}
void abc(int a){
	// base case
	if(a == 0){
		return;
	}
	// recursvive calls .
	abc (a-1);
	for ( int i =0; i<a ;i++){
		cout<<"#";
	}
	cout<<endl;
}