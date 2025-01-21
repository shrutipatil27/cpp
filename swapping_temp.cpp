#include<iostream>
using namespace std;

int main()
{
	int num1,num2,temp;
	
	cout<<"enter the first number:";
	cin>>num1;
	
	cout<<"enter the second number:";
	cin>>num2;
	
	cout<<"\nbefore swaping:"<<endl;
	cout<<"number1: "<< num1 <<endl;
	cout<<"number2: "<< num2 <<endl; 
	
	temp=num1;
	num1=num2;
	num2=temp;
		
	cout<<"\nafter swaping:"<<endl;
	cout<<"number1: "<< num1 <<endl;
	cout<<"number2: "<< num2 <<endl;  
	
	return 0;
	
}

