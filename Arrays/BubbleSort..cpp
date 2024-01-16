//program for Bubble Sort
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"array size: "<<endl;
	cin >>n;
	int arr[n];
	//input array elements from user
	cout<<"enter array elements: "<<endl;
    for(int i=0; i<n; i++){
    	
    	cin>>arr[i];
	}
	//bubble sort algorithm
	int counter = 1;
	
	while(counter<n)//as long as there are unsorted elements in array
	{  
		for(int i=0; i<n-counter; i++)//traverse only unsorted part of array.
		{  
			//swapping
			if(arr[i]>arr[i+1])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				
			}
		}
		counter++;
	}
	// print sorted array.
	cout<<"sorted array is\n";
	for (int i = 0; i<n ;i++){
		cout<<arr[i]<<" ";
		
		
		
	}
}