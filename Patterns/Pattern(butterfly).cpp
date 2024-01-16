#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//upper half
	for(int i =1; i<=n; i++){
		//printing stars at start
		for(int j=1; j<=i;j++){
			cout<<"*";
		}
		int space = 2*n-2*i;
		//printing spaces after stars
		for(int k =1; k<=space;k++){
			cout<<" ";
		}//printing stars at end. 
			for(int j=1; j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	//lower half
		for(int i =n; i>=1; i--){
		//printing stars at start
		for(int j=1; j<=i;j++){
			cout<<"*";
		}
		int space = 2*n-2*i;
		//printing spaces after stars
		for(int k =1; k<=space;k++){
			cout<<" ";
		}//printing stars at end. 
			for(int j=1; j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
}