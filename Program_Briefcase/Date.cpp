//main program is .
#include<iostream>
#include "date.h"

main()
{
	Date d1 (26 ,12 ,2002), d2(28, 2, 2000), d3;
	d1.display();
	++d1;
	cout<<"after adding 1 day date is: ";
	d1.display();
	cout<<endl;
	d2.display();
	d2 = d2 + 5;
	cout<< "\n after adding 5 days to the above date: ";
	d2.display();
}