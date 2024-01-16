#include<iostream>
using namespace std;
int main()
{
	int array[] = {0, 1, 2, 3,4 ,5 ,6 ,7 ,8,9,10};	
	int nos;
	nos = sizeof(array)/4;
	
	int start, mid, end, tofind;
	int found = 0;
	start =0;
	end =nos-1;
	
	
	cout<<"enter no to find: "<<endl;
	cin>>tofind;
	while(start <= end )
	{
	mid =(start + end )/2;
	
	if(array[mid] == tofind)
	{
		cout<<"found: "<<endl;
		break;
	}
	else if(tofind > array[mid])
	{
		start = mid +1;
	
	}
	else
	{
		end = mid -1;		
	 }
	}
}