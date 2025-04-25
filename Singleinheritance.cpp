#include<iostream>
class A{
	public:
		int a,b;
		void get()
		{
			std::cout<<"enter the values of a: ";
			std::cin>>a;
			std::cout<<"enter the values of b: ";
			std::cin>>b;
		}
};
class B:public A
{
	public:
		
			void sum()
			{
				std::cout<<"\nsum: "<<a+b;
			}
		
};
int main()
{
	B obj;
	obj.get();
	obj.sum();
	return 0;
}
