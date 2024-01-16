 #include<iostream>
 using namespace std;
 class Rectangle
 {
 	private:
 		int length;
 		int breadth;	
	 public:
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
 	
 };
 int main()
 {
 	///****************Creating Object in STACK by SMA*****************///
 		Rectangle obj1;
 		obj1.setlen(-1);
 		obj1.setbreadth(10);
 		cout<<"Perimeter of Rectangle is: "<<obj1.perimeter();
 		cout<<endl;
 		/////////////Using Pointers//////////
 		Rectangle *ptr;
 		ptr = &obj1;
 		ptr->setlen(4);
 		ptr->setbreadth(8);
 		cout<<"Perimeter of Rectangle is: "<<ptr->perimeter();
 		cout<<endl;
 	//**************** Creating Object in HEAP by DMA******************///
	Rectangle *p = new Rectangle();
	p->setlen(10);
	p->setbreadth(2);
	cout<<"Area of Rectangle is: "<<p->area();

 }