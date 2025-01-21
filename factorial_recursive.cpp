#include<stdio.h>
#include<iostream>
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int number;
	
	
	std::cout<<"enter a non-negative integer:";
	std::cin>>number;
		
	if(number<0)
	{
		std::cout<<"factorial is not defined for negative number."<<std::endl;
	}
	else
	{
		int result= factorial(number);
		std:: cout<<"factorial of " <<number<<" is "<<result<<std::endl;
	}
	return 0;
}
