#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a non-negative number:";
	cin>>num;
	
	if(num < 0)
	{
	cout<<"factorial is not defined for negative number."<<endl;
		return 1;
	}
	
	int factorial=1;
	int i;
	for(i=1;i<=num;i++)
	{
		factorial*=i;
	}
     std:: cout<<"factorial of " <<num<<" is "<<factorial<<std::endl;
	return 0;
}
