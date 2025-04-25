#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void getA()
		{
			cout<<"enter 1st no: ";
			cin>>a;
		}
};
class B
{
	public:
		int b;
		void getB()
		{
			cout<<"enter 2nd no: ";
			cin>>b;
		}
		
		
};
class C:public A,public B
{
	public:
		void sum()
		{
			cout<<"\nsum: "<<a+b;
		}
};
int main()
{
	C obj;
	obj.getA();
	obj.getB();
	obj.sum();
	return 0;
	
}
