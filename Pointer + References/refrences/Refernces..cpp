#include<iostream>
using namespace std;
int main(){

int i;
//address of i
cout<<&i <<endl;

//& and as reference.
int &j = i;
cout<<&j<<endl;
// j and i resides at same adress/location .(j is alias of i).
i =20;
cout<<"i is: "<<i<<endl;
cout<<"j is: "<<j<<endl;

//increment i.
i++;
cout<<"i after i++: "<<i<<endl;
cout<<"j after i++: "<<j<<endl;
}