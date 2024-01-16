 #include<iostream>
 using namespace std;
 class Rectangle
 { 
 	private:
 		int length;
 		int breadth;
 	public:
 	
		/////////Parameterized Constructor with default Arguments no Default Constructor is needed////////
 		Rectangle(int l = 0, int b=0)
 		{
 			setlen(l);
			setbreadth(b);		
		}
		////////Copy Constructor////////////////
		//SHALLOW COPY///
		Rectangle(Rectangle &r)
		{
			length = r.length;
			breadth = r.breadth;
		}
		//SETTER function is eligible to access DATA and assigns value which is passed as argument to data members/// 
 		void setlen(int l)
 		{
 			if(l >= 0)
 				length = l;
		 	else
		 		length = 0;
		 }
 		void setbreadth(int b)
 		{
 			if(b >= 0)
 				breadth = b;
		 	else
		 		breadth = 0;
		 }
		 
		 ///GETTER function is used to return values of DATA members//
		 int getlen()
		 {
		 	return length;
		 }
		 int getbreadth()
		 {
		 	return breadth;
		}
	
		 int area()
 			{
 				return length*breadth; 	
			}
		int perimeter()
			{
				return 2*(length+breadth);
			}
			~Rectangle(){
				cout<<"Rectangle Destroyed: ";
			}
 	
 };
 int main()
 {
 	Rectangle r1(10,5);
 	cout<<"r1 Area: "<<r1.area()<<endl;
	///Create r2 having same size as of r1
	Rectangle r2(r1);
	cout<<"r2 Area: "<<r2.area()<<endl;	
 }