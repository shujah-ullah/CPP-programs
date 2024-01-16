#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//for Row 1 to n
	for(int i =1; i<= n;i++){
		//for space
		for(int j=1; j<=n-i;j++){
			cout<<" ";}
		//for * 
		for (int k=1; k<=2*i-1;k++){
			cout<<"*";
		}
		
		cout<<endl;
	}
		//for Row n to 1
	for(int i =n; i>1;i--){
		//for space
		for(int j=1; j<=n-i;j++){
			cout<<" ";}
		//for * 
		for (int k=1; k<=2*i-1;k++){
			cout<<"*";
		}
		
		cout<<endl;
	}
}