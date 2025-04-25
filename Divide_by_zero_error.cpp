#include<stdexcept>
#include<iostream>
using namespace std;

int main()
{
	float a,b,c;
	cout<<"enter two no. for division:";
	cin>>a>>b;
	
	try
	{
		if(b==0)
		throw"divide by zero error:";
		c=a/b;
		cout<<"Ans="<<c;
	}
	catch(const char*ptr)
	{
		cout<<"Error="<<ptr;
	}
	return 0;
}
