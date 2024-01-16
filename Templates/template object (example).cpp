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

//declaring another class
class best
{
	private:
		int id;
		int score;
	public:
		//constructor
		best(int z)
		{
			id = z;
			score = 300;
		}
		//overloaded << operator on class best by declaring operator function as friend of ostream class.
		friend ostream& operator << (ostream& out, const best &b);
		
				
};
//overloaded << operator on class best by declaring operator function as friend of ostream clas
ostream& operator << (ostream& out, const best &b)
		{
			out<< "id is: "<<b.id;
			out<<"score is: "<<b.score<<endl;
			return (out);
		}
int main()
{
	
	test <int>t1(7);
	t1.print();
	
	test <float>t2(7.7);
	t2.print();
	
	test <char>t3('c');
	t3.print();
	
	test <best>t4(7);
	t4.print();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}