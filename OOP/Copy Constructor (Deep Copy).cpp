#include<iostream>
using namespace std;
class Point
{
	private:
		int  x ,y;
	public:
		//Default Constructor
		Point(int x1, int y1){x =x1; y=y1; cout<<"default called: "<<endl;}
		
		//copy constructor 
		//SHALLOW COPY
		Point(Point &p1){x=p1.x; y =p1.y; cout<<"Copy Called: "<<endl;}
		
		int getx() {return x;	}
		int gety() {return y;	}
	};
		int main()
		{
			
			Point p1(10, 15); //default call
			cout<<p1.getx() <<"  "<<p1.gety()<<endl;
			Point p2(p1); 
			cout<<p2.getx() <<"  "<<p2.gety();
			
		}