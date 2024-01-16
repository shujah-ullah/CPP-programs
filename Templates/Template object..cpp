//Template class for objects of a class
#include<iostream>
using namespace std;
template<class T>
class test
{
	private:
		T instance;
	public:
		//constructor
		test(T i);
		void print(void);
};
template<class T>
//constructor definintion
test <T>::test(T i )
{
	instance = i;
}
template<class T>
void test<T>:: print(void)
{
	cout<<instance<<endl;
}
int main()
{
	
	test <int>t1(7);
	t1.print();
	
	test <float>t2(7.7);
	t2.print();
	
	test <char>t3('c');
	t3.print();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}